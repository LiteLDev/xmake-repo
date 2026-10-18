#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/util/json_util/JsonParseState.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cg { class TextureSetDefinition; }
// clang-format on

#endif // @header-generator platform
namespace TextureSetHelpers {

#if defined(LL_PLAT_A) // @header-generator platform
class TextureSetLayerDefinitionParser {};
#else // @header-generator platform
class TextureSetLayerDefinitionParser {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void _buildTextureSetLayerSchema_v1_16_100(
        ::JsonUtil::JsonSchemaObjectNode<
            ::JsonUtil::JsonParseState<::JsonUtil::EmptyClass, ::cg::TextureSetDefinition>,
            ::cg::TextureSetDefinition>& description
    );

    MCNAPI static void _schemaAddChildColor(
        ::JsonUtil::JsonSchemaObjectNode<
            ::JsonUtil::JsonParseState<::JsonUtil::EmptyClass, ::cg::TextureSetDefinition>,
            ::cg::TextureSetDefinition>& description,
        ::std::string const&             jsonLayerPropertyName,
        ::cg::TextureSetLayerType const& type,
        bool                             ignoreAlpha
    );

    MCNAPI static void _schemaAddChildResourceLocation(
        ::JsonUtil::JsonSchemaObjectNode<
            ::JsonUtil::JsonParseState<::JsonUtil::EmptyClass, ::cg::TextureSetDefinition>,
            ::cg::TextureSetDefinition>& description,
        ::std::string const&             jsonLayerPropertyName,
        ::cg::TextureSetLayerType const& type
    );
#endif
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace TextureSetHelpers
