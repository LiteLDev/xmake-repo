#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/services/clubs/NewFeedItem.h"
#include "mc/client/services/requests/clubs/ClubsRequestHandler.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
namespace Bedrock::Http { class Response; }
namespace Clubs { struct FeedItem; }
namespace Json { class Value; }
// clang-format on

class ClubsPostToClubRequest : public ::ClubsRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mClubID;
    ::ll::UntypedStorage<8, 64> mNewPost;
    ::ll::UntypedStorage<8, 48> mCallback;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Clubs::FeedItem>> mResponse;
    ::ll::TypedStorage<1, 1, bool> mIsLowPriority;
    ::ll::UntypedStorage<8, 16> mMetadata;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStaleTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ClubsPostToClubRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClubsPostToClubRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void onComplete();

    virtual std::string getURL() const;

    virtual bool isLowPriority() const;

    virtual void _processResponse(::Bedrock::Http::Response);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClubsPostToClubRequest(
        ::ServiceClient const&,
        std::string const&,
        ::Clubs::NewFeedItem const&,
        ::Json::Value,
        bool,
        std::function<void(Clubs::FeedItem, Clubs::GenericStatus)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServiceClient const&,
        std::string const&,
        ::Clubs::NewFeedItem const&,
        ::Json::Value,
        bool,
        std::function<void(Clubs::FeedItem, Clubs::GenericStatus)>
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

    MCNAPI bool $isLowPriority() const;

    MCNAPI void $_processResponse(::Bedrock::Http::Response);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClubsPostToClubRequest {};
#endif // @header-generator platform
