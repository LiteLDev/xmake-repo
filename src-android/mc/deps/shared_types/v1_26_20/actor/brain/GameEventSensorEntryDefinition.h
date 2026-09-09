#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/WorldBlockPosition.h"
#include "mc/deps/shared_types/actor/utilities/brain/EntityRefMemory.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"
#include "mc/deps/shared_types/v1_26_20/actor/brain/GameEventType.h"
#include "mc/deps/shared_types/v1_26_20/actor/brain/SensorResponseDefinition.h"

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct GameEventSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
      SharedTypes::v1_26_20::Brain::MemorySensors::GameEventSensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 48> mSourceEntityMemory;
    ::ll::UntypedStorage<8, 48> mEventPositionMemory;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mSourceEntityFilters;
    ::ll::TypedStorage<4, 4, uint> mRadius;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::Brain::MemorySensors::GameEvents::GameEventType> mEventType;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mOnGameEventResponse;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
