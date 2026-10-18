#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/services/clubs/ReportedItem.h"
#include "mc/client/services/requests/clubs/ClubsRequestHandler.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
namespace Bedrock::Http { class Response; }
// clang-format on

class ClubsGetReportedItemPathsRequest : public ::ClubsRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mClubId;
    ::ll::UntypedStorage<8, 48> mCallback;
    ::ll::UntypedStorage<8, 32> mReportedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ClubsGetReportedItemPathsRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClubsGetReportedItemPathsRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void onComplete();

    virtual std::string getURL() const;

    virtual void _processResponse(::Bedrock::Http::Response);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClubsGetReportedItemPathsRequest(
        ::ServiceClient const&,
        std::string const&,
        std::function<void(std::vector<Clubs::ReportedItem>, Clubs::GenericStatus)>,
        std::function<void(const std::string&, const Bedrock::Http::Response&)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServiceClient const&,
        std::string const&,
        std::function<void(std::vector<Clubs::ReportedItem>, Clubs::GenericStatus)>,
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
#else // @header-generator platform
class ClubsGetReportedItemPathsRequest {};
#endif // @header-generator platform
