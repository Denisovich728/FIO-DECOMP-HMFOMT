#ifndef NPC_H
#define NPC_H

#include "../global.h"

// =============================================================================
// Mineral Town Villagers & Bachelorettes
// =============================================================================

typedef enum VillagerId {
    NPC_KAREN       = 0,
    NPC_POPURI      = 1,
    NPC_ELLI        = 2,
    NPC_ANN         = 3,
    NPC_MARY        = 4,
    NPC_RICK        = 5,
    NPC_CLIFF       = 6,
    NPC_DOCTOR      = 7,
    NPC_GRAY        = 8,
    NPC_KAI         = 9,
    NPC_GODDESS     = 10,
    NPC_KAPPA       = 11,
    NPC_GOURMET     = 12,
    NPC_WON         = 13,
    NPC_THOMAS      = 14,
    NPC_HARRIS      = 15,
    NPC_ELLEN       = 16,
    NPC_JEFF        = 17,
    NPC_SASHA       = 18,
    NPC_LILLIA      = 19,
    NPC_CARTER      = 20,
    NPC_DUKE        = 21,
    NPC_MANNA       = 22,
    NPC_DOUG        = 23,
    NPC_BASIL       = 24,
    NPC_ANNA        = 25,
    NPC_SAIBARA     = 26,
    NPC_GOTZ        = 27,
    NPC_BARLEY      = 28,
    NPC_MAY         = 29,
    NPC_STU         = 30,
    NPC_VAN         = 31,
    NPC_LOU         = 32,
    // Harvest Sprites (Nature Sprites)
    NPC_CHEF        = 33,
    NPC_NAUGHTY     = 34,
    NPC_BOLD        = 35,
    NPC_STODGY      = 36,
    NPC_TIMID       = 37,
    NPC_AQUA        = 38,
    NPC_HOGGY       = 39,
    NPC_COUNT       = 40
} VillagerId;

typedef struct NPCData {
    u16 friendship;     // Friendship points (0 - 255)
    u16 affection;      // Affection points for bachelorettes (0 - 65535)
    u8  locationId;     // Current map internal ID
    Vec2 position;      // Grid / Pixel coordinate
    u8  facing;         // 0: Down, 1: Up, 2: Left, 3: Right
    u8  heartLevel;     // 0: Black, 1: Purple, 2: Blue, 3: Green, 4: Yellow, 5: Orange, 6: Red
    bool giftGivenToday;
    bool talkedToday;
} NPCData;

// Direct field access macros for NPC / Bachelorette runtime
#define NPC_MOOD_BYTE(npc)          (*(u8 *)((u8 *)(npc) + 8))
#define NPC_TALKED_FLAG(npc)        (*(u8 *)((u8 *)(npc) + 9))
#define NPC_SCHEDULE_TIMER(npc)     (*(u32 *)((u8 *)(npc) + 0x0C))
#define NPC_AFFECTION_RAW(npc)      (*(u16 *)((u8 *)(npc) + 0x14))
#define NPC_HEART_LEVEL(npc)        ((*(u8 *)((u8 *)(npc) + 0x17) >> 4) & 0x07)

// =============================================================================
// Function Prototypes
// =============================================================================
void NPC_InitAll(void);
u32  NPC_UpdateSchedule(int npc);
void NPC_ReduceMood(int npc, int amount);
void NPC_ResetScheduleWaypoint(int npc);
void NPC_ClearWaypoints(undefined1 *npc);
u32  NPC_EvaluateGiftReaction(undefined4 npc, undefined4 amount, undefined4 *extra_arg);

// NPC Social & Friendship
void NPC_AddFriendship(int npc, int amount);
void NPC_ReduceFriendship(undefined4 npc, int amount);
void NPC_SetTalkedToday(int npc);
void NPC_ProcessGiftGiven(int npc, uint amount);

// Bachelorette Affection & Romance
void Bachelorette_ResetAffection(int npc);
void Bachelorette_AddAffection(int npc, int amount);
void Bachelorette_ReduceAffection(undefined4 npc, int amount);
void Bachelorette_IncrementTalkCount(int npc);
void Bachelorette_IncrementGiftCount(int npc);
void Bachelorette_IncrementHeartLevel(int npc);
void Bachelorette_ProcessDailyAffection(int npc, char amount, uint extra_arg);
u32  Bachelorette_ResetAffectionData(int npc);
u32  Bachelorette_GetStatsByte(int npc, uint amount);
u32  Bachelorette_GetHeartStatsByte(int npc, uint amount);

// Harvest Sprites & Minigames
void HarvestSprite_Minigame_UpdateCountdownTimer(int npc, int amount);
void HarvestSprite_Minigame_HideUI(int npc);
void HarvestSprite_Minigame_ShowUI(int npc);
void HarvestSprite_Minigame_SetupDifficultyAndTargets(int npc);
void HarvestSprite_Minigame_InitState(int npc);
void HarvestSprite_Minigame_UpdateFrame(int npc);

u32  Bachelorette_GetHeartColor(u32 npc_id);
bool Bachelorette_CheckHeartEvent(VillagerId id, u8 eventLevel);
void HarvestSprite_PerformChores(VillagerId id, u8 choreType);
const void *Map_GetMapData(u32 map_id);

#endif // NPC_H
