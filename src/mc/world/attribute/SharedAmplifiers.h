#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Amplifier;
// clang-format on

class SharedAmplifiers {
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Amplifier>& ABSORPTION();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Amplifier>& ABSORPTION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Amplifier>& FATAL_POISON();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Amplifier>& FATAL_POISON();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Amplifier>& HARM();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Amplifier>& HARM();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Amplifier>& HEAL();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Amplifier>& HEAL();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Amplifier>& HUNGER_DURATION();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Amplifier>& HUNGER_DURATION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Amplifier>& HUNGER_VALUE();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Amplifier>& HUNGER_VALUE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Amplifier>& POISON();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Amplifier>& POISON();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Amplifier>& REGENERATION();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Amplifier>& REGENERATION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Amplifier>& SATURATION();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Amplifier>& SATURATION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Amplifier>& WITHER();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Amplifier>& WITHER();
#endif // @header-generator platform
    // NOLINTEND
};
