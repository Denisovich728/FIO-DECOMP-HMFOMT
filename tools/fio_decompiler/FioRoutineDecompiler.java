import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import java.io.*;
import java.util.*;

/**
 * ==============================================================================
 * FIO DECOMPILER - CUSTOM ROUTINE DECOMPILER (HEADLESS INSTANCE)
 * ==============================================================================
 * Invoked via Ghidra Headless on fomt_virgen_ghidra project.
 * Supports targeted branch analysis, deep jump tables (up to 4096 entries),
 * and clean control flow recovery.
 * ==============================================================================
 */
public class FioRoutineDecompiler extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 4) {
            println("[ERROR] FioRoutineDecompiler requiere 4 argumentos:");
            println("  1: StartAddress (Hex, ej: 0x0803AEA0)");
            println("  2: EndAddress (Hex o 'auto')");
            println("  3: FunctionName");
            println("  4: OutputFilePath");
            return;
        }

        String startStr = args[0].trim();
        String endStr   = args[1].trim();
        String name     = args[2].trim();
        String outPath  = args[3].trim();

        long sAddr = parseHexAddress(startStr);
        Address start = toAddr(sAddr);

        println("=== FIO CUSTOM ROUTINE DECOMPILER ===");
        println("[*] Target Routine : " + name);
        println("[*] Start Address  : 0x" + Long.toHexString(sAddr).toUpperCase());

        DecompInterface decomp = new DecompInterface();
        DecompileOptions dOpts = new DecompileOptions();
        dOpts.grabFromProgram(currentProgram);
        dOpts.setWARNCommentIncluded(false);
        dOpts.setMaxJumpTableEntries(4096);
        dOpts.setMaxInstructions(250000);
        dOpts.setMaxPayloadMBytes(200);
        dOpts.setEliminateUnreachable(true);
        decomp.setOptions(dOpts);
        decomp.toggleSyntaxTree(true);

        if (!decomp.openProgram(currentProgram)) {
            println("[ERROR] No se pudo abrir currentProgram en DecompInterface.");
            return;
        }

        Function func = null;
        if (endStr.equalsIgnoreCase("auto")) {
            func = getFunctionAt(start);
            if (func == null) {
                // Intenta buscar la funcion que contiene la direccion
                func = getFunctionContaining(start);
            }
            if (func == null) {
                // Desensambla y crea funcion basica
                DisassembleCommand disCmd = new DisassembleCommand(start, null, true);
                disCmd.applyTo(currentProgram, monitor);
                CreateFunctionCmd cmd = new CreateFunctionCmd(name, start, null, SourceType.USER_DEFINED);
                cmd.applyTo(currentProgram, monitor);
                func = getFunctionAt(start);
            }
        } else {
            long eAddr = parseHexAddress(endStr);
            Address end = toAddr(eAddr);
            AddressSet body = new AddressSet(start, end);

            Function oldFunc = getFunctionAt(start);
            if (oldFunc != null) {
                removeFunction(oldFunc);
            }

            DisassembleCommand disCmd = new DisassembleCommand(start, body, true);
            disCmd.applyTo(currentProgram, monitor);

            CreateFunctionCmd cmd = new CreateFunctionCmd(name, start, body, SourceType.USER_DEFINED);
            cmd.applyTo(currentProgram, monitor);
            func = getFunctionAt(start);
        }

        if (func == null) {
            println("[ERROR] No se pudo resolver o crear funcion en " + start);
            return;
        }

        println("[*] Decompilando " + func.getName() + " @ " + func.getEntryPoint() + "...");
        DecompileResults res = decomp.decompileFunction(func, 120, monitor);

        if (res == null || !res.decompileCompleted()) {
            println("[ERROR] Decompilacion fallida: " + (res != null ? res.getErrorMessage() : "null"));
            return;
        }

        DecompiledFunction decFunc = res.getDecompiledFunction();
        if (decFunc == null) {
            println("[ERROR] DecompiledFunction es null.");
            return;
        }

        String cCode = decFunc.getC();
        File outFile = new File(outPath);
        File parentDir = outFile.getParentFile();
        if (parentDir != null && !parentDir.exists()) {
            parentDir.mkdirs();
        }

        BufferedWriter writer = new BufferedWriter(new FileWriter(outFile));
        writer.write("// =============================================================================\n");
        writer.write("// FIO DECOMPILER (Targeted Decompilation Instance)\n");
        writer.write("// Function: " + name + " @ 0x" + Long.toHexString(sAddr).toUpperCase() + "\n");
        writer.write("// =============================================================================\n\n");
        writer.write(cCode);
        writer.write("\n");
        writer.close();

        println("[SUCCESS] Decompilacion completada con exito (" + cCode.length() + " caracteres).");
        println("[+] Codigo exportado a: " + outFile.getAbsolutePath());
    }

    private long parseHexAddress(String str) {
        String s = str.trim();
        if (s.startsWith("0x") || s.startsWith("0X")) {
            s = s.substring(2);
        }
        return Long.parseLong(s, 16);
    }
}
