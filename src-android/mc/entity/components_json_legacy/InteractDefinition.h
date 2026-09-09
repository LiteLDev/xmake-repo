#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/Interaction.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class InteractComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InteractDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Interaction>> mInteractions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addInteraction(::Interaction const&);

    MCNAPI void initialize(::EntityContext&, ::InteractComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InteractDefinition>>&);
    // NOLINTEND
};
