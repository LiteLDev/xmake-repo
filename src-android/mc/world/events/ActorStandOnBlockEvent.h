#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class EntityContext;
// clang-format on

struct ActorStandOnBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                 mActor;
    ::ll::UntypedStorage<8, 8>                  mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mPos;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorStandOnBlockEvent& operator=(ActorStandOnBlockEvent const&);
    ActorStandOnBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorStandOnBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
