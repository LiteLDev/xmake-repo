#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/TextureData.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class AbstractTextureAccessor;
class ResourceLocation;
class TintMapColor;
struct TextureUVCoordinateSet;
namespace cg { struct ImageDescription; }
// clang-format on

class TextureAtlasTile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<TextureData>>                             textureDataCollection;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<TextureUVCoordinateSet>>> uvs;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                         overlay;
    ::ll::TypedStorage<1, 1, bool>                                                  quad;
    ::ll::TypedStorage<4, 4, float>                                                 mipFadeRate;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                         mipFadeColor;
    ::ll::TypedStorage<1, 1, bool>                                                  isAdditive;
    ::ll::TypedStorage<1, 1, bool>                                                  loadedTextures;
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType>                             mTextureSetLayerType;
    ::ll::TypedStorage<4, 4, uint>                                                  tileWidth;
    ::ll::TypedStorage<4, 4, uint>                                                  tileHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasTile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureAtlasTile(::TextureAtlasTile&&);

    MCNAPI ~TextureAtlasTile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TextureAtlasTile&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
