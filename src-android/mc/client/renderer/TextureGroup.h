#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/AsyncCachedTextureLoader.h"
#include "mc/client/renderer/ImageBufferResourceManager.h"
#include "mc/client/renderer/ImageCacheMode.h"
#include "mc/client/renderer/TextureLoadMode.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/CountTracker.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/minecraft_renderer/renderer/BedrockTexture.h"
#include "mc/deps/minecraft_renderer/renderer/IsMissingTexture.h"
#include "mc/deps/minecraft_renderer/renderer/TextureGroupBase.h"
#include "mc/resources/ResourceLoadType.h"
#include "mc/util/texture_set_helpers/TextureSetDefinitionLoader.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class ResourceLoadManager;
class ResourceLocationPair;
struct BedrockTextureData;
namespace cg { class TextureSetDefinition; }
namespace cg { class TextureSetImageDescription; }
namespace mce { class ImageResourceLoader; }
namespace mce { class LRUCache; }
namespace mce { class TextureContainer; }
namespace mce { class TexturePtr; }
namespace mce { struct TextureDescription; }
namespace mce { struct TextureResourceService; }
// clang-format on

namespace mce {

class TextureGroup : public ::Bedrock::EnableNonOwnerReferences, public ::mce::TextureGroupBase {
public:
    // TextureGroup inner types define
    using TextureMap = std::map<ResourceLocation, BedrockTexture>;

    using LoadResult = ::Bedrock::Threading::Async<void>;

    using TextureLoadKey = std::pair<ResourceLocation, TextureLoadMode>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                mAdvancedGraphicsOptions;
    ::ll::TypedStorage<8, 264, ::AsyncCachedTextureLoader>                     mAsyncTextureLoader;
    ::ll::TypedStorage<8, 24, std::map<ResourceLocation, BedrockTexture>>      mLoadedTextures;
    ::ll::UntypedStorage<8, 24>                                                mResourceLoadManager;
    ::ll::TypedStorage<8, 8, ::mce::TextureResourceService&>                   mResourceService;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer const>                         mMissingTexture;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ImageResourceLoader>>       mImageResourceLoader;
    ::ll::UntypedStorage<8, 8>                                                 mTextureSetResourceHelper;
    ::ll::TypedStorage<8, 24, std::map<ResourceLocation, std::optional<uint>>> mTouchedTextures;
    ::ll::TypedStorage<8, 24, ::ImageBufferResourceManager>                    mImageBufferCache;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::LRUCache>>                   mLRUCache;
    ::ll::UntypedStorage<8, 24>                                                mLoadQueueResults;
    ::ll::UntypedStorage<8, 16>                                                mQueueLoadResultCoroutine;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::CountTracker>              mPendingLoadTaskCounter;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>                               mOutstandingTaskMemory;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>                               mOutstandingTaskCount;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroup& operator=(TextureGroup const&);
    TextureGroup(TextureGroup const&);
    TextureGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TextureGroup();

    virtual ::mce::TexturePtr getTexture(::ResourceLocation const&, bool const, std::optional<uint>, ::cg::TextureSetLayerType const);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureGroup(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::mce::TextureResourceService&
    );

    MCNAPI TextureGroup(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::mce::TextureResourceService&,
        std::shared_ptr<mce::ImageResourceLoader>
    );

    MCNAPI void _loadTextureAsyncUrgentlyIfTouched(
        std::pair<ResourceLocation, TextureLoadMode> const&,
        std::optional<ResourceLoadType> const
    );

    MCNAPI void _loadTexturesAsync(::gsl::span<ResourceLocationPair> const, std::optional<ResourceLoadType> const);

    MCNAPI void addEmptyTexture(::ResourceLocation const&, int const, int const);

    MCNAPI void clearCPUStorage();

    MCNAPI void enableLRUCache(ulong);

    MCNAPI ulong estimateMemoryUsage() const;

    MCNAPI ::BedrockTextureData const* getBedrockTextureData(::ResourceLocation const&) const;

    MCNAPI ::cg::ImageBuffer* getCachedImage(::ResourceLocation const&) const;

    MCNAPI ::cg::ImageBuffer* getCachedImageOrLoadAsync(::ResourceLocation const&);

    MCNAPI ::cg::ImageBuffer* getCachedImageOrLoadSync(::ResourceLocation const&, bool const);

    MCNAPI ::ImageBufferResourceManager getImageBufferResourceManagerCopy() const;

    MCNAPI ::cg::ImageBuffer const& getMissingImageBuffer() const;

    MCNAPI ::cg::ImageBuffer* insertImageIntoCache(::ResourceLocation const&, ::cg::ImageBuffer&&);

    MCNAPI bool isLoaded(::ResourceLocation const&, bool, ::cg::TextureSetLayerType const) const;

    MCNAPI ::IsMissingTexture isMissingTexture(::ResourceLocation const&) const;

    MCNAPI bool isReloading() const;

    MCNAPI ::nonstd::expected<void, std::error_condition>
    loadImageSyncAndInsertIntoCache(::ResourceLocation const&, bool);

    MCNAPI ::Bedrock::Threading::Async<void> loadTextureAsync(
        ::ResourceLocation const&,
        ::TextureLoadMode const,
        std::optional<ResourceLoadType> const,
        std::optional<uint> const
    );

    MCNAPI void loadTexturesAsync(::gsl::span<ResourceLocation> const, std::optional<ResourceLoadType> const);

    MCNAPI void reloadAllTextures();

    MCNAPI void reloadImages(
        ::gsl::span<ResourceLocationPair> const,
        ::gsl::span<ResourceLocation> const,
        std::vector<ResourceLocation>,
        ::ImageCacheMode const
    );

    MCNAPI void setTextureMetadata(::ResourceLocation const&, ::mce::TextureDescription const&);

    MCNAPI void
    setTextureMetadata(::ResourceLocation const&, ::gsl::not_null<std::shared_ptr<cg::TextureSetDefinition>> const);

    MCNAPI void setTextureMetadata(::ResourceLocation const&, ::cg::TextureSetImageDescription const&);

    MCNAPI bool shouldLoadPBRResources() const;

    MCNAPI void touchTextureInLRUCache(::ResourceLocation const&);

    MCNAPI void trimLRUCache();

    MCNAPI void unloadAllTextures();

    MCNAPI bool unloadTexture(::ResourceLocation const&, bool const);

    MCNAPI ::BedrockTexture& uploadTexture(::ResourceLocation const&, ::cg::ImageBuffer);

    MCNAPI ::BedrockTexture&
    uploadTexture(::ResourceLocation const&, ::gsl::not_null<std::shared_ptr<cg::TextureSetDefinition>>);

    MCNAPI ::BedrockTexture& uploadTexture(::ResourceLocation const&, ::mce::TextureContainer&&, std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::mce::TextureResourceService&
    );

    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::mce::TextureResourceService&,
        std::shared_ptr<mce::ImageResourceLoader>
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
    MCNAPI ::mce::TexturePtr
    $getTexture(::ResourceLocation const&, bool const, std::optional<uint>, ::cg::TextureSetLayerType const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
