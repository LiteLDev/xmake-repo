#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct MobEffectImmunityComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class MobEffectImmunityDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<uint>> mMobEffects;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<uint>> mMobEffects;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addEffectByName(std::string const&);

    MCNAPI void initialize(::EntityContext&, ::MobEffectImmunityComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MobEffectImmunityDefinition>>&);
#else // @header-generator platform
    MCAPI void addEffectByName(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND
};
