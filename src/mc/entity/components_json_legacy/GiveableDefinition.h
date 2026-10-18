#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components_json_legacy/GiveableTrigger.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class GiveableComponent;
namespace JsonUtil { class EmptyClass; }
#else // @header-generator platform
struct GiveableTrigger;
#endif // @header-generator platform
// clang-format on

class GiveableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<GiveableTrigger>> mTriggers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::GiveableTrigger>> mTriggers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addGiveableTrigger(::GiveableTrigger const&);

    MCNAPI void initialize(::EntityContext&, ::GiveableComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GiveableDefinition>>&);
#else // @header-generator platform
    MCAPI void addGiveableTrigger(::GiveableTrigger const& trigger);
#endif // @header-generator platform
    // NOLINTEND
};
