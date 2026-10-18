#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/definitions/DamageCondition.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace JsonUtil { class EmptyClass; }
#else // @header-generator platform
struct DamageCondition;
#endif // @header-generator platform
// clang-format on

class HurtOnConditionDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<DamageCondition>> mDamageConditions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk4b6a61;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    HurtOnConditionDefinition& operator=(HurtOnConditionDefinition const&);
    HurtOnConditionDefinition(HurtOnConditionDefinition const&);
    HurtOnConditionDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addDamageCondition(::DamageCondition const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HurtOnConditionDefinition>>&);
#else // @header-generator platform
    MCAPI void addDamageCondition(::DamageCondition const& damageCondition);
#endif // @header-generator platform
    // NOLINTEND
};
