#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class DynamicValueComplexityConstraint
: public ::cereal::ConstraintHandle<SharedTypes::DynamicValueComplexityConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<int>> mMaxDepth;
    ::ll::TypedStorage<1, 1, bool>               mRejectNull;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DynamicValueComplexityConstraint();

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DynamicValueComplexityConstraint();

    MCNAPI ::SharedTypes::DynamicValueComplexityConstraint& maxDepth(uint);

    MCNAPI ::SharedTypes::DynamicValueComplexityConstraint& rejectNull(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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

} // namespace SharedTypes
