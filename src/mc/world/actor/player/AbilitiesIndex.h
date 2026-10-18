#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class AbilitiesIndex : uchar {
    Invalid           = 255,
#else // @header-generator platform
enum class AbilitiesIndex : schar {
    Invalid           = -1,
#endif // @header-generator platform
    Build             = 0,
    Mine              = 1,
    DoorsAndSwitches  = 2,
    OpenContainers    = 3,
    AttackPlayers     = 4,
    AttackMobs        = 5,
    OperatorCommands  = 6,
    Teleport          = 7,
    Invulnerable      = 8,
    Flying            = 9,
    MayFly            = 10,
    Instabuild        = 11,
    Lightning         = 12,
    FlySpeed          = 13,
    WalkSpeed         = 14,
    Muted             = 15,
    WorldBuilder      = 16,
    NoClip            = 17,
    PrivilegedBuilder = 18,
    VerticalFlySpeed  = 19,
    AbilityCount      = 20,
};
