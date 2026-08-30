#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/client/gui/oreui/resources/ResourceRequest.h"
#include "mc/client/gui/oreui/resources/ResourceResponse.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace OreUI { class ResourceAllowList; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class ProfileImageResourceHandler : public ::OreUI::IResourceHandler {
public:
    // ProfileImageResourceHandler inner types declare
    // clang-format off
    struct FinishedRequest;
    // clang-format on

    // ProfileImageResourceHandler inner types define
    struct FinishedRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Gameface::ResourceResponse>   response;
        ::ll::TypedStorage<8, 24, std::string>                   requestUrl;
        ::ll::TypedStorage<8, 56, ::Social::ProfileImageOptions> imageOptions;
        ::ll::TypedStorage<1, 1, bool>                           succeeded;
        // NOLINTEND

    public:
        // prevent constructor by default
        FinishedRequest& operator=(FinishedRequest const&);
        FinishedRequest(FinishedRequest const&);
        FinishedRequest();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI FinishedRequest(
            ::Gameface::ResourceResponse,
            std::string const&,
            ::Social::ProfileImageOptions const&,
            bool const
        );

        MCNAPI ~FinishedRequest();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::Gameface::ResourceResponse, std::string const&, ::Social::ProfileImageOptions const&, bool const);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 616>                                  mRequestQueue;
    ::ll::UntypedStorage<8, 616>                                  mFinishedRequests;
    ::ll::UntypedStorage<8, 24>                                   mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&> mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                       mTaskGroup;
    ::ll::UntypedStorage<8, 24>                                   mUserManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileImageResourceHandler& operator=(ProfileImageResourceHandler const&);
    ProfileImageResourceHandler(ProfileImageResourceHandler const&);
    ProfileImageResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ProfileImageResourceHandler();

    virtual ::Gameface::ResourceHandlerStatus onResourceRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceResponse&);

    virtual ::Gameface::ResourceHandlerStatus onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&);

    virtual void update();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProfileImageResourceHandler(
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::ResourceAllowList>> const&,
        ::Gameface::TemporaryTextureHolder&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::ResourceAllowList>> const&,
        ::Gameface::TemporaryTextureHolder&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>
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
    MCNAPI ::Gameface::ResourceHandlerStatus
    $onResourceRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceResponse&);

    MCNAPI ::Gameface::ResourceHandlerStatus
    $onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&);

    MCNAPI void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
