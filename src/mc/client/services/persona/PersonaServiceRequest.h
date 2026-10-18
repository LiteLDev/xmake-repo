#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
class PersonaService;
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
namespace persona { struct RequestConstructionData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
class PersonaServiceRequest : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                         mResponse;
    ::ll::TypedStorage<4, 4, ::Bedrock::Http::StatusCode>               mStatusCode;
    ::ll::TypedStorage<8, 16, std::shared_ptr<CatalogBackend>>          mBackend;
    ::ll::TypedStorage<8, 24, std::string>                              mFailedReasonPhrase;
    ::ll::TypedStorage<8, 8, ::persona::RequestConstructionData const&> mConstructionData;
    ::ll::TypedStorage<4, 4, uint>                                      mLoggingIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaServiceRequest& operator=(PersonaServiceRequest const&);
    PersonaServiceRequest(PersonaServiceRequest const&);
    PersonaServiceRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaServiceRequest();

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
class PersonaServiceRequest {};
#endif // @header-generator platform

} // namespace persona
