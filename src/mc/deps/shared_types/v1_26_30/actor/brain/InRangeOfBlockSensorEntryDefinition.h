#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/WorldBlockPosition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct InRangeOfBlockSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
#if defined(LL_PLAT_A) // @header-generator platform
      SharedTypes::v1_26_30::Brain::MemorySensors::InRangeOfBlockSensorEntryDefinition> {
#else // @header-generator platform
      ::SharedTypes::v1_26_30::Brain::MemorySensors::InRangeOfBlockSensorEntryDefinition> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>            mTargetPositionMemory;
    ::ll::TypedStorage<8, 24, std::string> mInRangeEventName;
    ::ll::TypedStorage<8, 24, std::string> mOutOfRangeEventName;
    ::ll::TypedStorage<4, 4, int>          mSearchRange;
    ::ll::TypedStorage<4, 4, int>          mSearchHeight;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>>
                                             mTargetPositionMemory;
    ::ll::TypedStorage<8, 32, ::std::string> mInRangeEventName;
    ::ll::TypedStorage<8, 32, ::std::string> mOutOfRangeEventName;
    ::ll::TypedStorage<4, 4, int>            mSearchRange;
    ::ll::TypedStorage<4, 4, int>            mSearchHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    InRangeOfBlockSensorEntryDefinition& operator=(InRangeOfBlockSensorEntryDefinition const&);
    InRangeOfBlockSensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InRangeOfBlockSensorEntryDefinition(
        ::SharedTypes::v1_26_30::Brain::MemorySensors::InRangeOfBlockSensorEntryDefinition const&
    );

    MCAPI ::SharedTypes::v1_26_30::Brain::MemorySensors::InRangeOfBlockSensorEntryDefinition&
    operator=(::SharedTypes::v1_26_30::Brain::MemorySensors::InRangeOfBlockSensorEntryDefinition&&);

    MCAPI bool
    operator==(::SharedTypes::v1_26_30::Brain::MemorySensors::InRangeOfBlockSensorEntryDefinition const&) const;

    MCAPI ~InRangeOfBlockSensorEntryDefinition();
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
    MCAPI void* $ctor(::SharedTypes::v1_26_30::Brain::MemorySensors::InRangeOfBlockSensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
