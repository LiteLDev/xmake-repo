#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorComponentDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_26_30/actor/brain/FindNearestBlockSensorEntryDefinition.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_30::Brain::MemorySensors { struct FindNearestBlockSensorEntryDefinition; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct FindNearestBlockComponentDefinition
: public ::SharedTypes::v1_26_0::Brain::MemorySensors::BaseSensorComponentDefinition<
#if defined(LL_PLAT_A) // @header-generator platform
      SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestBlockComponentDefinition,
      SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestBlockSensorEntryDefinition> {};
#else // @header-generator platform
      ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestBlockComponentDefinition,
      ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestBlockSensorEntryDefinition> {};
#endif // @header-generator platform

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
