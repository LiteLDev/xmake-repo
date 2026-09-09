#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExperienceRewardComponent;
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
};
