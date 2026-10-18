#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerDimensionChangeBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>               mPlayer;
    ::ll::TypedStorage<4, 4, ::DimensionType> mFromDimension;
    ::ll::TypedStorage<4, 12, ::Vec3>         mFromLocation;
    ::ll::TypedStorage<4, 4, ::DimensionType> mToDimension;
    ::ll::TypedStorage<4, 12, ::Vec3>         mToLocation;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 4, ::DimensionType>             mFromDimension;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mFromLocation;
    ::ll::TypedStorage<4, 4, ::DimensionType>             mToDimension;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mToLocation;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerDimensionChangeBeforeEvent& operator=(PlayerDimensionChangeBeforeEvent const&);
    PlayerDimensionChangeBeforeEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
