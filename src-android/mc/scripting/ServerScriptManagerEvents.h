#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

struct ServerScriptManagerEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mOnModuleStartupComplete;
    ::ll::UntypedStorage<8, 40> mOnWorldInitializeComplete;
    ::ll::UntypedStorage<8, 40> mOnPreReload;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerScriptManagerEvents();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
