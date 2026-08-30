#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/GeneDefinition.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GeneticsComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GeneticsDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                        mMutationRate;
    ::ll::TypedStorage<8, 24, std::vector<GeneDefinition>> mGeneDefinitions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeneticsDefinition();

    MCNAPI void addGeneDefinition(::GeneDefinition const&);

    MCNAPI void initialize(::EntityContext&, ::GeneticsComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GeneticsDefinition>>&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_MUTATION_RATE();

    MCNAPI static float const& DEFAULT_OVERRIDE_MUTATION_RATE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
