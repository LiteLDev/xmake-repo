#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class AbstractTextureAccessor;
class ResourceLocation;
namespace cg { struct ImageDescription; }
// clang-format on

class TextureAtlasTile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3c7861;
    ::ll::UntypedStorage<8, 24> mUnkb1a08e;
    ::ll::UntypedStorage<4, 16> mUnk62d1eb;
    ::ll::UntypedStorage<1, 1>  mUnkd942a3;
    ::ll::UntypedStorage<4, 4>  mUnk7a10db;
    ::ll::UntypedStorage<4, 16> mUnk2f522b;
    ::ll::UntypedStorage<1, 1>  mUnkd721bd;
    ::ll::UntypedStorage<1, 1>  mUnkdbba8e;
    ::ll::UntypedStorage<1, 1>  mUnk129141;
    ::ll::UntypedStorage<4, 4>  mUnk62b7a5;
    ::ll::UntypedStorage<4, 4>  mUnk6731d6;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasTile& operator=(TextureAtlasTile const&);
    TextureAtlasTile(TextureAtlasTile const&);
    TextureAtlasTile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _calculateTileDimensions(
        ::AbstractTextureAccessor const&         textureAccessor,
        ::ResourceLocation const&                resourceLocation,
        ::std::optional<::cg::ImageDescription>& optImageDescription,
        ::cg::TextureSetLayerType const          textureSetLayerType
    );
    // NOLINTEND
};
#else // @header-generator platform
class TextureAtlasTile {};
#endif // @header-generator platform
#endif // @header-generator platform
