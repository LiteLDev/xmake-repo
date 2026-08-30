#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_20::Brain::MemorySensors { struct SensorResponseProxy; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

class SensorResponseConstraint
: public ::cereal::ConstraintHandle<SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseConstraint> {
public:
    // prevent constructor by default
    SensorResponseConstraint& operator=(SensorResponseConstraint const&);
    SensorResponseConstraint(SensorResponseConstraint const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SensorResponseConstraint();

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
