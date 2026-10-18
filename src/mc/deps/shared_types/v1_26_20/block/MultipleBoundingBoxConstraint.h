#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/cereal/ContextArea.h"
#endif // @header-generator platform
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_20::BlockDefinition { struct BoundingBoxData; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_20::BlockDefinition {

class MultipleBoundingBoxConstraint
#if defined(LL_PLAT_A) // @header-generator platform
: public ::cereal::ConstraintHandle<SharedTypes::v1_26_20::BlockDefinition::MultipleBoundingBoxConstraint> {
#else // @header-generator platform
: public ::cereal::ConstraintHandle<::SharedTypes::v1_26_20::BlockDefinition::MultipleBoundingBoxConstraint> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mMinBounds;
    ::ll::TypedStorage<4, 12, ::Vec3> mMaxBounds;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void validateValue(
        ::std::vector<::SharedTypes::v1_26_20::BlockDefinition::BoundingBoxData> const& boundingBoxDataVector,
        ::cereal::SerializerContext&                                                    context
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& INVALID_BOX_DESCRIPTION();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;


    // NOLINTEND
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
