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
class AssociativeContainerConstraint : public ::cereal::ConstraintHandle<cereal::AssociativeContainerConstraint> {
#else // @header-generator platform
class AssociativeContainerConstraint : public ::cereal::ConstraintHandle<::cereal::AssociativeContainerConstraint> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::cereal::internal::MinSizeConstraint> mConstraint;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cereal::Constraint>>  mKeyConstraint;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cereal::Constraint>>  mValueConstraint;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::cereal::internal::MinSizeConstraint>    mConstraint;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::Constraint>> mKeyConstraint;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::Constraint>> mValueConstraint;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AssociativeContainerConstraint();
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
    virtual ~AssociativeContainerConstraint() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::AssociativeContainerConstraint& maxSize(ulong);

    MCNAPI ::cereal::AssociativeContainerConstraint& minSize(ulong);
#else // @header-generator platform
    MCAPI void validateValue(::entt::meta_associative_container cont, ::cereal::SerializerContext& context) const;
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
