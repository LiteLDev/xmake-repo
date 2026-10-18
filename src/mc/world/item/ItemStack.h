#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/ItemStackBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemUseMethod.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPalette;
class CompoundTag;
class ILevel;
class InteractionResult;
class Item;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemInstance;
class Level;
class Mob;
#else // @header-generator platform
#endif // @header-generator platform
class NetworkItemStackDescriptor;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
class RecipeIngredient;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
struct Brightness;
struct ItemUsedOnEventContext;
// clang-format on

class ItemStack : public ::ItemStackBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemStack();
#else // @header-generator platform
    virtual void reinit(::Block const& block, int count) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reinit(std::string_view const, int, int);
#else // @header-generator platform
    virtual void reinit(::Item const& item, int count, int auxValue) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reinit(::Block const&, int);
#else // @header-generator platform
    virtual void reinit(::std::string_view const name, int count, int auxValue) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reinit(::Item const&, int, int);
#else // @header-generator platform
    virtual void setNull(::std::optional<::std::string> reason) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setNull(std::optional<std::string>);
#else // @header-generator platform
    virtual ::std::string toString() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toString() const;
#else // @header-generator platform
    virtual ::std::string toDebugString() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toDebugString() const;
#else // @header-generator platform
    virtual ~ItemStack() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemStack(::ItemInstance const&);
#else // @header-generator platform
    MCAPI ItemStack();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemStack(::RecipeIngredient const&);
#else // @header-generator platform
    MCAPI ItemStack(::ItemStack const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _assignNetIdVariant(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI ::ItemStack clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canUseAsAttack() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Brightness getLightEmission() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clientInitLegacyRequestId(::TypedClientNetId<ItemStackLegacyRequestIdTag, int, 0> const&);
#else // @header-generator platform
    MCAPI ::ItemStack getStrippedNetworkItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clientInitNetId(::TypedServerNetId<ItemStackNetIdTag, int, 0> const&);
#else // @header-generator platform
    MCAPI bool matchesNetIdVariant(::ItemStack const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clientInitRequestId(::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&);
#else // @header-generator platform
    MCAPI ::ItemStack& operator=(::ItemStack const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack clone() const;
#else // @header-generator platform
    MCAPI bool sameItemAndAuxAndBlockData(::ItemStack const& otherItemStack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getDestroySpeed(::Block const&) const;
#else // @header-generator platform
    MCAPI void serverInitNetId();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetIdVariant const& getItemStackNetIdVariant() const;
#else // @header-generator platform
    MCAPI void useAsFuel();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Brightness getLightEmission() const;

    MCNAPI int getMaxUseDuration() const;

    MCNAPI ::ItemStack getStrippedNetworkItem() const;

    MCNAPI bool hasItemStackNetId() const;

    MCNAPI bool inventoryTick(::Level&, ::Actor&, int, bool);

    MCNAPI bool isBundle() const;

    MCNAPI bool matchesAndNetIdVariantMatches(::ItemStack const&) const;

    MCNAPI bool matchesNetIdVariant(::ItemStack const&) const;

    MCNAPI ::ItemStack& operator=(::ItemStack const&);

    MCNAPI void playSoundIncrementally(::Mob&) const;

    MCNAPI void releaseUsing(::Player*, int);

    MCNAPI bool sameItemAndAuxAndBlockData(::ItemStack const&) const;

    MCNAPI void serverInitNetId();

    MCNAPI ::TypedServerNetId<ItemStackNetIdTag, int, 0> const* tryGetItemStackNetId() const;

    MCNAPI ::TypedClientNetId<ItemStackRequestIdTag, int, 0> const* tryGetItemStackRequestId() const;

    MCNAPI ::ItemStack& use(::Player&);

    MCNAPI ::ItemStack& useAsAttack(::Player&, ::Vec3 const&);

    MCNAPI void useAsFuel();

    MCNAPI ::InteractionResult useOn(::Actor&, int, int, int, uchar, ::Vec3 const&, ::ItemUsedOnEventContext);

    MCNAPI ::ItemUseMethod useTimeDepleted(::Level*, ::Player*);
#else // @header-generator platform
    MCAPI ::InteractionResult useOn(
        ::Actor&                 entity,
        int                      x,
        int                      y,
        int                      z,
        uchar                    face,
        ::Vec3 const&            clickPos,
        ::ItemUsedOnEventContext itemUsedOnEventContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemStack fromDescriptor(::NetworkItemStackDescriptor const&, ::BlockPalette&, bool);
#else // @header-generator platform
    MCAPI static ::ItemStack
    fromDescriptor(::NetworkItemStackDescriptor const& descriptor, ::BlockPalette& blockPalette, bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemStack fromTag(::CompoundTag const&);
#else // @header-generator platform
    MCAPI static ::ItemStack fromTag(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemStack fromTag(::CompoundTag const&, ::ILevel&);
#else // @header-generator platform
    MCAPI static ::ItemStack fromTag(::CompoundTag const& tag, ::ILevel& level);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemStack const& EMPTY_ITEM();
#else // @header-generator platform
    MCAPI static ::ItemStack const& EMPTY_ITEM();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemInstance const&);
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::RecipeIngredient const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ItemStack const& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reinit(std::string_view const, int, int);
#else // @header-generator platform
    MCAPI void $reinit(::Block const& block, int count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reinit(::Block const&, int);
#else // @header-generator platform
    MCAPI void $reinit(::Item const& item, int count, int auxValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reinit(::Item const&, int, int);
#else // @header-generator platform
    MCAPI void $reinit(::std::string_view const name, int count, int auxValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setNull(std::optional<std::string>);
#else // @header-generator platform
    MCAPI void $setNull(::std::optional<::std::string> reason);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $toString() const;
#else // @header-generator platform
    MCAPI ::std::string $toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $toDebugString() const;
#else // @header-generator platform
    MCAPI ::std::string $toDebugString() const;


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
