#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
// clang-format on

class SharedBuffs {
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeBuff>& ABSORPTION();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeBuff>& ABSORPTION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeBuff>& FATAL_POISON();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeBuff>& FATAL_POISON();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeBuff>& FOOD_POSIONING();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeBuff>& FOOD_POSIONING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeBuff>& HARM();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeBuff>& HARM();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeBuff>& HEAL();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeBuff>& HEAL();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeBuff>& POISON();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeBuff>& POISON();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeBuff>& PUFFER_POSIONING();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeBuff>& REGENERATION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeBuff>& REGENERATION();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeBuff>& SATURATION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AttributeBuff>& SATURATION();

    MCNAPI static std::shared_ptr<AttributeBuff>& WITHER();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AttributeBuff>& WITHER();
#endif // @header-generator platform
    // NOLINTEND
};
