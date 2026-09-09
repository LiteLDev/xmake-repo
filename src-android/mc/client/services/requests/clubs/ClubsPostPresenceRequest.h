#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/services/clubs/ClubsPresenceType.h"
#include "mc/client/services/requests/clubs/ClubsRequestHandler.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
// clang-format on

class ClubsPostPresenceRequest : public ::ClubsRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Clubs::ClubsPresenceType const> mPresenceType;
    ::ll::TypedStorage<8, 24, std::string const>               mXuid;
    ::ll::UntypedStorage<8, 32>                                mClubId;
    ::ll::UntypedStorage<8, 48>                                mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ClubsPostPresenceRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClubsPostPresenceRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void onComplete();

    virtual std::string getURL() const;

    virtual void _processResponse(::Bedrock::Http::Response);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClubsPostPresenceRequest(
        ::ServiceClient const&,
        ::Clubs::ClubsPresenceType const,
        std::string const&,
        std::string const&,
        std::function<void(Clubs::GenericStatus)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServiceClient const&,
        ::Clubs::ClubsPresenceType const,
        std::string const&,
        std::string const&,
        std::function<void(Clubs::GenericStatus)>
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
