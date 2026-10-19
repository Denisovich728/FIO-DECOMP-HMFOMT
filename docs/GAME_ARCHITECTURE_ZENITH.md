# Arquitectura Global y Mecanicas Nucleares — Harvest Moon: Friends of Mineral Town (GBA)
**Documento Tecnico Zenith — Antigravity Engineering System (Hermes Core)**
**Target:** `j:\Laboratorio\harvest_moon_fomt_decomp` | **Usuario:** Denisovich728

---

## 1. Mapa de Memoria y Direccionamiento de Hardware (GBA ARM7TDMI)

| Rango de Direcciones | Region de Memoria | Tamano | Proposito en Harvest Moon: FoMT |
|---|---|---|---|
| `0x02000000 - 0x0203FFFF` | **EWRAM** (External Work RAM) | 256 KB | Estado global del mundo: Mapa de casillas de granja (28x28), buffer de descompresion de partida guardada (0x34F4 bytes), colas de eventos y buffers de texto. |
| `0x03000000 - 0x03007FFF` | **IWRAM** (Internal Fast RAM) | 32 KB | Stack de ejecucion, tabla de despachadores de interrupcion BIOS (`gIWRAM_030A1C`), buffers criticos de DMA (`gIWRAM_SramBuffer`), estructuras de control de temporizadores de sonido M4A. |
| `0x04000000 - 0x040003FE` | **IO Registers** | 1 KB | Registros de hardware GBA: `REG_DISPCNT` (0x4000000), `REG_BG0-3CNT`, `REG_DMA0-3`, `REG_KEYINPUT` (0x4000130), `REG_BLDCNT` (0x4000050, control de fundidos alpha). |
| `0x05000000 - 0x050003FF` | **PALRAM** (Palette RAM) | 1 KB | Paleta de 512 colores (256 colores para capas de fondo BG y 256 colores para sprites OBJ). |
| `0x06000000 - 0x06017FFF` | **VRAM** (Video RAM) | 96 KB | Tiles de mapa (`0x0600C000`, `0x0600F000`) y tiles de sprites OBJ (`0x06010000` para animaciones de personajes y duendes). |
| `0x07000000 - 0x070003FF` | **OAM** (Object Attribute Memory) | 1 KB | 128 descriptores de sprites (X, Y, tamano, prioridad, flip H/V y paleta). |
| `0x08000000 - 0x08FFFFFF` | **ROM** (Game Cartridge) | 8 MB / 16 MB | Codigo ejecutable Thumb/ARM compilado por GCC para ARMv4T, tablas de datos estaticos (`gCropFoodDefinitions`, `gToolDefinitions`, etc.). |
| `0x0E000000 - 0x0E00FFFF` | **SRAM** (Cartridge Save RAM) | 64 KB | 2 slots de guardado (0x20 bytes de firma magica `"MARVELOUS"`, checksum de paridad y bloques comprimidos). |

---

## 2. Mapa Modular de los 15 Componentes de `src/`

### 2.1 Sistema y Kernel
- **`src/main.c` (3 funciones):**
  - `GBA_Header_Boot` (`0x08000000`): Vector de arranque del cartucho, inicializacion de registros de hardware y copia de sección `.data` a IWRAM via DMA3.
  - `crt0_entry` (`0x080000C0`): Punto de entrada del runtime C/C++, ejecucion de la tabla de constructores estaticos.
  - `MainLoop_Callback` (`0x08000240`): Reseteo de pantalla a negro (`REG_DISPCNT = 0x80`), parada de audio y sincronizacion a VBlank.

- **`src/core/dispatcher.c` (32 funciones):**
  - **SRAM Save System:** `SramProxy_ReadSaveData`, `SramProxy_WriteSaveData`, `SramProxy_VerifyChecksum`, `SramProxy_ReadSaveSlot`, `SramProxy_WriteSaveSlot`, `SramProxy_FlushSlotBuffer`, `SramProxy_CalculateChecksum`, `SramProxy_VerifyBufferParity`.
  - **C++ Memory Runtime:** `CppRuntime_AllocateMemory` (`0x0800059C`), `CppRuntime_OperatorNew`, `CppRuntime_OperatorDelete`, `CppRuntime_OperatorNewArray`, `CppRuntime_FreeMemory`.
  - **Manejador de Interrupciones BIOS:** `Interrupt_InitVBlank`, `Interrupt_EnableHBlank`, `Interrupt_WaitForVBlank`, `Interrupt_SetCallback`.

- **`src/core/hardware.c` (112 funciones):**
  - **Save & Load Screen Controller:** `SaveManager_LoadGameSlot` (`0x080040A0`, asigna 0x34F4 bytes para descompresion, gestiona hasta 3 reintentos de lectura de SRAM y muestra mensaje de datos danados en caso de error critico), `SaveLoadScreen_Init`, `SaveLoadScreen_RunLoop`, `SaveLoadScreen_Deinit`.
  - **Capa de Abstraccion GBA:** Manejadores de paleta (`GBA_PaletteManager_Init`), capas de fondo BG (`GBA_BgLayer_Init`), atributos OBJ (`GBA_ObjAttr_Init`) y copia ultra-rapida de bloques VRAM mediante DMA3 (`GBA_DMA3_FastCopy`).

- **`src/core/scene_manager.c` (19 funciones):**
  - Gestion de transicion de escenas: Secuencia de titulo, introduccion, nuevo juego, cambio entre exteriores e interiores, transicion noche/dia.

---

### 2.2 Simulacion de Granja y Economia
- **`src/farm/farm.c` (75 funciones):**
  - **Cuadricula del Campo (`FieldPlot_...`):** Resolucion de casillas de 28x28 (coordenadas empaquetadas en punto fijo).
  - **Acciones Agricolas:** `FieldPlot_GetState`, `FieldPlot_IsTilled`, `FieldPlot_GetCropType`, `FieldPlot_PlantSeeds`, `FieldPlot_TillSoil`, `FieldPlot_HarvestCrop`, `FieldPlot_StrikeWithHammer`, `FieldPlot_ChopBranch`, `FieldPlot_ClearWeeds`, `FieldPlot_SeasonChangeClear`.
  - **Logica de la Granja:** `Farm_GetSpawnCoordinates`, `Farm_HasHorse`, `Farm_AddLumber`, `Farm_TakeLumber`, `Farm_DayUpdate`, `Farm_SeasonTransition` (limpia cultivos al cambiar la estacion, excepto hierba perenne).
  - **Controlador de Entrada y Fundidos:** `Input_PollTriggers`, `Input_ProcessAutoRepeat`, `Fade_StartFadeIn`, `Fade_StartFadeOut`, `Fade_UpdateFrame` (control directo de hardware `REG_BLDCNT` y `REG_BLDY` para fundidos a negro y blanco).

- **`src/farm/shipping_bin.c` (24 funciones):**
  - **Cajon de Envios:** Capacidad de 64 ranuras de almacenamiento (`0x3F`).
  - **Mecanica de Zack:** A las 5:00 PM, Zack visita la granja y ejecuta `ShippingBin_CollectDailyEarnings`.
  - **Contabilidad:** `ShippingBin_AddItemQuantity` (apila hasta 99 unidades por ranura), `ShippingBin_CalculateDailyTotalEarnings`, `ShippingBin_HasShippedOneOfEachCrop`, `ShippingBin_HasShippedOneOfEachMineral`.

- **`src/farm/buildings.c` (88 funciones):**
  - **Electrodomesticos y Muebles:** `Fridge_GetItem` / `Fridge_SetItem`, `Shelf_Init` / `Shelf_GetItem`, `ToolChest_GetItem` / `ToolChest_SetItem`, `RecordPlayer_PlayTrack` / `RecordPlayer_StopTrack`.
  - **Edificios:** `FarmHouse_Init` / `FarmHouse_Upgrade` (ampliaciones de Gotz: cocina, cama grande), `Coop_Init` / `Coop_GetChickenCount`, `Barn_Init` / `Barn_GetCowCount`.

---

### 2.3 Jugador, Herramientas e Items
- **`src/player/item.c` (79 funciones):**
  - **Tabla `gCropFoodDefinitions` (16 bytes por alimento/cultivo):**
    - `+0x00`: Puntero al nombre del alimento en ROM.
    - `+0x04`: Flag booleano de bebida/liquido (`Item_GetFoodIsDrinkOrLiquid`).
    - `+0x05`: Puntos de Stamina recuperados (`Item_GetFoodStaminaEffect`).
    - `+0x06`: Puntos de Fatiga reducidos (`Item_GetFoodFatigueEffect`).
    - `+0x08`: Precio base de compra y venta (`Item_GetFoodBasePrice`).
    - `+0x0C`: Puntero a la descripcion de texto en ROM.
  - **Herramientas (7 Niveles):** Normal (Hierro), Cobre, Plata, Oro, Mithril, Maldita/Bendita, Mitica.

- **`src/player/farmer.c` (313 funciones):**
  - **Pete / Claire:** `Farmer_Init`, `Farmer_GetFacingDirection`, `Farmer_CalculateTargetTileGrid`.
  - **Stamina y Fatiga:** Stamina base de 100 puntos (ampliable a 250 con las 10 Bayas de Poder via `Farmer_EatPowerBerry`), Fatiga de 0 a 100 puntos.
  - **Desmayo por Sobreesfuerzo:** `Farmer_IsOverworked` (al llegar a 0 de stamina, el gasto pasa a sumar fatiga; al llegar a 100 de fatiga, el personaje se desmaya y despierta en la clinica con el Doctor y Elli).
  - **Mochila y Podometro:** `Farmer_CycleHeldItemBack`, `Farmer_CycleToolFront`, `Farmer_IncrementPedometerStep`.

---

### 2.4 Entidades Vivas y Mineral Town
- **`src/entities/npc.c` (350 funciones):**
  - **Aldeanos (40 NPCs):** Karen, Popuri, Elli, Ann, Mary, Rick, Cliff, Doctor, Gray, Kai, Harvest Goddess, Kappa, etc.
  - **Rutinas Diarias y Horarios:** `NPC_UpdateSchedule`, `NPC_ReduceMood`, `NPC_ResetScheduleWaypoint`, `NPC_ClearWaypoints`, `NPC_EvaluateGiftReaction`.
  - **Social y Amistad:** `NPC_AddFriendship` (puntos de amistad 0 a 255), `NPC_ReduceFriendship`, `NPC_SetTalkedToday`, `NPC_ProcessGiftGiven`.
  - **Bachelorettes y Romance:** `Bachelorette_AddAffection` (afecto 0 a 65535 en offset `+0x14`), `Bachelorette_ReduceAffection`, `Bachelorette_IncrementHeartLevel` (0: Negro, 1: Purpura, 2: Azul, 3: Verde, 4: Amarillo, 5: Naranja, 6: Rojo), `Bachelorette_ProcessDailyAffection`.
  - **Harvest Sprites (7 Duendes):** Chef, Naughty, Bold, Stodgy, Timid, Aqua, Hoggy.
  - **Minijuegos de Entrenamiento:** `HarvestSprite_Minigame_UpdateCountdownTimer` (temporizador de 60 segundos con renderizado de digitos en VRAM `0x06010000`), `HarvestSprite_Minigame_ShowUI`, `HarvestSprite_Minigame_SetupDifficultyAndTargets` (10, 15, 20 o 30 dianas).

- **`src/entities/animals.c` (556 funciones):**
  - **Ganaderia:** Vacas (`Cow_*`), Ovejas (`Sheep_*`), Gallinas (`Chicken_*`), Perro (`Dog_*`), Caballo (`Horse_*`).
  - **Calidad de Productos:** S, M, L, G (Gold, ganando festival), P (Platinum), X (1/255 probabilidad o receta secreta).
  - **Pastoreo al Aire Libre:** `Animal_EvaluateGrazingAndFeed` (evalua las coordenadas de la cuadricula 28x28 y deduce alimentacion si hay pasto maduro disponible).

- **`src/entities/entity_manager.c` (445 funciones):**
  - **Estructura `WorldEntity`:**
    - `+0x00`: Puntero a tabla de metodos virtuales (`vtable`).
    - `+0x04`: Identificador unico de entidad (`id`).
    - `+0x08`: Coordenada X en punto fijo 16.16 (`posX`).
    - `+0x0C`: Coordenada Y en punto fijo 16.16 (`posY`).
    - `+0x18`: Vector de velocidad X en punto fijo 16.16 (`velocityX`).
    - `+0x1C`: Vector de velocidad Y en punto fijo 16.16 (`velocityY`).
    - `+0x20`: Orientacion cardinal (`facing`: 0=Abajo, 1=Arriba, 2=Izquierda, 3=Derecha).
  - **Cinematica:** `Entity_SetVelocityFromDirection`, `Entity_MoveAndCollide`, `Entity_CanMoveToPosition`, `Entity_ProcessCollisions`.

---

### 2.5 Motor de Eventos, Sonido y Runtime
- **`src/events/script_engine.c` (151 funciones):**
  - **Virtual Machine de Bytecode:** `ScriptEngine_Construct`, `ScriptEngine_Destruct`, `ScriptEngine_ClearVM`.
  - **Pila de Evaluacion:** `ScriptEngine_AllocateStack`, `ScriptEngine_StackPush`, `ScriptEngine_StackPop`, `ScriptEngine_StackTop`.
  - **Control de Flujo:** `ScriptEngine_SetPC`, `ScriptEngine_GetPC`, `ScriptEngine_ResolveJumpTarget`, `ScriptEngine_LookupJumpTable`.
  - **Hilos de Script (Fibers):** `ScriptEngine_InitScriptFiber` (gestiona eventos en paralelo, temporizadores y bifurcaciones de dialogo condicionales).

- **`src/audio/m4a.c` (165 funciones):**
  - **Driver Music Player 2000 (M4A):** Motor de audio oficial de Nintendo para Game Boy Advance.
  - **Canales:** Sintetizador de 2 canales DirectSound PCM de 8 bits a 16 kHz / 32 kHz, mas 4 canales PSG de Game Boy clasico (Pulse 1, Pulse 2, Wave, Noise).
  - **Rutinas:** `M4A_InitSoundDriver`, `M4A_PlaySong`, `M4A_StopSong`, `M4A_SetMasterVolume`.

- **`src/core/vtables.c` (427 funciones):**
  - Tablas de metodos virtuales C++ compiladas para cada actor del juego y stubs de destruccion polimorfica.
