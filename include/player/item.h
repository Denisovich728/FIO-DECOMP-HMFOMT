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

// High-level Item Definition Struct
typedef struct ItemDef {
    u16 id;
    u16 buy_price;
    u16 sell_price;
    s8  stamina_gain;
    s8  fatigue_gain;
    u8  is_drink;
    const char *name;
} ItemDef;

// =============================================================================
// Function Prototypes & GBA Routine Aliases
// =============================================================================

// Tool Routines
void        Tool_Construct(void *tool, u32 id);
int         Tool_GetId(const void *tool);
const char *Tool_GetName(const void *tool);
u16         Tool_GetIconId(const void *tool);
const char *Tool_GetDesc(const void *tool);

void ToolStack_Construct(void *stack, u32 tool_id, u32 amount);
u32  ToolStack_GetTool(const void *stack);
bool ToolStack_IsEmpty(const void *stack);
u32  ToolStack_GetAmount(const void *stack);
void ToolStack_AddAmount(void *stack, u32 amount);
void ToolStack_SubtractAmount(void *stack, u32 amount);

// Food Routines
void        Food_Construct(void *food, u32 id);
int         Food_GetId(const void *food);
const char *Food_GetName(const void *food);
u16         Food_GetIconId(const void *food);
int         Food_GetStaminaGain(const void *food);
int         Food_GetFatigueGain(const void *food);
int         Food_GetStaminaBonus(const void *food);
int         Food_GetFatigueBonus(const void *food);
bool        Food_IsDrink(const void *food);
const char *Food_GetDesc(const void *food);
void        Food_AddBonuses(void *food, s8 stamina, s8 fatigue);

void FoodStack_Construct(void *stack, u32 food_id, u32 amount);
u32  FoodStack_GetFood(const void *stack);
bool FoodStack_IsEmpty(const void *stack);
u32  FoodStack_GetAmount(const void *stack);
void FoodStack_AddAmount(void *stack, u32 amount);
void FoodStack_SubtractAmount(void *stack, u32 amount);

// Article (Misc) Routines
void        Article_Construct(void *article, u32 id);
int         Article_GetId(const void *article);
const char *Article_GetName(const void *article);
u16         Article_GetIconId(const void *article);
bool        Article_CanBeDiscarded(const void *article);
const char *Article_GetDesc(const void *article);

void ArticleStack_Construct(void *stack, u32 article_id, u32 amount);
u32  ArticleStack_GetArticle(const void *stack);
bool ArticleStack_IsEmpty(const void *stack);
u32  ArticleStack_GetAmount(const void *stack);
void ArticleStack_AddAmount(void *stack, u32 amount);
void ArticleStack_SubtractAmount(void *stack, u32 amount);

// Product Routines
void        Product_Construct(void *product, u32 id);
int         Product_GetId(const void *product);
u32         Product_GetPrice(const void *product);
const char *Product_GetName(const void *product);
u16         Product_GetIconId(const void *product);

// General Item Helpers
s32 Item_GetFoodStaminaEffect(const u8 *item_slot);
s32 Item_GetFoodFatigueEffect(const u8 *item_slot);
u32 Item_GetFoodIsDrinkOrLiquid(const u8 *item_slot);

u16 Item_GetBuyPrice(u16 item_id);
u16 Item_GetSellPrice(u16 item_id);
const char *Item_GetDescription(u16 item_id);

#endif // ITEM_H
