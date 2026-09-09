#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
// clang-format on

struct LeverActionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockSourceHandle>> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                   mLeverBlockPos;
    ::ll::UntypedStorage<1, 4>                                    mIsPowered;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                    mPlayerRef;
    // NOLINTEND

public:
    // prevent constructor by default
    LeverActionEvent& operator=(LeverActionEvent const&);
    LeverActionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LeverActionEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
