#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
