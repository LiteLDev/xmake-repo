#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/services/clubs/ClubModel.h"
#include "mc/client/services/requests/clubs/ClubsRequestHandler.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
// clang-format on

class ClubsReportGamertagRequestXbox : public ::ClubsRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::Clubs::ClubModel> mModel;
    ::ll::TypedStorage<8, 24, std::string const>  mXuid;
    ::ll::TypedStorage<8, 24, std::string>        mReportedGamertag;
    ::ll::TypedStorage<8, 24, std::string>        mReason;
    ::ll::UntypedStorage<8, 32>                   mComment;
    ::ll::UntypedStorage<8, 48>                   mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ClubsReportGamertagRequestXbox();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClubsReportGamertagRequestXbox();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void onComplete();

    virtual std::string getURL() const;

    virtual void _processResponse(::Bedrock::Http::Response);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClubsReportGamertagRequestXbox(
        ::ServiceClient const&,
        std::string const&,
        std::string const&,
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
        std::string const&,
        std::string const&,
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
#else // @header-generator platform
class ClubsReportGamertagRequestXbox {};
#endif // @header-generator platform
