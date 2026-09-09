#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class ResourcePackManager;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace Gameface { class ISyncStreamReader; }
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
namespace OreUI { struct HybridResourceLocation; }
// clang-format on

namespace OreUI {

class HybridResourceHandler : public ::Gameface::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&> mPackManager;
    ::ll::UntypedStorage<8, 24>                            mFileAccess;
    ::ll::UntypedStorage<8, 24>                            mFileSystem;
    ::ll::UntypedStorage<8, 32>                            mDataPath;
    ::ll::UntypedStorage<8, 48>                            mSyncStreamReaderFactory;
    ::ll::UntypedStorage<8, 16>                            mTemporaryTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    HybridResourceHandler& operator=(HybridResourceHandler const&);
    HybridResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HybridResourceHandler();

    virtual ::Gameface::ResourceHandlerStatus onResourceRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceResponse&);

    virtual ::Gameface::ResourceHandlerStatus onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&);

    virtual void update();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HybridResourceHandler(
        ::ResourcePackManager const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FileSystem>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        ::Core::Path const&,
        std::function<Gameface::ISyncStreamReader*(IFileAccess&, Core::Path)> const&,
        ::Gameface::TemporaryTextureHolder&
    );

    MCNAPI std::optional<OreUI::HybridResourceLocation>
           _getAssetResourceLocationFromResourcePackManager(::Gameface::ResourceRequest const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourcePackManager const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FileSystem>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        ::Core::Path const&,
        std::function<Gameface::ISyncStreamReader*(IFileAccess&, Core::Path)> const&,
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
