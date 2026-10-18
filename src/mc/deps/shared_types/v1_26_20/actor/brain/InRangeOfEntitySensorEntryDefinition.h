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
#if defined(LL_PLAT_A) // @header-generator platform
      SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition> {
#else // @header-generator platform
      ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 40> mTargetEntityMemory;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mEnteredRangeResponse;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mExitedRangeResponse;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mWithinRangeResponse;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mOutOfRangeResponse;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRefMemory>>
        mTargetEntityMemory;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>>
        mEnteredRangeResponse;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>>
        mExitedRangeResponse;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>>
        mWithinRangeResponse;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>>
                                      mOutOfRangeResponse;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3> mSearchRange;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    InRangeOfEntitySensorEntryDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InRangeOfEntitySensorEntryDefinition(
#else // @header-generator platform
    MCAPI InRangeOfEntitySensorEntryDefinition(
#endif // @header-generator platform
        ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition&
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition&
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
#else // @header-generator platform
    MCAPI bool
#endif // @header-generator platform
    operator==(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~InRangeOfEntitySensorEntryDefinition();
#else // @header-generator platform
    MCAPI ~InRangeOfEntitySensorEntryDefinition();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& ENTERED_RANGE_RESPONSE_NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& ENTERED_RANGE_RESPONSE_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& EXITED_RANGE_RESPONSE_NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& EXITED_RANGE_RESPONSE_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& OUT_OF_RANGE_RESPONSE_NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& OUT_OF_RANGE_RESPONSE_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& SEARCH_RANGE_NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& SEARCH_RANGE_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& TARGET_ENTITY_MEMORY_NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TARGET_ENTITY_MEMORY_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& TYPE_NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TYPE_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& WITHIN_RANGE_RESPONSE_NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& WITHIN_RANGE_RESPONSE_NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
