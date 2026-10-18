#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct ActorTextureInfo;
struct PBRTexturePtrs;
struct ParsedTextureSet;
struct ParsedTextureSetLayer;
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class TextureJSONParser {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ActorTextureInfo
    getTextureInfoFromTextureSet(std::shared_ptr<mce::TextureGroup>, ::ParsedTextureSet const&);

    MCNAPI static ::ActorTextureInfo
    getTextureInfoFromTextureSet(std::shared_ptr<mce::TextureGroup>, ::Json::Value const&);

    MCNAPI static void loadTextureSetLayer(
        ::ParsedTextureSetLayer&,
        ::Json::Value const&,
        float,
        ::mce::Color const&,
        bool,
        std::optional<cg::TextureSetLayerType>
    );

    MCNAPI static void parseTextureSet(
        std::shared_ptr<mce::TextureGroup>,
        ::Json::Value const&,
        ::ParsedTextureSet&,
        float,
        ::mce::Color const&,
        bool
    );

    MCNAPI static void
    parseTextureSetLayers(std::shared_ptr<mce::TextureGroup>, ::ResourceLocation const&, ::ParsedTextureSet&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct ActorTextureInfo;
struct ParsedTextureSet;
struct ParsedTextureSetLayer;
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class TextureJSONParser {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ActorTextureInfo
    getTextureInfoFromTextureSet(::std::shared_ptr<::mce::TextureGroup> textureGroup, ::Json::Value const& texture);

    MCAPI static ::ActorTextureInfo getTextureInfoFromTextureSet(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::ParsedTextureSet const&              textureSet
    );

    MCAPI static void loadTextureSetLayer(
        ::ParsedTextureSetLayer&                   layer,
        ::Json::Value const&                       layerJsonData,
        float                                      mipFadeAmount,
        ::mce::Color const&                        mipFadeColor,
        bool                                       isAdditive,
        ::std::optional<::cg::TextureSetLayerType> textureSetLayerType
    );

    MCAPI static void parseTextureSet(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Json::Value const&                   texture,
        ::ParsedTextureSet&                    outTextureSet,
        float                                  mipFadeAmount,
        ::mce::Color const&                    mipFadeColor,
        bool                                   isAdditive
    );

    MCAPI static void parseTextureSetLayers(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::ResourceLocation const&              textureSetLocation,
        ::ParsedTextureSet&                    textureSet
    );
    // NOLINTEND
};
#else // @header-generator platform
class TextureJSONParser {};
#endif // @header-generator platform
#endif // @header-generator platform
