#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components_json_legacy/Interaction.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class InteractComponent;
namespace JsonUtil { class EmptyClass; }
#else // @header-generator platform
class Interaction;
#endif // @header-generator platform
// clang-format on

class InteractDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Interaction>> mInteractions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Interaction>> mInteractions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addInteraction(::Interaction const&);

    MCNAPI void initialize(::EntityContext&, ::InteractComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InteractDefinition>>&);
#else // @header-generator platform
    MCAPI void addInteraction(::Interaction const& interaction);
#endif // @header-generator platform
    // NOLINTEND
};
