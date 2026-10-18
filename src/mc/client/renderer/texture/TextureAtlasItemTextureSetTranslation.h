#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/ColorChannel.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
struct TextureUVCoordinateSet;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct TextureAtlasItemTextureSetTranslation {
public:
    // TextureAtlasItemTextureSetTranslation inner types declare
    // clang-format off
    struct LayerType;
#if defined(LL_PLAT_A) // @header-generator platform
    struct TranslationScale;
    struct UniformVec4;
    struct NormalInfo;
    struct MERSInfo;
    struct UniformVec3;
    struct UniformFloat;
#else // @header-generator platform
#endif // @header-generator platform
    struct SingleChannelInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct MERSInfo;
    struct NormalInfo;
    struct TranslationScale;
    struct UniformFloat;
    struct UniformVec3;
    struct UniformVec4;
#endif // @header-generator platform
    struct Translation;
    struct ColorUniform;
    struct NormalTranslation;
    struct MERSTranslation;
    struct MERSUniform;
    struct Uniform;
    struct SingleChannelTranslation;
    // clang-format on

    // TextureAtlasItemTextureSetTranslation inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    enum class Channel : uchar {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct LayerType {
    public:
        // member variables
        // NOLINTBEGIN
        ::cg::TextureSetLayerType layerType : 4;
        // NOLINTEND
    };
#else // @header-generator platform
    struct LayerType {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    struct SingleChannelInfo {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct UniformVec4 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::mce::Color> uniformValue;
        // NOLINTEND
    };
#else // @header-generator platform
    struct MERSInfo {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct NormalInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::TextureAtlasItemTextureSetTranslation::Channel x : 2;
        ::TextureAtlasItemTextureSetTranslation::Channel y : 2;
        ::TextureAtlasItemTextureSetTranslation::Channel z : 2;
        // NOLINTEND
    };
#else // @header-generator platform
    struct NormalInfo {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    struct TranslationScale {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct UniformVec3 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::mce::Color> uniformValue;
        // NOLINTEND
    };
#else // @header-generator platform
    struct UniformFloat {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct UniformFloat {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ColorChannel> uniformValue;
        // NOLINTEND
    };
#else // @header-generator platform
    struct UniformVec3 {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct SingleChannelInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::TextureAtlasItemTextureSetTranslation::Channel channel : 3;
        // NOLINTEND
    };
#else // @header-generator platform
    struct UniformVec4 {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct Translation : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                         public ::TextureAtlasItemTextureSetTranslation::TranslationScale {};
#else // @header-generator platform
    struct Translation {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ColorUniform : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                          public ::TextureAtlasItemTextureSetTranslation::UniformVec4 {};
#else // @header-generator platform
    struct ColorUniform {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct NormalTranslation : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                               public ::TextureAtlasItemTextureSetTranslation::NormalInfo,
                               public ::TextureAtlasItemTextureSetTranslation::TranslationScale {};
#else // @header-generator platform
    struct NormalTranslation {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct MERSTranslation : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                             public ::TextureAtlasItemTextureSetTranslation::MERSInfo,
                             public ::TextureAtlasItemTextureSetTranslation::TranslationScale {};
#else // @header-generator platform
    struct MERSTranslation {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct MERSUniform : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                         public ::TextureAtlasItemTextureSetTranslation::MERSInfo,
                         public ::TextureAtlasItemTextureSetTranslation::UniformVec3 {};
#else // @header-generator platform
    struct MERSUniform {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct Uniform : public ::TextureAtlasItemTextureSetTranslation::LayerType,
                     public ::TextureAtlasItemTextureSetTranslation::UniformFloat {};
#else // @header-generator platform
    struct Uniform {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    struct SingleChannelTranslation {};
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk26aaec;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasItemTextureSetTranslation& operator=(TextureAtlasItemTextureSetTranslation const&);
    TextureAtlasItemTextureSetTranslation(TextureAtlasItemTextureSetTranslation const&);
    TextureAtlasItemTextureSetTranslation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TextureAtlasItemTextureSetTranslation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
