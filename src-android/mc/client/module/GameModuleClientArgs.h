#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LocalProfilerControlBroker;
// clang-format on

struct GameModuleClientArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mIsConnectedToRemoteServer;
    ::ll::TypedStorage<1, 1, ::SubClientId> mSubClientId;
    ::ll::UntypedStorage<8, 24>             mLocalProfilerControlBroker;
    // NOLINTEND

public:
    // prevent constructor by default
    GameModuleClientArgs& operator=(GameModuleClientArgs const&);
    GameModuleClientArgs(GameModuleClientArgs const&);
    GameModuleClientArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GameModuleClientArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
