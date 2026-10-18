#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/actor/brain/PoiMemory.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct PoiMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct FindNearestPoiSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
#if defined(LL_PLAT_A) // @header-generator platform
      SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestPoiSensorEntryDefinition> {
#else // @header-generator platform
      ::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestPoiSensorEntryDefinition> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>            mFoundPoiMemory;
    ::ll::TypedStorage<8, 24, std::string> mPoiName;
    ::ll::TypedStorage<4, 4, int>          mSearchRadius;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::PoiMemory>>>
                                             mFoundPoiMemory;
    ::ll::TypedStorage<8, 32, ::std::string> mPoiName;
    ::ll::TypedStorage<4, 4, int>            mSearchRadius;
    // NOLINTEND

public:
    // prevent constructor by default
    FindNearestPoiSensorEntryDefinition& operator=(FindNearestPoiSensorEntryDefinition const&);
    FindNearestPoiSensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FindNearestPoiSensorEntryDefinition(
        ::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestPoiSensorEntryDefinition const&
    );

    MCAPI bool
    operator==(::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestPoiSensorEntryDefinition const&) const;

    MCAPI ~FindNearestPoiSensorEntryDefinition();
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
    MCAPI void* $ctor(::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestPoiSensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
