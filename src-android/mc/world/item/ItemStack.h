#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemStackBase.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPalette;
class CompoundTag;
class ILevel;
class InteractionResult;
class Item;
class ItemInstance;
class Level;
class Mob;
class NetworkItemStackDescriptor;
class Player;
class RecipeIngredient;
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
    virtual ~ItemStack();

    virtual void reinit(std::string_view const, int, int);

    virtual void reinit(::Block const&, int);

    virtual void reinit(::Item const&, int, int);

    virtual void setNull(std::optional<std::string>);

    virtual std::string toString() const;

    virtual std::string toDebugString() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemStack(::ItemInstance const&);

    MCNAPI explicit ItemStack(::RecipeIngredient const&);

    MCNAPI void _assignNetIdVariant(::ItemStack const&) const;

    MCNAPI bool canUseAsAttack() const;

    MCNAPI void clientInitLegacyRequestId(::TypedClientNetId<ItemStackLegacyRequestIdTag, int, 0> const&);

    MCNAPI void clientInitNetId(::TypedServerNetId<ItemStackNetIdTag, int, 0> const&);

    MCNAPI void clientInitRequestId(::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&);

    MCNAPI ::ItemStack clone() const;

    MCNAPI float getDestroySpeed(::Block const&) const;

    MCNAPI ::ItemStackNetIdVariant const& getItemStackNetIdVariant() const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemStack fromDescriptor(::NetworkItemStackDescriptor const&, ::BlockPalette&, bool);

    MCNAPI static ::ItemStack fromTag(::CompoundTag const&);

    MCNAPI static ::ItemStack fromTag(::CompoundTag const&, ::ILevel&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ItemStack const& EMPTY_ITEM();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemInstance const&);

    MCNAPI void* $ctor(::RecipeIngredient const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reinit(std::string_view const, int, int);

    MCNAPI void $reinit(::Block const&, int);

    MCNAPI void $reinit(::Item const&, int, int);

    MCNAPI void $setNull(std::optional<std::string>);

    MCNAPI std::string $toString() const;

    MCNAPI std::string $toDebugString() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
