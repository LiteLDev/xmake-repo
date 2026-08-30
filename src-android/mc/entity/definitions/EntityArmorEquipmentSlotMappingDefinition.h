#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct EntityArmorEquipmentSlotMappingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EntityArmorEquipmentSlotMappingDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ArmorSlot> mArmorSlot;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _setArmorSlot(std::string const&);

    MCNAPI void initialize(::EntityContext&, ::EntityArmorEquipmentSlotMappingComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        std::shared_ptr<
            JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EntityArmorEquipmentSlotMappingDefinition>>&
    );
    // NOLINTEND
};
