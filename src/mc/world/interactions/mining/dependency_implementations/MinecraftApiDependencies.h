#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/mining/IMinecraftApiDependencies.h"
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

class MinecraftApiDependencies : public ::Interactions::Mining::IMinecraftApiDependencies {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>       mActor;
    ::ll::TypedStorage<8, 8, ::ItemStack&>   mItemStack;
    ::ll::TypedStorage<8, 8, ::Block const&> mMinedBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mMinedPos;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk97af03;
    ::ll::UntypedStorage<8, 8>  mUnk761258;
    ::ll::UntypedStorage<8, 8>  mUnk354c1f;
    ::ll::UntypedStorage<4, 12> mUnk4c1ab6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftApiDependencies& operator=(MinecraftApiDependencies const&);
    MinecraftApiDependencies(MinecraftApiDependencies const&);
    MinecraftApiDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MinecraftApiDependencies();

    virtual void finishMiningHook();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void finishMiningHook() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $finishMiningHook();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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
