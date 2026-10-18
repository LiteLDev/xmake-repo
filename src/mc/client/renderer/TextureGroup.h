#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/models/AsyncCachedTextureLoader.h"
#include "mc/client/renderer/ImageBufferResourceManager.h"
#include "mc/client/renderer/ImageCacheMode.h"
#include "mc/client/renderer/TextureLoadMode.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/CountTracker.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/minecraft_renderer/renderer/TextureGroupBase.h"
#include "mc/resources/ResourceLoadType.h"
#include "mc/util/texture_set_helpers/TextureSetDefinitionLoader.h"

// auto generated forward declare list
// clang-format off
class BedrockTexture;
class IAdvancedGraphicsOptions;
class ResourceLoadManager;
class ResourceLocationPair;
namespace cg { class TextureSetDefinition; }
namespace mce { class ImageResourceLoader; }
namespace mce { class LRUCache; }
namespace mce { class TextureContainer; }
namespace mce { class TexturePtr; }
namespace mce { struct TextureDescription; }
namespace mce { struct TextureResourceService; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextureGroup : public ::Bedrock::EnableNonOwnerReferences, public ::mce::TextureGroupBase {
public:
    // TextureGroup inner types define
    using LoadResult = ::Bedrock::Threading::Async<void>;

    using TextureMap = ::std::map<::ResourceLocation, ::BedrockTexture>;

    using TextureLoadKey = ::std::pair<::ResourceLocation, ::TextureLoadMode>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mAdvancedGraphicsOptions;
    ::ll::TypedStorage<8, 352, ::AsyncCachedTextureLoader>                               mAsyncTextureLoader;
    ::ll::TypedStorage<8, 16, ::std::map<::ResourceLocation, ::BedrockTexture>>          mLoadedTextures;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>>      mResourceLoadManager;
    ::ll::TypedStorage<8, 8, ::mce::TextureResourceService&>                             mResourceService;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer const>                                   mMissingTexture;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::ImageResourceLoader>>             mImageResourceLoader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper>>
                                                                                     mTextureSetResourceHelper;
    ::ll::TypedStorage<8, 16, ::std::map<::ResourceLocation, ::std::optional<uint>>> mTouchedTextures;
    ::ll::TypedStorage<8, 16, ::ImageBufferResourceManager>                          mImageBufferCache;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::LRUCache>>                     mLRUCache;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::pair<::ResourceLocation, ::TextureLoadMode>, ::Bedrock::Threading::SharedAsync<void>>>
                                                                  mLoadQueueResults;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>  mQueueLoadResultCoroutine;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::CountTracker> mPendingLoadTaskCounter;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>               mOutstandingTaskMemory;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>               mOutstandingTaskCount;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroup& operator=(TextureGroup const&);
    TextureGroup(TextureGroup const&);
    TextureGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureGroup() /*override*/;

    virtual ::mce::TexturePtr getTexture(
        ::ResourceLocation const&       resourceLocation,
        bool const                      forceReload,
        ::std::optional<uint>           optLoadOrder,
        ::cg::TextureSetLayerType const textureType
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureGroup(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService
    );

    MCAPI TextureGroup(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService,
        ::std::shared_ptr<::mce::ImageResourceLoader>             imageResourceLoader
    );

    MCAPI void _loadTextureAsyncUrgentlyIfTouched(
        ::std::pair<::ResourceLocation, ::TextureLoadMode> const& textureLoadKey,
        ::std::optional<::ResourceLoadType> const                 optionalLoadType
    );

    MCAPI void _loadTexturesAsync(
        ::gsl::span<::ResourceLocationPair> const locationPairs,
        ::std::optional<::ResourceLoadType> const resourceLoadType
    );

    MCAPI void addEmptyTexture(::ResourceLocation const& resourceLocation, int width, int height);

    MCAPI void enableLRUCache(uint64 cacheSize);

    MCAPI uint64 estimateMemoryUsage() const;

    MCAPI ::cg::ImageBuffer* getCachedImageOrLoadAsync(::ResourceLocation const& imageToLoad);

    MCAPI ::cg::ImageBuffer* getCachedImageOrLoadSync(::ResourceLocation const& resourceLocation, bool forceReload);

    MCAPI ::cg::ImageBuffer*
    insertImageIntoCache(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer&& imageBuffer);

    MCAPI bool isLoaded(
        ::ResourceLocation const& resourceLocation,
        bool                      ignoreCreation,
        ::cg::TextureSetLayerType textureType
    ) const;

    MCAPI ::nonstd::expected<void, ::std::error_condition>
    loadImageSyncAndInsertIntoCache(::ResourceLocation const& resourceLocation, bool splitAsArray);

    MCAPI ::Bedrock::Threading::Async<void> loadTextureAsync(
        ::ResourceLocation const&           resourceLocation,
        ::TextureLoadMode                   textureLoadMode,
        ::std::optional<::ResourceLoadType> resourceLoadType,
        ::std::optional<uint>               optLoadOrder
    );

    MCAPI void
    loadTexturesAsync(::gsl::span<::ResourceLocation> locations, ::std::optional<::ResourceLoadType> resourceLoadType);

    MCAPI void reloadAllTextures();

    MCAPI void reloadImages(
        ::gsl::span<::ResourceLocationPair> imagesToLoadAsync,
        ::gsl::span<::ResourceLocation>     imagesToImmediatelyLoad,
        ::std::vector<::ResourceLocation>   texturesToKeep,
        ::ImageCacheMode
    );

    MCAPI void
    setTextureMetadata(::ResourceLocation const& resourceLocation, ::mce::TextureDescription const& textureDescription);

    MCAPI void setTextureMetadata(
        ::ResourceLocation const&                                      resourceLocation,
        ::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>> textureSetDefinition
    );

    MCAPI bool shouldLoadPBRResources() const;

    MCAPI void unloadAllTextures();

    MCAPI bool unloadTexture(::ResourceLocation const& resourceLocation, bool assertOnFailure);

    MCAPI bool updateTextureInPlace(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer imageBuffer);

    MCAPI ::BedrockTexture& uploadTexture(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer imageBuffer);

    MCAPI ::BedrockTexture& uploadTexture(
        ::ResourceLocation const&                                      resourceLocation,
        ::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>> textureSetDefinition
    );

    MCAPI ::BedrockTexture& uploadTexture(
        ::ResourceLocation const& resourceLocation,
        ::mce::TextureContainer&& textureContainer,
        ::std::string_view        optionalIdentifier
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService
    );

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService,
        ::std::shared_ptr<::mce::ImageResourceLoader>             imageResourceLoader
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::TexturePtr $getTexture(
        ::ResourceLocation const&       resourceLocation,
        bool const                      forceReload,
        ::std::optional<uint>           optLoadOrder,
        ::cg::TextureSetLayerType const textureType
    );
    // NOLINTEND
};
#else // @header-generator platform
class TextureGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
