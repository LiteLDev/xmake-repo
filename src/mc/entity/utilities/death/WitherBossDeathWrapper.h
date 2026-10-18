#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ExperienceRewardComponent;
#else // @header-generator platform
#endif // @header-generator platform
class WitherBoss;
// clang-format on

class WitherBossDeathWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WitherBoss&> mWither;
    // NOLINTEND

public:
    // prevent constructor by default
    WitherBossDeathWrapper& operator=(WitherBossDeathWrapper const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WitherBossDeathWrapper(::WitherBoss&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WitherBoss&);
    // NOLINTEND
#else // @header-generator platform
    WitherBossDeathWrapper(WitherBossDeathWrapper const&);
    WitherBossDeathWrapper();
#endif // @header-generator platform
};
