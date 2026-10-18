#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core_graphics/ImageDescription.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/core_graphics/helpers/TintMapColor.h"

class TextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                  location;
    ::ll::TypedStorage<4, 24, std::optional<cg::ImageDescription>> imageDescription;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                  tintMapLocation;
    ::ll::TypedStorage<4, 24, std::optional<cg::ImageDescription>> tintMapImageDescription;
    ::ll::TypedStorage<4, 16, ::mce::Color>                        tintColor;
    ::ll::TypedStorage<4, 64, ::TintMapColor>                      multiChannelTintBaseColor;
    ::ll::TypedStorage<4, 64, ::TintMapColor>                      multiChannelTintColor;
    ::ll::TypedStorage<1, 1, bool>                                 multiChannelTint;
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType>            mTextureSetLayerType;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class TintMapColor;
namespace mce { class Color; }
// clang-format on

class TextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk5e7a90;
    ::ll::UntypedStorage<4, 24> mUnk88ed42;
    ::ll::UntypedStorage<8, 56> mUnkd6a048;
    ::ll::UntypedStorage<4, 24> mUnkc99e19;
    ::ll::UntypedStorage<4, 16> mUnkcb1222;
    ::ll::UntypedStorage<4, 64> mUnkad2404;
    ::ll::UntypedStorage<4, 64> mUnkde35ba;
    ::ll::UntypedStorage<1, 1>  mUnkfaf113;
    ::ll::UntypedStorage<1, 1>  mUnk6b1650;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureData& operator=(TextureData const&);
    TextureData(TextureData const&);
    TextureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureData(
        ::ResourceLocation const&       location,
        ::ResourceLocation const&       tintMapLocation,
        ::mce::Color const&             tintColor,
        ::TintMapColor const&           multiChannelTintBaseColor,
        ::TintMapColor const&           multiChannelTintColor,
        bool                            multiChannelTint,
        ::cg::TextureSetLayerType const textureSetLayerType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&       location,
        ::ResourceLocation const&       tintMapLocation,
        ::mce::Color const&             tintColor,
        ::TintMapColor const&           multiChannelTintBaseColor,
        ::TintMapColor const&           multiChannelTintColor,
        bool                            multiChannelTint,
        ::cg::TextureSetLayerType const textureSetLayerType
    );
    // NOLINTEND
};
#else // @header-generator platform
class TextureData {};
#endif // @header-generator platform
#endif // @header-generator platform
