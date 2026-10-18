#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class ServiceClient;
struct GenerateNonceResult;
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
namespace Social { class IUserManager; }
// clang-format on

class GenerateNonceRequest : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>              mUrl;
    ::ll::UntypedStorage<8, 48>                               mCallback;
    ::ll::UntypedStorage<8, 24>                               mUserManager;
    ::ll::TypedStorage<8, 24, std::vector<std::string> const> mTreatments;
    ::ll::TypedStorage<8, 24, std::string const>              mStoreId;
    ::ll::UntypedStorage<8, 24>                               mAdvancedGraphicsOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    GenerateNonceRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenerateNonceRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void processResponse(::Bedrock::Http::Response);

    virtual void onComplete();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<std::string> $getAuthToken();

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> $send(std::string);

    MCNAPI void $processResponse(::Bedrock::Http::Response);

    MCNAPI void $onComplete();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class GenerateNonceRequest {};
#endif // @header-generator platform
