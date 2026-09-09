#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
// clang-format on

struct ButtonPushEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockSourceHandle>> mBlockSourceHandle;
    ::ll::UntypedStorage<4, 16>                                   mButtonBlockPos;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                    mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonPushEvent& operator=(ButtonPushEvent const&);
    ButtonPushEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ButtonPushEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
