#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/RangedWeaponItem.h"
#include "mc/world/item/ResolvedItemIconInfo.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Item;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemInstance;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CrossbowItem : public ::RangedWeaponItem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 280, ::ResolvedItemIconInfo[5]> mFrame;
#else // @header-generator platform
    ::ll::TypedStorage<8, 320, ::ResolvedItemIconInfo[5]> mFrame;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int const>                   mMaxDurability;
    ::ll::TypedStorage<4, 4, int const>                   mMaxMultiShots;
    ::ll::TypedStorage<4, 4, float const>                 mMultishotAngleDelta;
    ::ll::TypedStorage<4, 4, float const>                 mDefaultArrowPower;
    // NOLINTEND

public:
    // prevent constructor by default
    CrossbowItem();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CrossbowItem();
#else // @header-generator platform
    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxUseDuration(::ItemStack const*) const;
#else // @header-generator platform
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getEnchantSlot() const;
#else // @header-generator platform
    virtual int
    getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void releaseUsing(::ItemStack&, ::Player*, int) const;
#else // @header-generator platform
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void enchantProjectile(::ItemStackBase const&, ::Actor&) const;
#else // @header-generator platform
    virtual void playSoundIncrementally(::ItemStack const& item, ::Mob& mob) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item& setIconInfo(std::string const&, int);
#else // @header-generator platform
    virtual int getEnchantSlot() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;
#else // @header-generator platform
    virtual bool canBeCharged() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
#else // @header-generator platform
    virtual int getMaxUseDuration(::ItemStack const* instance) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeCharged() const;

    virtual void playSoundIncrementally(::ItemStack const&, ::Mob&) const;
#else // @header-generator platform
    virtual void enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CrossbowItem(std::string const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_USE_DURATION();
#else // @header-generator platform
    MCAPI CrossbowItem(::std::string const& name, int id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& name, int id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxUseDuration(::ItemStack const*) const;
#else // @header-generator platform
    MCAPI ::Item& $setIconInfo(::std::string const& name, int id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEnchantSlot() const;
#else // @header-generator platform
    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    MCAPI int
    $getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    MCAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $releaseUsing(::ItemStack&, ::Player*, int) const;
#else // @header-generator platform
    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $enchantProjectile(::ItemStackBase const&, ::Actor&) const;
#else // @header-generator platform
    MCAPI void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& $setIconInfo(std::string const&, int);
#else // @header-generator platform
    MCAPI void $playSoundIncrementally(::ItemStack const& item, ::Mob& mob) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
#else // @header-generator platform
    MCAPI int $getEnchantSlot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
#else // @header-generator platform
    MCFOLD bool $canBeCharged() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeCharged() const;
#else // @header-generator platform
    MCAPI int $getMaxUseDuration(::ItemStack const* instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playSoundIncrementally(::ItemStack const&, ::Mob&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const;
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
