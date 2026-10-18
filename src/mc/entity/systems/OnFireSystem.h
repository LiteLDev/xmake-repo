#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class OnFireSystem {
#else // @header-generator platform
class OnFireSystem : public ::ITickingSystem {
public:
    LLAPI static void setOnFireNoEffects(Actor& actor, int seconds);

#endif // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _setOnFireImpl(::Actor&, int, bool, int);
#else // @header-generator platform
    MCAPI static void _setOnFireImpl(::Actor& actor, int seconds, bool isInWaterOrRain, int fireProtectionLevels);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void extinguishFire(::Actor&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void onFireChanged(::Actor& actor);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void onFireChanged(::Actor&);
#else // @header-generator platform
    MCAPI static void setOnFire(::Actor& actor, int seconds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setOnFire(::Actor&, int);

    MCNAPI static void setOnFireNoEffects(::Actor&, int);

    MCNAPI static void stopFire(::Actor&);
#else // @header-generator platform
    MCAPI static void stopFire(::Actor& actor);
#endif // @header-generator platform
    // NOLINTEND
};
