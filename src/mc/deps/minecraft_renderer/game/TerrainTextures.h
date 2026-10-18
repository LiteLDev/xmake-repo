#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
namespace mce { class TextureGroupBase; }
namespace mce { struct ClientTexture; }
namespace mcr { struct DynamicTextureResourceManager; }
// clang-format on

class TerrainTextures {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, std::array<std::shared_ptr<mce::ClientTexture>, 4>> mBrightnessTextures;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                  mEndPortalColorTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                  mEndPortalTexture;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ClientTexture>>                mFoliageTexture;
    ::ll::TypedStorage<8, 24, std::vector<mce::TexturePtr>>                       mAtlasLayers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void deinitTextures();

    MCNAPI void initTextures(
        ::mcr::DynamicTextureResourceManager&,
        std::shared_ptr<mce::TextureGroupBase>,
        std::vector<mce::TexturePtr>&&
    );

    MCNAPI ~TerrainTextures();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class TextureGroupBase; }
namespace mce { class TexturePtr; }
namespace mcr { struct DynamicTextureResourceManager; }
// clang-format on

class TerrainTextures {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkde8cfe;
    ::ll::UntypedStorage<8, 32> mUnk6e9af9;
    ::ll::UntypedStorage<8, 32> mUnkfe837b;
    ::ll::UntypedStorage<8, 16> mUnk9c5a00;
    ::ll::UntypedStorage<8, 24> mUnk91ad60;
    // NOLINTEND

public:
    // prevent constructor by default
    TerrainTextures& operator=(TerrainTextures const&);
    TerrainTextures(TerrainTextures const&);
    TerrainTextures();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void deinitTextures();

    MCNAPI void initTextures(
        ::mcr::DynamicTextureResourceManager&      dynamicTextureResourceManager,
        ::std::shared_ptr<::mce::TextureGroupBase> textureGroup,
        ::std::vector<::mce::TexturePtr>&&         atlasTextures
    );
    // NOLINTEND
};
#else // @header-generator platform
class TerrainTextures {};
#endif // @header-generator platform
#endif // @header-generator platform
