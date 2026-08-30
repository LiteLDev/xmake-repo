#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/WorldBlockPosition.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct InRangeOfBlockSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
      SharedTypes::v1_26_30::Brain::MemorySensors::InRangeOfBlockSensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>            mTargetPositionMemory;
    ::ll::TypedStorage<8, 24, std::string> mInRangeEventName;
    ::ll::TypedStorage<8, 24, std::string> mOutOfRangeEventName;
    ::ll::TypedStorage<4, 4, int>          mSearchRange;
    ::ll::TypedStorage<4, 4, int>          mSearchHeight;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
