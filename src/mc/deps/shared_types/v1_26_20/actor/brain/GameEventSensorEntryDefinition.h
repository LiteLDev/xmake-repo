#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/WorldBlockPosition.h"
#include "mc/deps/shared_types/actor/utilities/brain/EntityRefMemory.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"
#include "mc/deps/shared_types/v1_26_20/actor/brain/GameEventType.h"
#include "mc/deps/shared_types/v1_26_20/actor/brain/SensorResponseDefinition.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct GameEventSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
#if defined(LL_PLAT_A) // @header-generator platform
      SharedTypes::v1_26_20::Brain::MemorySensors::GameEventSensorEntryDefinition> {
#else // @header-generator platform
      ::SharedTypes::v1_26_20::Brain::MemorySensors::GameEventSensorEntryDefinition> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 48> mSourceEntityMemory;
    ::ll::UntypedStorage<8, 48> mEventPositionMemory;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mSourceEntityFilters;
    ::ll::TypedStorage<4, 4, uint> mRadius;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<
            ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRefMemory>>>
        mSourceEntityMemory;
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>>
                                                                         mEventPositionMemory;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mSourceEntityFilters;
    ::ll::TypedStorage<4, 4, uint>                                       mRadius;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::Brain::MemorySensors::GameEvents::GameEventType> mEventType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>> mOnGameEventResponse;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>>
        mOnGameEventResponse;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventSensorEntryDefinition& operator=(GameEventSensorEntryDefinition const&);
    GameEventSensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameEventSensorEntryDefinition(
        ::SharedTypes::v1_26_20::Brain::MemorySensors::GameEventSensorEntryDefinition const&
    );

    MCAPI bool operator==(::SharedTypes::v1_26_20::Brain::MemorySensors::GameEventSensorEntryDefinition const&) const;

    MCAPI ~GameEventSensorEntryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_20::Brain::MemorySensors::GameEventSensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
