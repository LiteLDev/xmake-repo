#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/brain/PoiMemory.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct FindNearestPoiSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
      SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestPoiSensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>            mFoundPoiMemory;
    ::ll::TypedStorage<8, 24, std::string> mPoiName;
    ::ll::TypedStorage<4, 4, int>          mSearchRadius;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
