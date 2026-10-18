#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct EntityArmorEquipmentSlotMappingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct EntityArmorEquipmentSlotMappingDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ArmorSlot> mArmorSlot;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkfe1b80;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EntityArmorEquipmentSlotMappingDefinition& operator=(EntityArmorEquipmentSlotMappingDefinition const&);
    EntityArmorEquipmentSlotMappingDefinition(EntityArmorEquipmentSlotMappingDefinition const&);
    EntityArmorEquipmentSlotMappingDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _setArmorSlot(::std::string const& slot);
#endif // @header-generator platform
    // NOLINTEND
};
