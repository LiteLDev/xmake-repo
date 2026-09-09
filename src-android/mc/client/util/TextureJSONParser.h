#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
