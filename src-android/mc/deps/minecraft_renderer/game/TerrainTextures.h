#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
