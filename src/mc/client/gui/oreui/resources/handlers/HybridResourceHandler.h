#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class HybridResourceHandler : public ::Gameface::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>                    mPackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>      mFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Core::FileSystem>> mFileSystem;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mDataPath;
    ::ll::TypedStorage<8, 64, ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)>>
                                                                  mSyncStreamReaderFactory;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&> mTemporaryTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    HybridResourceHandler& operator=(HybridResourceHandler const&);
    HybridResourceHandler(HybridResourceHandler const&);
    HybridResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HybridResourceHandler() /*override*/ = default;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus onResourceStreamRequest(
        ::Gameface::ResourceRequest const&  request,
        ::Gameface::ResourceStreamResponse& response
    ) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HybridResourceHandler(
        ::ResourcePackManager const&                                                         packManager,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const&                             fileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&                                  fileAccess,
        ::Core::Path const&                                                                  dataPath,
        ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)> const& syncStreamReaderFactory,
        ::Gameface::TemporaryTextureHolder&                                                  temporaryTextureHolder
    );

    MCAPI ::std::optional<::OreUI::HybridResourceLocation>
    _getAssetResourceLocationFromResourcePackManager(::Gameface::ResourceRequest const& request) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ResourcePackManager const&                                                         packManager,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const&                             fileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&                                  fileAccess,
        ::Core::Path const&                                                                  dataPath,
        ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)> const& syncStreamReaderFactory,
        ::Gameface::TemporaryTextureHolder&                                                  temporaryTextureHolder
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response);

    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceStreamRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceStreamResponse& response);

    MCFOLD void $update();
    // NOLINTEND
};
#else // @header-generator platform
class HybridResourceHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
