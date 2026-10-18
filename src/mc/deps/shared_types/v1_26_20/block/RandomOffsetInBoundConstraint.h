#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class ComponentStorage; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_20::BlockDefinition {

class RandomOffsetInBoundConstraint
#if defined(LL_PLAT_A) // @header-generator platform
: public ::cereal::ConstraintHandle<SharedTypes::v1_26_20::BlockDefinition::RandomOffsetInBoundConstraint> {};
#else // @header-generator platform
: public ::cereal::ConstraintHandle<::SharedTypes::v1_26_20::BlockDefinition::RandomOffsetInBoundConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void validateValue(::cereal::ComponentStorage const& components, ::cereal::SerializerContext& context);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& ERROR_DESCRIPTION();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;


    // NOLINTEND
};
#endif // @header-generator platform

} // namespace SharedTypes::v1_26_20::BlockDefinition
