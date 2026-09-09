#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/ColorChannel.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
struct TextureUVCoordinateSet;
// clang-format on

struct TextureAtlasItemTextureSetTranslation {
public:
    // TextureAtlasItemTextureSetTranslation inner types declare
    // clang-format off
    struct LayerType;
    struct TranslationScale;
    struct UniformVec4;
    struct NormalInfo;
    struct MERSInfo;
    struct UniformVec3;
    struct UniformFloat;
    struct SingleChannelInfo;
    struct Translation;
    struct ColorUniform;
    struct NormalTranslation;
    struct MERSTranslation;
    struct MERSUniform;
    struct Uniform;
    struct SingleChannelTranslation;
    // clang-format on

    // TextureAtlasItemTextureSetTranslation inner types define
    enum class Channel : uchar {
        // bitfield representation
        X     = 0,
        Red   = 0,
        Green = 1 << 0,
        Y     = 1 << 0,
        Blue  = 1 << 1,
        Z     = 1 << 1,
        W     = Y | Z,
        Alpha = Y | Z,
    };

    struct LayerType {
    public:
        // member variables
        // NOLINTBEGIN
        ::cg::TextureSetLayerType layerType : 4;
        // NOLINTEND
    };

    struct TranslationScale {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> uvScaleX;
        ::ll::TypedStorage<4, 4, float> uvScaleY;
        ::ll::TypedStorage<4, 4, float> uvBiasX;
        ::ll::TypedStorage<4, 4, float> uvBiasY;
        ::ll::TypedStorage<4, 4, int>   maxMipCount;
        // NOLINTEND
    };

    struct UniformVec4 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::mce::Color> uniformValue;
        // NOLINTEND
    };

    struct NormalInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::TextureAtlasItemTextureSetTranslation::Channel x : 2;
        ::TextureAtlasItemTextureSetTranslation::Channel y : 2;
        ::TextureAtlasItemTextureSetTranslation::Channel z : 2;
        // NOLINTEND
    };

    struct MERSInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::TextureAtlasItemTextureSetTranslation::Channel metal         : 2;
        ::TextureAtlasItemTextureSetTranslation::Channel emissive      : 2;
        ::TextureAtlasItemTextureSetTranslation::Channel roughness     : 2;
        ::TextureAtlasItemTextureSetTranslation::Channel subsurface    : 2;
        bool                                             hasMetal      : 1;
        bool                                             hasEmissive   : 1;
        bool                                             hasRoughness  : 1;
        bool                                             hasSubsurface : 1;
        // NOLINTEND
    };

    struct UniformVec3 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::mce::Color> uniformValue;
        // NOLINTEND
    };

    struct UniformFloat {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ColorChannel> uniformValue;
        // NOLINTEND
    };

    struct SingleChannelInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::TextureAtlasItemTextureSetTranslation::Channel channel : 3;
        // NOLINTEND
    };

    struct Translation : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                         public ::TextureAtlasItemTextureSetTranslation::TranslationScale {};

    struct ColorUniform : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                          public ::TextureAtlasItemTextureSetTranslation::UniformVec4 {};

    struct NormalTranslation : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                               public ::TextureAtlasItemTextureSetTranslation::NormalInfo,
                               public ::TextureAtlasItemTextureSetTranslation::TranslationScale {};

    struct MERSTranslation : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                             public ::TextureAtlasItemTextureSetTranslation::MERSInfo,
                             public ::TextureAtlasItemTextureSetTranslation::TranslationScale {};

    struct MERSUniform : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                         public ::TextureAtlasItemTextureSetTranslation::MERSInfo,
                         public ::TextureAtlasItemTextureSetTranslation::UniformVec3 {};

    struct Uniform : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                     public ::TextureAtlasItemTextureSetTranslation::UniformFloat {};

    struct SingleChannelTranslation : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                                      public ::TextureAtlasItemTextureSetTranslation::SingleChannelInfo,
                                      public ::TextureAtlasItemTextureSetTranslation::TranslationScale {};

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::variant<TextureAtlasItemTextureSetTranslation::Translation, TextureAtlasItemTextureSetTranslation::ColorUniform, TextureAtlasItemTextureSetTranslation::NormalTranslation, TextureAtlasItemTextureSetTranslation::MERSTranslation, TextureAtlasItemTextureSetTranslation::MERSUniform, TextureAtlasItemTextureSetTranslation::Uniform, TextureAtlasItemTextureSetTranslation::SingleChannelTranslation>>> layers;
    // clang-format on
    // NOLINTEND
};
