#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/ServerConnectivityTestResult.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ServicesManager;
class TaskGroup;
class TaskResult;
namespace Bedrock::Http { class Method; }
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
namespace Social { class GameConnectionInfo; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class SafetyServiceHelper {
public:
    // SafetyServiceHelper inner types declare
    // clang-format off
    struct APIContext;
    // clang-format on

    // SafetyServiceHelper inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct APIContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> serviceUrl;
        ::ll::TypedStorage<8, 24, std::string> authHeader;
        ::ll::TypedStorage<8, 24, std::string> sessionId;
        // NOLINTEND

    public:
        // prevent constructor by default
        APIContext& operator=(APIContext const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI APIContext(::SafetyServiceHelper::APIContext const&);

        MCNAPI ~APIContext();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::SafetyServiceHelper::APIContext const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::Async<SafetyServiceHelper::APIContext>
    _buildAPIContext(::Bedrock::NonOwnerPointer<ServicesManager> const&, ::TaskGroup&);

    MCNAPI static ::Bedrock::Threading::Async<Bedrock::Http::Response> _sendRequest(
        ::TaskGroup&,
        ::Bedrock::NonOwnerPointer<IMinecraftEventing> const&,
        ::Bedrock::Http::Method const&,
        std::string const&,
        ::SafetyServiceHelper::APIContext const&,
        ::Json::Value const&
    );

    MCNAPI static ::TaskResult _waitForServiceDiscovery(::Bedrock::NonOwnerPointer<ServicesManager> const&);

    MCNAPI static ::Bedrock::Threading::Async<bool> isSkinApprovedAsync(::TaskGroup&, uint const&, std::string const&);

    MCNAPI static ::Bedrock::Threading::Async<bool>
    shouldBlockServerJoinAsync(::TaskGroup&, ::ServerConnectivityTestResult, ::Social::GameConnectionInfo);
    // NOLINTEND
#else // @header-generator platform
    struct APIContext {};
#endif // @header-generator platform
};
