#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#else // @header-generator platform
#endif // @header-generator platform

struct DamageCondition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mDamageFilters;
    ::ll::TypedStorage<8, 24, std::string>        mCause;
    ::ll::TypedStorage<4, 4, int>                 mDamagePerTick;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk64b566;
    ::ll::UntypedStorage<8, 32> mUnka71efd;
    ::ll::UntypedStorage<4, 4>  mUnkc8edee;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DamageCondition& operator=(DamageCondition const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DamageCondition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    DamageCondition(DamageCondition const&);
    DamageCondition();
#endif // @header-generator platform
};
