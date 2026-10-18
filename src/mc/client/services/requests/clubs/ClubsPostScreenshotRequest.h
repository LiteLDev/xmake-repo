#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/services/requests/clubs/ClubsRequestHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
namespace Bedrock::Http { class Response; }
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ClubsPostScreenshotRequest : public ::ClubsRequestHandler {
#else // @header-generator platform
class ClubsPostScreenshotRequest {
#endif // @header-generator platform
public:
    // ClubsPostScreenshotRequest inner types declare
    // clang-format off
    struct MediaHubResponse;
    // clang-format on

    // ClubsPostScreenshotRequest inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct MediaHubResponse {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> contentId;
        ::ll::TypedStorage<8, 24, std::string> contentUploadParty;
        ::ll::TypedStorage<8, 24, std::string> contentUploadUri;
        ::ll::TypedStorage<8, 24, std::string> publishUri;
        ::ll::TypedStorage<8, 24, std::string> thumbnailUploadUri;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         mTitleId;
    ::ll::UntypedStorage<8, 24>            mFilepath;
    ::ll::TypedStorage<8, 24, std::string> mUserXuid;
    ::ll::TypedStorage<8, 24, std::string> mResponseString;
    ::ll::UntypedStorage<8, 48>            mCallback;
    ::ll::UntypedStorage<8, 128>           mMediaHubResponse;
    // NOLINTEND

public:
    // prevent constructor by default
    ClubsPostScreenshotRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClubsPostScreenshotRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void onComplete();

    virtual std::string getURL() const;

    virtual void _processResponse(::Bedrock::Http::Response);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClubsPostScreenshotRequest(
        ::ServiceClient const&,
        ::Core::Path const&,
        std::string const&,
        uint,
        std::function<void(Core::Path, Clubs::GenericStatus)>
    );

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> _uploadImageToAzure();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServiceClient const&,
        ::Core::Path const&,
        std::string const&,
        uint,
        std::function<void(Core::Path, Clubs::GenericStatus)>
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
#else // @header-generator platform
    struct MediaHubResponse {};
#endif // @header-generator platform
};
