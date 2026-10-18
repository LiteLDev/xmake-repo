#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_26_20::Brain::MemorySensors { struct SensorResponseProxy; }
namespace cereal { class SerializerContext; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

class SensorResponseConstraint
#if defined(LL_PLAT_A) // @header-generator platform
: public ::cereal::ConstraintHandle<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseConstraint> {
public:
    // prevent constructor by default
    SensorResponseConstraint& operator=(SensorResponseConstraint const&);
    SensorResponseConstraint(SensorResponseConstraint const&);

#else // @header-generator platform
: public ::cereal::ConstraintHandle<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseConstraint> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SensorResponseConstraint();

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea contextArea) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea contextArea) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
