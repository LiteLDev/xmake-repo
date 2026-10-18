#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class FrameUpdateContext;
class IClientInstance;
class ResourcePackManager;
namespace mce { class TextureGroup; }
namespace mce { struct TextureResourceService; }
// clang-format on

class CubemapBackgroundResources : public ::Bedrock::EnableNonOwnerReferences, public ::ResourcePackListener {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class FrameUpdateContext;
class IClientInstance;
class ResourcePackManager;
namespace mce { class TextureGroup; }
namespace mce { struct TextureResourceService; }
// clang-format on

class CubemapBackgroundResources : public ::Bedrock::EnableNonOwnerReferences, public ::ResourcePackListener {
#else // @header-generator platform
class CubemapBackgroundResources {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // CubemapBackgroundResources inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class CubemapType : int {
        SDR = 0,
        HDR = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mIsVanillaCubemap;
    ::ll::UntypedStorage<8, 24>                                         mResourcePackManager;
    ::ll::TypedStorage<8, 192, std::array<mce::TexturePtr, 6>>          mPanoramaImages;
    ::ll::TypedStorage<8, 288, std::array<ResourceLocation, 6>>         mPanormaResourceLocations;
    ::ll::TypedStorage<8, 288, std::array<ResourceLocation, 6>>         mPanoramaHDRResourceLocations;
    ::ll::UntypedStorage<1, 24>                                         mCubemapTexture;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                       mOverlayLocation;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                        mOverlayTexture;
    ::ll::TypedStorage<4, 4, int>                                       mTextureRefCount;
    ::ll::TypedStorage<1, 1, bool>                                      mPrimaryClientUnloaded;
    ::ll::TypedStorage<1, 1, bool>                                      mPendingRecreateCubemap;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                       mHDRTexturesUnavailable;
    ::ll::TypedStorage<4, 4, ::CubemapBackgroundResources::CubemapType> mCubemapType;
    ::ll::TypedStorage<4, 16, ::mce::Color>                             mFadeInColor;
    // NOLINTEND

public:
    // prevent constructor by default
    CubemapBackgroundResources();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CubemapBackgroundResources();

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CubemapBackgroundResources(
        std::shared_ptr<mce::TextureGroup>,
        ::ResourcePackManager&,
        ::CubemapBackgroundResources::CubemapType const&
    );

    MCNAPI void _checkHDRTexturesAvailableAndFallback(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void _unloadPanoramaTextures(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void _updateIsVanillaCubemap();

    MCNAPI bool arePanoramaTexturesLoadedInGroup(std::shared_ptr<mce::TextureGroup> const) const;

    MCNAPI void frameUpdate(::IClientInstance&, ::FrameUpdateContext&);

    MCNAPI bool isVanillaCubemap() const;

    MCNAPI void primaryClientLoadAssets(::mce::TextureResourceService&, std::shared_ptr<mce::TextureGroup>);

    MCNAPI void primaryClientUnloadAssets(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void setFadeInColor(::mce::Color const&);

    MCNAPI void unloadAssets(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void updateAssets(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void updateCubemapType(::CubemapBackgroundResources::CubemapType const&, std::shared_ptr<mce::TextureGroup>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<mce::TextureGroup>, ::ResourcePackManager&, ::CubemapBackgroundResources::CubemapType const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class CubemapType : int {
        Sdr = 0,
        Hdr = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                  mIsVanillaCubemap;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager>> mResourcePackManager;
    ::ll::TypedStorage<8, 192, ::std::array<::mce::TexturePtr, 6>>                  mPanoramaImages;
    ::ll::TypedStorage<8, 336, ::std::array<::ResourceLocation, 6>>                 mPanormaResourceLocations;
    ::ll::TypedStorage<8, 336, ::std::array<::ResourceLocation, 6>>                 mPanoramaHDRResourceLocations;
    ::ll::TypedStorage<8, 24, ::mce::ClientTexture>                                 mCubemapTexture;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                                   mOverlayLocation;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                    mOverlayTexture;
    ::ll::TypedStorage<4, 4, int>                                                   mTextureRefCount;
    ::ll::TypedStorage<1, 1, bool>                                                  mPrimaryClientUnloaded;
    ::ll::TypedStorage<1, 1, bool>                                                  mPendingRecreateCubemap;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                 mHDRTexturesUnavailable;
    ::ll::TypedStorage<4, 4, ::CubemapBackgroundResources::CubemapType>             mCubemapType;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                         mFadeInColor;
    // NOLINTEND

public:
    // prevent constructor by default
    CubemapBackgroundResources();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CubemapBackgroundResources() /*override*/ = default;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CubemapBackgroundResources(
        ::std::shared_ptr<::mce::TextureGroup>           textureGroup,
        ::ResourcePackManager&                           resourcePackManager,
        ::CubemapBackgroundResources::CubemapType const& cubemapType
    );

    MCAPI void _checkHDRTexturesAvailableAndFallback(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void _unloadPanoramaTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI bool arePanoramaTexturesLoadedInGroup(::std::shared_ptr<::mce::TextureGroup> textures) const;

    MCAPI void frameUpdate(::IClientInstance& clientInstance, ::FrameUpdateContext& frameUpdateContext);

    MCAPI void loadAssets(
        ::mce::TextureResourceService&         textureResourceService,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup
    );

    MCAPI void unloadAssets(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void updateAssets(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void updateCubemapType(
        ::CubemapBackgroundResources::CubemapType const& cubemapType,
        ::std::shared_ptr<::mce::TextureGroup>           textureGroup
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::mce::TextureGroup>           textureGroup,
        ::ResourcePackManager&                           resourcePackManager,
        ::CubemapBackgroundResources::CubemapType const& cubemapType
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND
#else // @header-generator platform
    enum class CubemapType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
