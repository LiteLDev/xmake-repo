#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class DynamicValueComplexityConstraint
#if defined(LL_PLAT_A) // @header-generator platform
: public ::cereal::ConstraintHandle<SharedTypes::DynamicValueComplexityConstraint> {
#else // @header-generator platform
: public ::cereal::ConstraintHandle<::SharedTypes::DynamicValueComplexityConstraint> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<int>> mMaxDepth;
    ::ll::TypedStorage<1, 1, bool>               mRejectNull;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mMaxDepth;
    ::ll::TypedStorage<1, 1, bool>                 mRejectNull;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
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
