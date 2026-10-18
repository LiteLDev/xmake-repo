#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Mob;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
struct VariantParameterListConst;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct VariantParameterList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor*>          mSelf;
    ::ll::TypedStorage<8, 8, ::Actor*>          mOther;
    ::ll::TypedStorage<8, 8, ::Player*>         mPlayer;
    ::ll::TypedStorage<8, 8, ::Actor*>          mTarget;
    ::ll::TypedStorage<8, 8, ::Actor*>          mParent;
    ::ll::TypedStorage<8, 8, ::Mob*>            mBaby;
    ::ll::TypedStorage<8, 8, ::BlockPos const*> mBlock;
    ::ll::TypedStorage<8, 8, ::Actor*>          mDamager;
    ::ll::TypedStorage<8, 8, ::Actor*>          mHolder;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit operator VariantParameterListConst() const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
