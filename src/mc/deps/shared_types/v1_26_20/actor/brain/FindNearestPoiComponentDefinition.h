#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorComponentDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_26_20/actor/brain/FindNearestPoiSensorEntryDefinition.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_20::Brain::MemorySensors { struct FindNearestPoiSensorEntryDefinition; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct FindNearestPoiComponentDefinition
: public ::SharedTypes::v1_26_0::Brain::MemorySensors::BaseSensorComponentDefinition<
#if defined(LL_PLAT_A) // @header-generator platform
      SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestPoiComponentDefinition,
      SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestPoiSensorEntryDefinition> {};
#else // @header-generator platform
      ::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestPoiComponentDefinition,
      ::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestPoiSensorEntryDefinition> {};
#endif // @header-generator platform

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
