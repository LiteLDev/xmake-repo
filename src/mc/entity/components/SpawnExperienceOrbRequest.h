#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/item/ExperienceOrb.h"
#else // @header-generator platform
#endif // @header-generator platform

struct SpawnExperienceOrbRequest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<4, 4, int>     mXPValue;
    ::ll::UntypedStorage<1, 1>        mDropType;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnk6758b8;
    ::ll::UntypedStorage<4, 4>  mUnke9499e;
    ::ll::UntypedStorage<1, 1>  mUnk6b24ba;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SpawnExperienceOrbRequest& operator=(SpawnExperienceOrbRequest const&);
    SpawnExperienceOrbRequest(SpawnExperienceOrbRequest const&);
    SpawnExperienceOrbRequest();
#endif // @header-generator platform
};
