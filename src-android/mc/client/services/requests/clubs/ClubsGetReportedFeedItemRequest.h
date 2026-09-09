#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/services/clubs/FeedItem.h"
#include "mc/client/services/clubs/ReportedItem.h"
#include "mc/client/services/requests/clubs/ClubsRequestHandler.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
// clang-format on

class ClubsGetReportedFeedItemRequest : public ::ClubsRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 456, ::Clubs::ReportedItem const> mReportedItem;
    ::ll::UntypedStorage<8, 352>                            mFeedItemResult;
    ::ll::UntypedStorage<8, 48>                             mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ClubsGetReportedFeedItemRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClubsGetReportedFeedItemRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void onComplete();

    virtual std::string getURL() const;

    virtual void _processResponse(::Bedrock::Http::Response);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClubsGetReportedFeedItemRequest(
        ::ServiceClient const&,
        ::Clubs::ReportedItem const&,
        std::function<void(const Clubs::ReportedItem&, Clubs::FeedItem, Clubs::GenericStatus)>,
        std::function<void(const std::string&, const Bedrock::Http::Response&)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServiceClient const&,
        ::Clubs::ReportedItem const&,
        std::function<void(const Clubs::ReportedItem&, Clubs::FeedItem, Clubs::GenericStatus)>,
        std::function<void(const std::string&, const Bedrock::Http::Response&)>
    );
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

    MCNAPI void $onComplete();

    MCNAPI std::string $getURL() const;

    MCNAPI void $_processResponse(::Bedrock::Http::Response);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
