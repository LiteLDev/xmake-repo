#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components_json_legacy/SlotDescriptor.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class EquippableComponent;
namespace JsonUtil { class EmptyClass; }
#else // @header-generator platform
struct SlotDescriptor;
#endif // @header-generator platform
// clang-format on

class EquippableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SlotDescriptor>> mSlots;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::EquippableComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EquippableDefinition>>&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SlotDescriptor>> mSlots;
#endif // @header-generator platform
    // NOLINTEND
};
