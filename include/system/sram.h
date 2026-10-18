#ifndef SYSTEM_SRAM_H
#define SYSTEM_SRAM_H

#include "../global.h"

// =============================================================================
// Harvest Moon: Friends of Mineral Town - 64 KB Battery SRAM Save Structure
// Memory Address: 0x0E000000 to 0x0E00FFFF
// =============================================================================

#define SRAM_BASE_ADDR        0x0E000000
#define SRAM_TOTAL_SIZE       0x10000     // 64 KB Battery Backup RAM
#define SRAM_SLOT_SIZE        0x2000      // 8 KB per diary slot
#define SRAM_MAGIC_HM4A       0x41344D48  // "HM4A" in Little-Endian

// SRAM Memory Map Offsets
#define SRAM_OFFSET_DIARY1        0x0000
#define SRAM_OFFSET_DIARY1_MIRROR 0x2000
#define SRAM_OFFSET_DIARY2        0x4000
#define SRAM_OFFSET_DIARY2_MIRROR 0x6000
#define SRAM_OFFSET_QUICKSAVE     0x8000
#define SRAM_OFFSET_SYSTEM_CONFIG 0xA000

// =============================================================================
// Complete Save Slot Layout (0x2000 Bytes / 8 KB)
// =============================================================================
typedef struct SaveSlot {
    /* +0x0000 */ u32  magic;                    // 0x41344D48 ("HM4A")
    /* +0x0004 */ u16  version;                  // Save game revision index
    /* +0x0006 */ u16  checksum;                 // 16-bit cyclic parity checksum
    /* +0x0008 */ char player_name[12];          // Player character name (null-padded)
    /* +0x0014 */ char farm_name[12];            // Farm estate name (null-padded)
    /* +0x0020 */ u32  gold;                     // Currency balance
    /* +0x0024 */ u8   year;                     // Current calendar year (1-based)
    /* +0x0025 */ u8   season;                   // 0=Spring, 1=Summer, 2=Autumn, 3=Winter
    /* +0x0026 */ u8   day;                      // Day of month (1-30)
    /* +0x0027 */ u8   hour;                     // Current hour (0-23)
    /* +0x0028 */ s8   stamina_current;          // Current stamina
    /* +0x0029 */ s8   stamina_max;              // Maximum stamina (150 - 250)
    /* +0x002A */ s8   fatigue_current;          // Current fatigue
    /* +0x002B */ s8   fatigue_max;              // Maximum fatigue (100)
    /* +0x002C */ u8   rucksack_inventory[0x80]; // Rucksack items and tool slots
    /* +0x00AC */ u8   farm_grid[1075];          // 43x25 farmland plot bitfields
    /* +0x04DF */ u8   shipping_stats[0x1E0];    // Lifetime shipping product tallies
    /* +0x06BF */ u8   barn_animals[0x250];      // Barn cows and sheep states
    /* +0x090F */ u8   coop_animals[0x180];      // Coop chicken states
    /* +0x0A8F */ u8   npc_affection[0x200];     // Villager friendship & heart points
    /* +0x0C8F */ u8   story_flags[0x100];       // Global story & event bitmask
    /* +0x0D8F */ u8   house_and_furniture[0x271];// House tier and appliance flags
    /* +0x1000 */ u8   reserved_padding[0x1000]; // Slot alignment padding to 0x2000
} SaveSlot;

// =============================================================================
// SRAM Save Manager Function Prototypes
// =============================================================================
bool Sram_Init(void);
bool Sram_VerifyChecksum(u8 slot_index);
bool Sram_ReadSlot(u8 slot_index, SaveSlot *dest);
bool Sram_WriteSlot(u8 slot_index, const SaveSlot *src);
u16  Sram_CalculateChecksum(const u8 *data, u32 size);
u8   Sram_GetActiveSlot(void);

#endif // SYSTEM_SRAM_H
