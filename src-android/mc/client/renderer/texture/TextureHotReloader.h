#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/TextureAtlasStatus.h"
#include "mc/client/renderer/texture/TextureHotReloaderMode.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core_graphics/MipMapSupport.h"
#include "mc/deps/core_graphics/file_watcher/FileWatcherHandle.h"

// auto generated forward declare list
// clang-format off
class IResourceLocationExpander;
class TextureAtlas;
struct ImageResourceManager;
struct StbImageLoadPolicy;
struct StdIoStreamPolicy;
struct TextureAtlasResourceCallbacks;
namespace cg { class ImageBuffer; }
namespace cg { class TextureSetImageContainer; }
namespace cg { template<typename T0, typename T1, typename T2, typename T3, typename T4> class ResourceLoader; }
namespace mce { class TextureGroup; }
namespace mce { struct Image; }
namespace mce { template<typename T0, typename T1> class IResourceWatcher; }
// clang-format on

struct TextureHotReloader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::map<ResourceLocation, cg::ImageBuffer>>> mCachedTextures;
    ::ll::UntypedStorage<8, 8>                                                              mImageWatcher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ImageResourceManager>>                         mImageResourceManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<ResourceLocation, mce::FileWatcherHandle>> mFileWatcherHandles;
    ::ll::TypedStorage<4, 4, ::TextureHotReloaderMode const>                                mMode;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureHotReloader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureHotReloader();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureHotReloader(
        std::unique_ptr<mce::IResourceWatcher<
            cg::ResourceLoader<
                std::shared_ptr<mce::Image>,
                ResourceLocation,
                StdIoStreamPolicy,
                StbImageLoadPolicy,
                std::vector<uchar>>,
            ImageResourceManager>>,
        ::TextureHotReloaderMode
    );

    MCNAPI void cacheTextures(std::shared_ptr<mce::TextureGroup>);

    MCNAPI bool isFileWatched(::ResourceLocation const&, ::IResourceLocationExpander const&);

    MCNAPI void loadCachedTextureData(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void registerAtlas(
        ::TextureAtlas&,
        std::shared_ptr<mce::TextureGroup>,
        ::IResourceLocationExpander const&,
        ::cg::MipMapSupport const&,
        std::function<void(TextureAtlasResourceCallbacks)>,
        std::function<void(const TextureAtlasStatus&)>,
        std::function<void(
            const ResourceLocation&,
            std::shared_ptr<cg::ImageBuffer>,
            std::shared_ptr<std::unordered_map<ResourceLocation, cg::TextureSetImageContainer>>
        )>
    );

    MCNAPI void registerTexture(
        ::ResourceLocation const&,
        std::shared_ptr<mce::TextureGroup>,
        ::IResourceLocationExpander const&,
        std::function<void(const ResourceLocation&)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<mce::IResourceWatcher<
            cg::ResourceLoader<
                std::shared_ptr<mce::Image>,
                ResourceLocation,
                StdIoStreamPolicy,
                StbImageLoadPolicy,
                std::vector<uchar>>,
            ImageResourceManager>>,
        ::TextureHotReloaderMode
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
