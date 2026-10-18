#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorComponentDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_26_30/actor/brain/FindNearestAttackableEntitySensorEntryDefinition.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_30::Brain::MemorySensors { struct FindNearestAttackableEntitySensorEntryDefinition; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct FindNearestAttackableEntityComponentDefinition
: public ::SharedTypes::v1_26_0::Brain::MemorySensors::BaseSensorComponentDefinition<
#if defined(LL_PLAT_A) // @header-generator platform
      SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestAttackableEntityComponentDefinition,
      SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestAttackableEntitySensorEntryDefinition> {};
#else // @header-generator platform
      ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestAttackableEntityComponentDefinition,
      ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestAttackableEntitySensorEntryDefinition> {};
#endif // @header-generator platform

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
