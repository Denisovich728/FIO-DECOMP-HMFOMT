#ifndef FARM_H
#define FARM_H

#include "../global.h"
#include "shipping_bin.h"

#define FIELD_WIDTH  43
#define FIELD_HEIGHT 25
#define TOTAL_PLOTS  (FIELD_WIDTH * FIELD_HEIGHT) // 1,075 plots

// =============================================================================
// Field Plot State & Crops
// =============================================================================
typedef enum CropType {
    CROP_NONE = 0,
    CROP_TURNIP,
    CROP_POTATO,
    CROP_CUCUMBER,
    CROP_STRAWBERRY,
    CROP_CABBAGE,
    CROP_TOMATO,
    CROP_CORN,
    CROP_ONION,
    CROP_PUMPKIN,
    CROP_PINEAPPLE,
    CROP_EGGPLANT,
    CROP_CARROT,
    CROP_SWEET_POTATO,
    CROP_SPINACH,
    CROP_GREEN_PEPPER,
    CROP_GRASS
} CropType;

typedef struct FieldPlot {
    u8 crop_type;
    u8 growth_stage;
    u8 is_watered : 1;
    u8 is_tilled : 1;
    u8 has_stone : 1;
    u8 has_wood : 1;
    u8 has_weed : 1;
    u8 padding : 3;
} FieldPlot;

typedef struct Field {
    FieldPlot plots[FIELD_HEIGHT][FIELD_WIDTH];
} Field;

// =============================================================================
// Overall Farm State
// =============================================================================
typedef struct Farm {
    char name[12];
    u32 lumber : 10;
    bool has_horse : 1;
    bool unk_flag1 : 1;
    bool unk_flag2 : 1;
    u32 padding : 19;
    
    // Subsystems
    ShippingBin shipping_bin;
    u8 farm_house_data[0x21C];
    u8 coop_data[0x1E0];
    u8 barn_data[0x3EC];
    Field field;
} Farm;

// =============================================================================
// Field Plot Function Prototypes
// =============================================================================
u32  FieldPlot_GetState(const FieldPlot *plot);
bool FieldPlot_IsTilled(const FieldPlot *plot);
u32  FieldPlot_GetCropType(const FieldPlot *plot);
void FieldPlot_WaterPlot(FieldPlot *plot, int amount);
void FieldPlot_SetCropAndStage(FieldPlot *plot, int crop_id, int stage);
u32  FieldPlot_TillSoil(FieldPlot *plot, bool can_till);
u32  FieldPlot_PlantSeeds(FieldPlot *plot, int seed_type);
u32  FieldPlot_StrikeWithHammer(FieldPlot *plot, int tool_level);
u32  FieldPlot_ChopBranch(FieldPlot *plot);
u32  FieldPlot_ClearWeeds(FieldPlot *plot);
void FieldPlot_SetDebris(FieldPlot *plot, int debris_type);
u32  FieldPlot_HarvestCrop(FieldPlot *plot);
bool FieldPlot_CanPlaceItem(const FieldPlot *plot, u32 item_id);
void FieldPlot_PlaceItem(FieldPlot *plot, u32 item_id);
bool FieldPlot_IsPassable(const FieldPlot *plot);
void FieldPlot_DayUpdate(FieldPlot *plot, int weather, const GameDate *date);
void FieldPlot_SeasonChangeClear(FieldPlot *plot, Season season);
const void *FieldPlot_GetTileGraphic(const FieldPlot *plot);
const void *FieldPlot_ResolveBorderTile(const FieldPlot *plot, const FieldPlot *north, const FieldPlot *west);

// =============================================================================
// Farm Management Prototypes
// =============================================================================
void Farm_Init(Farm *farm, const char *name);
Vec2 Farm_GetSpawnCoordinates(void);
Vec2 Farm_GetHouseCoordinates(void);
u32  Farm_GetFieldState(const Farm *farm);
bool Farm_HasPlantedCrop(const Farm *farm);
u32  Farm_GetLumber(const Farm *farm);
void Farm_AddLumber(Farm *farm, u32 amount);
void Farm_TakeLumber(Farm *farm, u32 amount);
void Farm_SetHorse(Farm *farm, const void *horse);
void *Farm_GetHorse(Farm *farm);
void Farm_RemoveHorse(Farm *farm);
void Farm_ClearDailyFlag(Farm *farm);
void Farm_DayUpdate(Farm *farm, Weather weather, const GameDate *date);
void Farm_SetSeasonTransitionFlag(Farm *farm);

#endif // FARM_H
