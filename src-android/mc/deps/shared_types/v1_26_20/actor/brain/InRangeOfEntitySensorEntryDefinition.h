#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"
#include "mc/deps/shared_types/v1_26_20/actor/brain/SensorResponseDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct InRangeOfEntitySensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
      SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 40> mTargetEntityMemory;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mEnteredRangeResponse;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mExitedRangeResponse;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mWithinRangeResponse;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mOutOfRangeResponse;
    ::ll::TypedStorage<4, 12, ::Vec3> mSearchRange;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InRangeOfEntitySensorEntryDefinition(
        ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&
    );

    MCNAPI ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition&
    operator=(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition&&);

    MCNAPI ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition&
    operator=(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&);

    MCNAPI bool
    operator==(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&) const;

    MCNAPI ~InRangeOfEntitySensorEntryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& ENTERED_RANGE_RESPONSE_NAME();

    MCNAPI static std::string_view const& EXITED_RANGE_RESPONSE_NAME();

    MCNAPI static std::string_view const& OUT_OF_RANGE_RESPONSE_NAME();

    MCNAPI static std::string_view const& SEARCH_RANGE_NAME();

    MCNAPI static std::string_view const& TARGET_ENTITY_MEMORY_NAME();

    MCNAPI static std::string_view const& TYPE_NAME();

    MCNAPI static std::string_view const& WITHIN_RANGE_RESPONSE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
