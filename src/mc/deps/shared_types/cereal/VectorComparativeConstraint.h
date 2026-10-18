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

#if defined(LL_PLAT_A) // @header-generator platform
class VectorComparativeConstraint : public ::cereal::ConstraintHandle<SharedTypes::VectorComparativeConstraint> {
#else // @header-generator platform
class VectorComparativeConstraint : public ::cereal::ConstraintHandle<::SharedTypes::VectorComparativeConstraint> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 8, std::optional<SharedTypes::VectorComparativeConstraint::ComparisonRequirement>> mComparison;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::VectorComparativeConstraint::ComparisonRequirement>>
        mComparison;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    VectorComparativeConstraint& operator=(VectorComparativeConstraint const&);
    VectorComparativeConstraint();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VectorComparativeConstraint();

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
#else // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::VectorComparativeConstraint
        comparison(::SharedTypes::VectorComparativeConstraint::ComparisonRequirement);

    MCNAPI void validateValue(::Vec2 const&, ::cereal::SerializerContext&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void validateValue(::Vec2 const& vec, ::cereal::SerializerContext& context) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;
#else // @header-generator platform
    MCAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
