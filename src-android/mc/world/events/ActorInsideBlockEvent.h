#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
class BlockType;
class EntityContext;
// clang-format on

struct ActorInsideBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                                         mActor;
    ::ll::UntypedStorage<8, 8>                                          mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                         mPos;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockSourceHandle> const> mBlockSourceHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInsideBlockEvent& operator=(ActorInsideBlockEvent const&);
    ActorInsideBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorInsideBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
