#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/cereal/Constraint.h"
#endif // @header-generator platform
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/MinSizeConstraint.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { class Constraint; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

#if defined(LL_PLAT_A) // @header-generator platform
class SequenceContainerConstraint : public ::cereal::ConstraintHandle<cereal::SequenceContainerConstraint> {
#else // @header-generator platform
class SequenceContainerConstraint : public ::cereal::ConstraintHandle<::cereal::SequenceContainerConstraint> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::cereal::internal::MinSizeConstraint> mConstraint;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cereal::Constraint>>  mValueConstraint;
    ::ll::TypedStorage<1, 1, bool>                                  mNoDuplicates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::cereal::internal::MinSizeConstraint>    mConstraint;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::Constraint>> mValueConstraint;
    ::ll::TypedStorage<1, 1, bool>                                     mNoDuplicates;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SequenceContainerConstraint();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SequenceContainerConstraint();
#else // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea req) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
#else // @header-generator platform
    virtual ::cereal::Constraint const* subConstraint(uint64 index) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::Constraint const* subConstraint(ulong) const;
#else // @header-generator platform
    virtual ~SequenceContainerConstraint() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::SequenceContainerConstraint& maxSize(ulong);

    MCNAPI ::cereal::SequenceContainerConstraint& minSize(ulong);

    MCNAPI ::cereal::SequenceContainerConstraint& noDuplicates();

    MCNAPI ::cereal::SequenceContainerConstraint& size(ulong);
#else // @header-generator platform
    MCAPI void validateValue(::entt::meta_sequence_container cont, ::cereal::SerializerContext& context) const;
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;
#else // @header-generator platform
    MCAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea req) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::Constraint const* $subConstraint(ulong) const;
#else // @header-generator platform
    MCAPI ::cereal::Constraint const* $subConstraint(uint64 index) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
