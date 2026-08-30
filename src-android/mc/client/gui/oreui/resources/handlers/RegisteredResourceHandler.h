#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
namespace OreUI { class ResourceAllowList; }
// clang-format on

namespace OreUI {

class RegisteredResourceHandler : public ::OreUI::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                   mRawFileAccess;
    ::ll::UntypedStorage<8, 24>                                   mAppPackageFileAccess;
    ::ll::UntypedStorage<8, 24>                                   mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&> mTemporaryTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredResourceHandler& operator=(RegisteredResourceHandler const&);
    RegisteredResourceHandler(RegisteredResourceHandler const&);
    RegisteredResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RegisteredResourceHandler();

    virtual ::Gameface::ResourceHandlerStatus onResourceRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceResponse&);

    virtual ::Gameface::ResourceHandlerStatus onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&);

    virtual void update();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RegisteredResourceHandler(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::ResourceAllowList>> const&,
        ::Gameface::TemporaryTextureHolder&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::ResourceAllowList>> const&,
        ::Gameface::TemporaryTextureHolder&
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
