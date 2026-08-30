#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/item/ExperienceOrb.h"

struct SpawnExperienceOrbRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<4, 4, int>     mXPValue;
    ::ll::UntypedStorage<1, 1>        mDropType;
    // NOLINTEND
};
