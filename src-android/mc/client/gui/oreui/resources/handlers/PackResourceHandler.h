#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourcePackManager;
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
namespace mce { class UUID; }
// clang-format on

namespace OreUI {

class PackResourceHandler : public ::OreUI::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>        mPackManager;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&> mTemporaryTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    PackResourceHandler& operator=(PackResourceHandler const&);
    PackResourceHandler(PackResourceHandler const&);
    PackResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PackResourceHandler();

    virtual ::Gameface::ResourceHandlerStatus onResourceRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceResponse&);

    virtual ::Gameface::ResourceHandlerStatus onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&);

    virtual void update();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackResourceHandler(::ResourcePackManager const&, ::Gameface::TemporaryTextureHolder&);

    MCNAPI std::optional<ResourceLocation> _getAssetResourceLocationFromResourcePackManager(
        ::Gameface::ResourceRequest const&,
        std::optional<mce::UUID> const&
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackManager const&, ::Gameface::TemporaryTextureHolder&);
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
