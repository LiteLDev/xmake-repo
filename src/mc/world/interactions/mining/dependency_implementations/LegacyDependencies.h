#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/mining/ILegacyDependencies.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ItemStack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Interactions::Mining {

class LegacyDependencies : public ::Interactions::Mining::ILegacyDependencies {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>       mActor;
    ::ll::TypedStorage<8, 8, ::ItemStack&>   mItemStack;
    ::ll::TypedStorage<8, 8, ::Block const&> mMinedBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mMinedPos;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk68f03c;
    ::ll::UntypedStorage<8, 8>  mUnk4403e5;
    ::ll::UntypedStorage<8, 8>  mUnk6ae31b;
    ::ll::UntypedStorage<4, 12> mUnka24266;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyDependencies& operator=(LegacyDependencies const&);
    LegacyDependencies(LegacyDependencies const&);
    LegacyDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacyDependencies();

    virtual void hurtAndBreak(int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void hurtAndBreak(int damage) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hurtAndBreak(int);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $hurtAndBreak(int damage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Interactions::Mining
