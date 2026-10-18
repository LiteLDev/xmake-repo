#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

struct ServerScriptManagerEvents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mOnModuleStartupComplete;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mOnWorldInitializeComplete;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mOnPreReload;
#endif // @header-generator platform
    // NOLINTEND
};
