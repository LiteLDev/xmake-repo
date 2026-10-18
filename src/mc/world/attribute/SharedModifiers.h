#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AttributeModifier;
// clang-format on

class SharedModifiers {
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeModifier>& DAMAGE_BOOST();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeModifier>& DAMAGE_BOOST();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeModifier>& HEALTH_BOOST();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeModifier>& HEALTH_BOOST();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeModifier>& MOVEMENT_SLOWDOWN();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeModifier>& MOVEMENT_SLOWDOWN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeModifier>& MOVEMENT_SPEED();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeModifier>& MOVEMENT_SPEED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeModifier>& SPRINTING_BOOST();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeModifier>& SPRINTING_BOOST();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeModifier>& WEAKNESS();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeModifier>& WEAKNESS();
#endif // @header-generator platform
    // NOLINTEND
};
