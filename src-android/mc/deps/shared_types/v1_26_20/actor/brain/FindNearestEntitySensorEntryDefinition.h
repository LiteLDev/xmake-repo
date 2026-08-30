#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/WorldBlockPosition.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"
#include "mc/deps/shared_types/v1_26_20/actor/brain/SensorResponseDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct EntityRefMemory; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct FindNearestEntitySensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
      SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntitySensorEntryDefinition> {
public:
    // FindNearestEntitySensorEntryDefinition inner types define
    using FilterGroupData = ::SharedTypes::v1_21_20::FilterGroupData;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 40> mFoundEntityMemory;
    ::ll::UntypedStorage<8, 48> mSearchPosMemory;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mSuccessResponse;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mFailureResponse;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mTargetFilters;
    ::ll::TypedStorage<4, 12, ::Vec3> mSearchRange;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
