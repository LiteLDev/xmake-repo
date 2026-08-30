#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/MinSizeConstraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class SequenceContainerConstraint : public ::cereal::ConstraintHandle<cereal::SequenceContainerConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cereal::internal::MinSizeConstraint> mConstraint;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cereal::Constraint>>  mValueConstraint;
    ::ll::TypedStorage<1, 1, bool>                                  mNoDuplicates;
    // NOLINTEND

public:
    // prevent constructor by default
    SequenceContainerConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SequenceContainerConstraint();

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;

    virtual ::cereal::Constraint const* subConstraint(ulong) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::SequenceContainerConstraint& maxSize(ulong);

    MCNAPI ::cereal::SequenceContainerConstraint& minSize(ulong);

    MCNAPI ::cereal::SequenceContainerConstraint& noDuplicates();

    MCNAPI ::cereal::SequenceContainerConstraint& size(ulong);
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

    MCNAPI ::cereal::Constraint const* $subConstraint(ulong) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
