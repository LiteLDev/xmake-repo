#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
class BlockSource;
class Container;
class InteractionResult;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
class Vec3;
// clang-format on

class BrushItem : public ::Item {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BrushItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BrushItem();
#else // @header-generator platform
    virtual int getEnchantSlot() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getEnchantSlot() const;
#else // @header-generator platform
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    virtual bool useInterruptedByAttacking() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useInterruptedByAttacking() const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BrushItem(std::string const&, short);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, short);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::InteractionResult
    _useOn(::ItemStack& item, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEnchantSlot() const;
#else // @header-generator platform
    MCFOLD int $getEnchantSlot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    MCFOLD void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    MCFOLD bool $useInterruptedByAttacking() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useInterruptedByAttacking() const;
#else // @header-generator platform
    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
#else // @header-generator platform
    MCAPI ::InteractionResult
    $_useOn(::ItemStack& item, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
