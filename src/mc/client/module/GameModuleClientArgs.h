#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<1, 1, bool>                                                      mIsConnectedToRemoteServer;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                             mSubClientId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker>> mLocalProfilerControlBroker;
    // NOLINTEND
};
#else // @header-generator platform
struct GameModuleClientArgs {};
#endif // @header-generator platform
#endif // @header-generator platform
