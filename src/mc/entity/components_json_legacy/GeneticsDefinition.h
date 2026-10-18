#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/GeneDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GeneticsComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct GeneDefinition;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GeneticsDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                        mMutationRate;
    ::ll::TypedStorage<8, 24, std::vector<GeneDefinition>> mGeneDefinitions;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                            mMutationRate;
    ::ll::TypedStorage<8, 24, ::std::vector<::GeneDefinition>> mGeneDefinitions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GeneticsDefinition();
#else // @header-generator platform
    MCAPI void addGeneDefinition(::GeneDefinition const& geneDefinition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addGeneDefinition(::GeneDefinition const&);

    MCNAPI void initialize(::EntityContext&, ::GeneticsComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::GeneticsComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GeneticsDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeneticsDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_MUTATION_RATE();

    MCNAPI static float const& DEFAULT_OVERRIDE_MUTATION_RATE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_MUTATION_RATE();
#endif // @header-generator platform
    // NOLINTEND
};
