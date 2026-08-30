#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorComponentDefinition.h"
#include "mc/deps/shared_types/v1_26_20/actor/brain/InRangeOfEntitySensorEntryDefinition.h"

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct InRangeOfEntityComponentDefinition
: public ::SharedTypes::v1_26_0::Brain::MemorySensors::BaseSensorComponentDefinition<
      SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntityComponentDefinition,
      SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition> {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();

    MCNAPI static std::string_view const& TYPE_NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
