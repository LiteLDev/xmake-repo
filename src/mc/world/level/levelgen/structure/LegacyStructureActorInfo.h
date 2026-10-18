#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/level/BlockPos.h"

class LegacyStructureActorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>        mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mBlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CompoundTag> mTag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CompoundTag> mTag;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LegacyStructureActorInfo& operator=(LegacyStructureActorInfo const&);
    LegacyStructureActorInfo(LegacyStructureActorInfo const&);
    LegacyStructureActorInfo();
#else // @header-generator platform
#endif // @header-generator platform
};
