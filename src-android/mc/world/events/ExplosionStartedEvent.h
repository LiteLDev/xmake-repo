#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class EntityContext;
// clang-format on

struct ExplosionStartedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<BlockPos>> mBlocks;
    ::ll::TypedStorage<8, 8, ::Dimension&>                  mDimension;
    ::ll::UntypedStorage<1, 24>                             mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ExplosionStartedEvent& operator=(ExplosionStartedEvent const&);
    ExplosionStartedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ExplosionStartedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
