#ifndef DISPATCHER_H
#define DISPATCHER_H

#include "../global.h"

// =============================================================================
// Harvest Moon: Friends of Mineral Town - Central Dispatcher & GBA HAL
// Function: Dispatcher_HandleCall @ 0x080002C0
// 154 Service Handlers (Categories 0x00 to 0x99)
// =============================================================================

// Dispatcher Function Prototypes
void Dispatcher_HandleCall(u32 call_id, void *args);

// SRAM Save Backup Proxies
u32  SramProxy_ReadSaveData(void *dest_buffer);
u32  SramProxy_WriteSaveData(const void *src_buffer);
bool SramProxy_VerifyChecksum(const void *buffer);
u32  SramProxy_GetSaveSlotOffset(void);
u32  SramProxy_ReadSaveSlot(u8 slot_index, void *dest);
u32  SramProxy_WriteSaveSlot(u8 slot_index, const void *src);
void SramProxy_FlushSlotBuffer(void);
bool SramProxy_VerifySlotChecksum(u8 slot_index);
void SramProxy_InitHardware(void);
void SramProxy_LoadGlobalSettings(void *settings);
void SramProxy_SaveGlobalSettings(const void *settings);
u32  SramProxy_WriteBlock(u32 sram_offset, const void *src, u32 size);
u32  SramProxy_ReadBlock(u32 sram_offset, void *dest, u32 size);
void SramProxy_SetWaitstates(int waitstate_cycles);
u16  SramProxy_CalculateChecksum(const u8 *data, u32 length);
bool SramProxy_VerifyBufferParity(const u8 *data, u32 length);

// Interrupt & Hardware Synchronization
void Interrupt_InitVBlank(void);
void Interrupt_EnableHBlank(int enable);
void Interrupt_SetMasterEnable(u16 master_ie);
void Interrupt_WaitForVBlank(u16 flags);
void Interrupt_SetCallback(u32 intr_id, void (*handler)(void));
void Interrupt_ClearPending(u16 intr_flags);
void Interrupt_DisableFlag(u16 intr_flags);

#endif // DISPATCHER_H
