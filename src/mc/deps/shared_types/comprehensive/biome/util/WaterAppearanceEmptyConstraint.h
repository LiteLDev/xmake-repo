#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_21_40 { struct WaterAppearanceClientBiomeJsonComponent; }
namespace cereal { class SerializerContext; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::Util {

class WaterAppearanceEmptyConstraint
#if defined(LL_PLAT_A) // @header-generator platform
: public ::cereal::ConstraintHandle<SharedTypes::Util::WaterAppearanceEmptyConstraint> {
#else // @header-generator platform
: public ::cereal::ConstraintHandle<::SharedTypes::Util::WaterAppearanceEmptyConstraint> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WaterAppearanceEmptyConstraint();

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
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

} // namespace SharedTypes::Util
