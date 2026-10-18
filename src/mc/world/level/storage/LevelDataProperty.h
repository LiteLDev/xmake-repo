#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LevelDataProperty : ushort {
#if defined(LL_PLAT_A) // @header-generator platform
    LEVEL_NAME                   = 0,
    GAME_TYPE                    = 1,
    PLAYER_GAME_TYPE             = 2,
    DIFFICULTY                   = 3,
    IS_HARDCORE                  = 4,
    START_WITH_MAP               = 5,
    BONUS_CHEST                  = 6,
    DEFAULT_PLAYER_PERMISSIONS   = 7,
    FLAT_WORLD                   = 8,
    SEED                         = 9,
    SIMULATION_DISTANCE          = 10,
    ALLOW_CHEATS                 = 11,
    EDUCATION_EDITION            = 12,
    TIME                         = 13,
    ACHIEVEMENTS_DISABLED        = 14,
    WORLD_TEMPLATE_OPTION_LOCKED = 15,
    COUNT                        = 16,
#else // @header-generator platform
    LevelName                 = 0,
    GameType                  = 1,
    PlayerGameType            = 2,
    Difficulty                = 3,
    IsHardcore                = 4,
    StartWithMap              = 5,
    BonusChest                = 6,
    DefaultPlayerPermissions  = 7,
    FlatWorld                 = 8,
    Seed                      = 9,
    SimulationDistance        = 10,
    AllowCheats               = 11,
    EducationEdition          = 12,
    Time                      = 13,
    AchievementsDisabled      = 14,
    WorldTemplateOptionLocked = 15,
    Count                     = 16,
#endif // @header-generator platform
};
