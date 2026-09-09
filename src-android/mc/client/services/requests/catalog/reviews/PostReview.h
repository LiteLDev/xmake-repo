#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/client/services/requests/catalog/reviews/CreateReviewParams.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
class ContentCatalogService;
namespace Bedrock::Http { class Response; }
// clang-format on

class PostReview : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<CatalogBackend>> mBackend;
    ::ll::TypedStorage<8, 24, std::string const>               mAcceptLanguage;
    ::ll::UntypedStorage<8, 112>                               mParams;
    ::ll::UntypedStorage<8, 48>                                mCallback;
    ::ll::TypedStorage<1, 1, bool>                             mSuccess;
    ::ll::UntypedStorage<8, 248>                               mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    PostReview();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PostReview();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void processResponse(::Bedrock::Http::Response);

    virtual void onComplete();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PostReview(::ContentCatalogService const&, ::CreateReviewParams const&, std::function<void(bool)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContentCatalogService const&, ::CreateReviewParams const&, std::function<void(bool)>);
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
