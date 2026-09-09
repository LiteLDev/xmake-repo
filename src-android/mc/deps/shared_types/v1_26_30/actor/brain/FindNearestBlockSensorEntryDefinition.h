#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/WorldBlockPosition.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct FindNearestBlockSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
      SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestBlockSensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                  mSearchBlockPosMemory;
    ::ll::UntypedStorage<8, 40>                                                  mFoundBlockPosMemory;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::BlockDescriptor>> mBlockDescriptors;
    ::ll::TypedStorage<4, 4, int>                                                mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                                mSearchHeight;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
