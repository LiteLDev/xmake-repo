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
    ::ll::UntypedStorage<1, 24>               mPlayer;
    ::ll::TypedStorage<4, 4, ::DimensionType> mFromDimension;
    ::ll::TypedStorage<4, 12, ::Vec3>         mFromLocation;
    ::ll::TypedStorage<4, 4, ::DimensionType> mToDimension;
    ::ll::TypedStorage<4, 12, ::Vec3>         mToLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionChangeBeforeEvent& operator=(PlayerDimensionChangeBeforeEvent const&);
    PlayerDimensionChangeBeforeEvent();
};
