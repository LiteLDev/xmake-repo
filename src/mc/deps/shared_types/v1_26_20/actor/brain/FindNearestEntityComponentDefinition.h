#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorComponentDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_26_20/actor/brain/FindNearestEntitySensorEntryDefinition.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_20::Brain::MemorySensors { struct FindNearestEntitySensorEntryDefinition; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct FindNearestEntityComponentDefinition
: public ::SharedTypes::v1_26_0::Brain::MemorySensors::BaseSensorComponentDefinition<
#if defined(LL_PLAT_A) // @header-generator platform
      SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntityComponentDefinition,
      SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntitySensorEntryDefinition> {};
#else // @header-generator platform
      ::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntityComponentDefinition,
      ::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntitySensorEntryDefinition> {};
#endif // @header-generator platform

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
