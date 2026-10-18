#ifndef FURNITURE_H
#define FURNITURE_H

#include "../global.h"

// =============================================================================
// Farm Buildings & Storage Capacities
// =============================================================================
#define FRIDGE_MAX_SLOTS        64
#define SHELF_MAX_SLOTS         64
#define TOOL_CHEST_MAX_SLOTS    64

typedef struct StorageSlot {
    u16 itemId;
    u8  quantity;
    u8  quality;
} StorageSlot;

typedef struct FarmhouseAppliances {
    bool hasFridge;
    bool hasShelf;
    bool hasKitchen;
    bool hasMirror;
    bool hasClock;
    bool hasLargeBed;
    bool hasRecordPlayer;
    u8   houseLevel; // 0=Starting, 1=First Upgrade, 2=Second Upgrade
    StorageSlot fridge[FRIDGE_MAX_SLOTS];
    StorageSlot shelf[SHELF_MAX_SLOTS];
    StorageSlot toolChest[TOOL_CHEST_MAX_SLOTS];
} FarmhouseAppliances;

typedef struct CoopState {
    u8 chickenCount;
    u8 maxChickens; // 4 or 8
    u8 incubatorSlot;
    u8 feedBinCount;
} CoopState;

typedef struct BarnState {
    u8 animalCount;
    u8 maxAnimals; // 8 or 16
    u8 pregnantSlot;
    u8 feedBinCount;
} BarnState;

// =============================================================================
// Function Prototypes
// =============================================================================
void FarmHouse_Init(void);
u32  FarmHouse_GetLevel(void);
void FarmHouse_Upgrade(u32 new_level);

void ToolChest_Init(void);
u32  ToolChest_GetItem(u32 slot_id);

void Fridge_Init(void);
u32  Fridge_GetItem(u32 slot_id);

void Shelf_Init(void);
u32  Shelf_GetItem(u32 slot_id);

void RecordPlayer_Init(void);
void RecordPlayer_PlayTrack(u32 track_id);

void Coop_Init(void);
u32  Coop_GetChickenCount(void);

void Barn_Init(void);
u32  Barn_GetCowCount(void);

void Stable_Init(void);

#endif // FURNITURE_H
