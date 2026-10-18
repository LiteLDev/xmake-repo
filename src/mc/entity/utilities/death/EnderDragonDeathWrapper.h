#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class EnderDragon;
class Vec3;
struct BossComponent;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class EnderDragonDeathWrapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::EnderDragon&> mDragon;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf9f94a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EnderDragonDeathWrapper& operator=(EnderDragonDeathWrapper const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EnderDragonDeathWrapper(::EnderDragon&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EnderDragon&);
    // NOLINTEND
#else // @header-generator platform
    EnderDragonDeathWrapper(EnderDragonDeathWrapper const&);
    EnderDragonDeathWrapper();
#endif // @header-generator platform
};
