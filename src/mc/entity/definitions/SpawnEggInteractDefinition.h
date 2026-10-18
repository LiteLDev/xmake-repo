#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
namespace JsonUtil { class EmptyClass; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct SpawnEggInteractDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnSpawn;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 104> mUnk714abe;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SpawnEggInteractDefinition& operator=(SpawnEggInteractDefinition const&);
    SpawnEggInteractDefinition(SpawnEggInteractDefinition const&);
    SpawnEggInteractDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, SpawnEggInteractDefinition>>&);
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity) const;
#endif // @header-generator platform
    // NOLINTEND
};
