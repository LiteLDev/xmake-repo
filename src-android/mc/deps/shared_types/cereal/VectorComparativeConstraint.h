#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
class Vec2;
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class VectorComparativeConstraint : public ::cereal::ConstraintHandle<SharedTypes::VectorComparativeConstraint> {
public:
    // VectorComparativeConstraint inner types define
    enum class ComparisonRequirement : int {
        NotEqual    = 0,
        LessThan    = 1,
        GreaterThan = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 8, std::optional<SharedTypes::VectorComparativeConstraint::ComparisonRequirement>> mComparison;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    VectorComparativeConstraint& operator=(VectorComparativeConstraint const&);
    VectorComparativeConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VectorComparativeConstraint();

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::VectorComparativeConstraint
        comparison(::SharedTypes::VectorComparativeConstraint::ComparisonRequirement);

    MCNAPI void validateValue(::Vec2 const&, ::cereal::SerializerContext&) const;
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
