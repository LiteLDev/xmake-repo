#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class HowToPlayTopicIndex : int {
    MOVING_AROUND       = 0,
    GATHERING_RESOURCES = 1,
    SELECTING_ITEMS     = 2,
    PLACING_BLOCKS      = 3,
    INVENTORY_NEW       = 4,
    FIRST_CRAFT         = 5,
    RECIPE_BOOK         = 6,
    THE_CRAFTING_TABLE  = 7,
    CRAFTING_A_TOOL     = 8,
    MINING              = 9,
    NIGHTFALL_NEW       = 10,
    BUILDING_A_SHELTER  = 11,
    DEATH_AND_RESPAWN   = 12,
    FOOD                = 13,
    BEDS_NEW            = 14,
    IMPROVED_TOOLS      = 15,
    WORLD_BUILDER       = 16,
    PERMISSION_BLOCKS   = 17,
    CHALKBOARD          = 18,
    CHEMISTRY           = 19,
    NPC                 = 20,
    CAMERA              = 21,
    PORTFOLIO           = 22,
    CLASSROOM_MODE      = 23,
    CODE_BUILDER        = 24,
    PLAYING_TOGETHER    = 25,
    ENCYCLOPEDIA        = 26,
    TOPIC_COUNT         = 27,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class HowToPlayTopicIndex : int {
    MovingAround       = 0,
    GatheringResources = 1,
    SelectingItems     = 2,
    PlacingBlocks      = 3,
    InventoryNew       = 4,
    FirstCraft         = 5,
    RecipeBook         = 6,
    TheCraftingTable   = 7,
    CraftingATool      = 8,
    Mining             = 9,
    NightfallNew       = 10,
    BuildingAShelter   = 11,
    DeathAndRespawn    = 12,
    Food               = 13,
    BedsNew            = 14,
    ImprovedTools      = 15,
    WorldBuilder       = 16,
    PermissionBlocks   = 17,
    Chalkboard         = 18,
    Chemistry          = 19,
    Npc                = 20,
    Camera             = 21,
    Portfolio          = 22,
    ClassroomMode      = 23,
    CodeBuilder        = 24,
    PlayingTogether    = 25,
    Encyclopedia       = 26,
    TopicCount         = 27,
};
#else // @header-generator platform
enum class HowToPlayTopicIndex : int {};
#endif // @header-generator platform
#endif // @header-generator platform
