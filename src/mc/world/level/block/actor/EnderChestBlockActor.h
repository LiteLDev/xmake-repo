#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ItemStack;
class Player;
// clang-format on

class EnderChestBlockActor : public ::ChestBlockActor {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    EnderChestBlockActor();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EnderChestBlockActor();
#else // @header-generator platform
    virtual ~EnderChestBlockActor() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openBy(::Player&);
#else // @header-generator platform
    virtual void openBy(::Player& p) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPushInItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    virtual bool canPushInItem(int, int, ::ItemStack const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<EnderChestBlockActor> createEnderChestBlockEntity(::BlockPos const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& ITEMS_SIZE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::EnderChestBlockActor> createEnderChestBlockEntity(::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $openBy(::Player&);
#else // @header-generator platform
    MCAPI void $openBy(::Player& p);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    MCFOLD bool $canPushInItem(int, int, ::ItemStack const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    MCFOLD bool $canPullOutItem(int, int, ::ItemStack const&) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

#endif // @header-generator platform
    MCNAPI static void** $vftable();
    // NOLINTEND
};
