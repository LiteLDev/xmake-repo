#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct MobEffectImmunityComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectImmunityDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uint>> mMobEffects;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addEffectByName(std::string const&);

    MCNAPI void initialize(::EntityContext&, ::MobEffectImmunityComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MobEffectImmunityDefinition>>&);
    // NOLINTEND
};
