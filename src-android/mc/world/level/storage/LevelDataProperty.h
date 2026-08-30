#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LevelDataProperty : ushort {
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
};
