#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::Legacy::BlockDescriptorSerializer {

class BlockDescriptorProxyConstraint
#if defined(LL_PLAT_A) // @header-generator platform
: public ::cereal::ConstraintHandle<SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxyConstraint> {};
#else // @header-generator platform
: public ::cereal::ConstraintHandle<::SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxyConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;


    // NOLINTEND
};
#endif // @header-generator platform

} // namespace SharedTypes::Legacy::BlockDescriptorSerializer
