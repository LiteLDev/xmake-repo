#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSourceHandle;
class EntityContext;
// clang-format on

struct ActorGriefingBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                                   mActorContext;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>>       mBlock;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mPos;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockSourceHandle>> mBlockSourceHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorGriefingBlockEvent& operator=(ActorGriefingBlockEvent const&);
    ActorGriefingBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorGriefingBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
