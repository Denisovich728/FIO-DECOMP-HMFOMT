#ifndef ITEM_H
#define ITEM_H

#include "../global.h"

// =============================================================================
// Item Data Definition (Harvest Moon: Friends of Mineral Town - GBA)
// =============================================================================

// Structure for Food & Crop entries at 0x080EDCD8 (16 bytes per entry)
typedef struct FoodCropDef {
    const char *name_ptr;       // +0x00: Pointer to English item name
    u8 is_drink_or_medicine;    // +0x04: 0 = solid food, 1 = liquid / medicine
    s8 stamina_effect;          // +0x05: Signed stamina delta (+50 for Bodigizer, -50 for Poisonous Mushroom)
    s8 fatigue_effect;          // +0x06: Signed fatigue delta (-20 for Turbojolt, +10 for Poisonous Mushroom)
    u8 padding_07;              // +0x07: 0x00
    u16 graphic_id;             // +0x08: Graphic ID in Master UI array
    u16 flags;                  // +0x0A: Item flags
    const char *desc_ptr;       // +0x0C: Pointer to item description string
} FoodCropDef;

// Structure for Tool entries at 0x080EAB0C (12 bytes per entry)
typedef struct ToolDef {
    const char *name_ptr;       // +0x00: Pointer to English item name
    u16 graphic_id;             // +0x04: Graphic ID in Master UI array
    u16 level_or_tier;          // +0x06: Tool tier level (0 = Iron, 1 = Copper, ... 7 = Mythic)
    const char *desc_ptr;       // +0x08: Pointer to item description string
} ToolDef;

// Structure for Mineral & Misc entries at 0x080EFED4 (12 bytes per entry)
typedef struct MineralMiscDef {
    const char *name_ptr;       // +0x00: Pointer to English item name
    u16 graphic_id;             // +0x04: Graphic ID in Master UI array
    u16 flags;                  // +0x06: Item flags
    const char *desc_ptr;       // +0x08: Pointer to item description string
} MineralMiscDef;

// High-level C struct
typedef struct ItemDef {
    u16 id;
    u16 buy_price;
    u16 sell_price;
    s8 stamina_effect;
    s8 fatigue_effect;
    u8 category;
    const char *name;
} ItemDef;

// Function prototypes & GBA routine aliases
s32 Item_GetFoodStaminaEffect(const u8 *item_slot); // func_0800DD08
s32 Item_GetFoodFatigueEffect(const u8 *item_slot); // func_0800DD3C
u32 Item_GetFoodIsDrinkOrLiquid(const u8 *item_slot); // func_0800DDAC

u16 Item_GetBuyPrice(u16 item_id);
u16 Item_GetSellPrice(u16 item_id);
s8  Item_GetStaminaEffect(u16 item_id);
s8  Item_GetFatigueEffect(u16 item_id);
const char *Item_GetDescription(u16 item_id);

#endif // ITEM_H
