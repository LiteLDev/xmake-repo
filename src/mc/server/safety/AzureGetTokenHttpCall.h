#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/safety/ClientAssertion.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class TaskGroup;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Services { struct AzureGetTokenHttpResponse; }
namespace Bedrock::Services { struct AzureIdentityConfig; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Services { struct ClientAssertion; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Services {

class AzureGetTokenHttpCall {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                          mTenantId;
    ::ll::TypedStorage<8, 24, std::string>                          mClientId;
    ::ll::TypedStorage<8, 24, std::string>                          mScope;
    ::ll::TypedStorage<8, 24, ::Bedrock::Services::ClientAssertion> mClientAssertionAuth;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf4b0ce;
    ::ll::UntypedStorage<8, 32> mUnkaca72c;
    ::ll::UntypedStorage<8, 32> mUnk8b6eb9;
    ::ll::UntypedStorage<8, 32> mUnked5c9b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AzureGetTokenHttpCall& operator=(AzureGetTokenHttpCall const&);
    AzureGetTokenHttpCall(AzureGetTokenHttpCall const&);
#endif // @header-generator platform
    AzureGetTokenHttpCall();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AzureGetTokenHttpCall() = default;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~AzureGetTokenHttpCall();
#else // LL_PLAT_C
    virtual ~AzureGetTokenHttpCall() = default;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI AzureGetTokenHttpCall(
        ::Bedrock::Services::AzureIdentityConfig const& config,
        ::Bedrock::Services::ClientAssertion            clientAssertionAuth
    );

    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Services::AzureGetTokenHttpResponse> send(::TaskGroup& taskGroup);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(
        ::Bedrock::Services::AzureIdentityConfig const& config,
        ::Bedrock::Services::ClientAssertion            clientAssertionAuth
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Services
