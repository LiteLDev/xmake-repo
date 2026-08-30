#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/services/requests/clubs/ClubsRequestHandler.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
namespace Bedrock::Http { class Response; }
// clang-format on

class ClubsGetUnreadCountRequest : public ::ClubsRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mClubId;
    ::ll::UntypedStorage<8, 48> mCallback;
    ::ll::UntypedStorage<4, 16> mResponse;
    // NOLINTEND

public:
    // prevent constructor by default
    ClubsGetUnreadCountRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClubsGetUnreadCountRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void onComplete();

    virtual std::string getURL() const;

    virtual bool isLowPriority() const;

    virtual void completeFromCache(std::string const&, bool);

    virtual void _processResponse(::Bedrock::Http::Response);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClubsGetUnreadCountRequest(
        ::ServiceClient const&,
        std::string const&,
        std::function<void(int, Clubs::GenericStatus)>,
        std::function<void(const std::string&, const Bedrock::Http::Response&)>
    );

    MCNAPI void _parseResponse(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServiceClient const&,
        std::string const&,
        std::function<void(int, Clubs::GenericStatus)>,
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

    MCNAPI bool $isLowPriority() const;

    MCNAPI void $completeFromCache(std::string const&, bool);

    MCNAPI void $_processResponse(::Bedrock::Http::Response);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
