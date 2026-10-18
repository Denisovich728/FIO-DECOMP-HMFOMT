#ifndef FARMER_H
#define FARMER_H

#include "../global.h"

#define MAX_STAMINA_DEFAULT 150
#define MAX_FATIGUE_DEFAULT 100

// =============================================================================
// Tool Types & Tier Levels
// =============================================================================
typedef enum ToolType {
    TOOL_NONE = 0,
    TOOL_SICKLE,
    TOOL_HOE,
    TOOL_AXE,
    TOOL_HAMMER,
    TOOL_WATERING_CAN,
    TOOL_FISHING_ROD,
    TOOL_MILKER,
    TOOL_SHEARS,
    TOOL_BRUSH,
    TOOL_BELL
} ToolType;

typedef enum ToolTier {
    TIER_IRON     = 0,
    TIER_COPPER   = 1,
    TIER_SILVER   = 2,
    TIER_GOLD     = 3,
    TIER_MYSTRILE = 4,
    TIER_CURSED   = 5,
    TIER_BLESSED  = 6,
    TIER_MYTHIC   = 7
} ToolTier;

typedef struct ToolItem {
    u8 tool_type;
    u8 tier_level;
    u16 experience;
} ToolItem;

// =============================================================================
// Held Item Structure
// =============================================================================
typedef enum HeldItemKind {
    HELD_KIND_FOOD    = 0,
    HELD_KIND_ARTICLE = 1,
    HELD_KIND_ANIMAL  = 2,
    HELD_KIND_EMPTY   = 5
} HeldItemKind;

typedef struct HeldItem {
    u8 kind;
    u8 padding;
    u16 item_id;
    u8 quantity;
    u8 quality;
} HeldItem;

// =============================================================================
// Rucksack Slot & Inventory
// =============================================================================
typedef struct RucksackItem {
    u16 item_id;
    u8 quantity;
    u8 quality;
} RucksackItem;

typedef struct Rucksack {
    u8 item_capacity;  // 4 or 8
    u8 tool_capacity;  // 4 or 8
    RucksackItem items[8];
    ToolItem tools[8];
} Rucksack;

// =============================================================================
// Farmer Character State
// =============================================================================
typedef struct Farmer {
    char name[12];
    char farm_name[12];
    GameDate birthday;
    s16 stamina;
    s16 fatigue;
    s16 max_stamina;
    
    ActorLocation location;
    
    ToolItem equipped_tool;
    HeldItem held_item;
    Rucksack rucksack;
    
    u32 gold;
    u32 step_count;
    u16 power_berries_found;
    bool has_ate_mystery_berry;
    bool is_fatigued;
} Farmer;

// =============================================================================
// Farmer Function Prototypes
// =============================================================================
void        Farmer_Init(Farmer *farmer, const char *name);
const char *Farmer_GetName(const Farmer *farmer);
const char *Farmer_GetFarmName(const Farmer *farmer);
GameDate    Farmer_GetBirthday(const Farmer *farmer);
u32         Farmer_GetStamina(const Farmer *farmer);
u32         Farmer_GetFatigue(const Farmer *farmer);
void        Farmer_UpdateFatigue(Farmer *farmer, s16 delta);
bool        Farmer_IsOverworked(const Farmer *farmer);
u32         Farmer_GetMaxStamina(const Farmer *farmer);
u32         Farmer_GetPowerBerries(const Farmer *farmer);
bool        Farmer_AteMysteryBerry(const Farmer *farmer);
u32         Farmer_GetToolLevel(const Farmer *farmer, u32 tool_index);
u32         Farmer_GetUpgradedTool(const Farmer *farmer, u32 base_tool_id);
void        Farmer_UseEquippedTool(Farmer *farmer);

ActorLocation Farmer_GetLocation(const Farmer *farmer);
u32         Farmer_GetStepCount(const Farmer *farmer);
void        Farmer_SetFarmName(Farmer *farmer, const char *name);
void        Farmer_AddStamina(Farmer *farmer, int delta);
void        Farmer_ReduceStamina(Farmer *farmer, int delta);
void        Farmer_RestoreStamina(Farmer *farmer);
void        Farmer_AddFatigue(Farmer *farmer, int delta);
void        Farmer_ReduceFatigue(Farmer *farmer, int delta);
void        Farmer_ClearFatigue(Farmer *farmer);
void        Farmer_SetFatiguedFlag(Farmer *farmer);
void        Farmer_EatPowerBerry(Farmer *farmer);
void       *Farmer_GetToolLevelRef(Farmer *farmer, int idx);
void        Farmer_SetLocation(Farmer *farmer, const ActorLocation *loc);

u32         Farmer_CycleHeldItemBack(Farmer *farmer);
u32         Farmer_CycleHeldItemFront(Farmer *farmer);
u32         Farmer_CycleToolBack(Farmer *farmer);
u32         Farmer_CycleToolFront(Farmer *farmer);
void        Farmer_IncrementPedometerStep(Farmer *farmer);

// Tool Level Progression Prototypes
u32  ToolLevel_GetExperience(const void *tool_level);
u32  ToolLevel_GetTierLevel(const void *tool_level);
bool ToolLevel_CanUpgrade(const void *tool_level);
void ToolLevel_AddExperience(void *tool_level, int exp);
void ToolLevel_SetTierLevel(void *tool_level, u32 tier);
void ToolLevel_Reset(void *tool_level);

// Held Item Prototypes
bool HeldItem_IsEmpty(const HeldItem *held);
u32  HeldItem_GetKind(const HeldItem *held);
u32  HeldItem_GetFood(const HeldItem *held);
u32  HeldItem_GetArticle(const HeldItem *held);
RucksackItem HeldItem_ToRucksackItem(const HeldItem *held);
bool HeldItem_IsValid(const HeldItem *held);
void HeldItem_Clear(HeldItem *held);
void HeldItem_SetFood(HeldItem *held, u32 food_id);
void HeldItem_SetArticle(HeldItem *held, u32 article_id);
void HeldItem_FromRucksackItem(HeldItem *held, RucksackItem item);
bool HeldItem_CanThrow(const HeldItem *held);

// Rucksack Prototypes
bool Rucksack_AddItem(Rucksack *rucksack, u16 item_id, u8 quantity);
bool Rucksack_RemoveItem(Rucksack *rucksack, u8 slot_index);

#endif // FARMER_H
