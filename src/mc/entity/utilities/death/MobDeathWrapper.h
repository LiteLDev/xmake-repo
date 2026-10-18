#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ExperienceRewardComponent;
class Mob;
struct AABBShapeComponent;
struct OffsetsComponent;
struct SpawnOnDeathComponent;
struct StateVectorComponent;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class MobDeathWrapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk672fa7;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MobDeathWrapper& operator=(MobDeathWrapper const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MobDeathWrapper(::Mob&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND
#else // @header-generator platform
    MobDeathWrapper(MobDeathWrapper const&);
    MobDeathWrapper();
#endif // @header-generator platform
};
