#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Container;
class InteractionResult;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class FireworksItem : public ::Item {
public:
    // prevent constructor by default
    FireworksItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FireworksItem();

    virtual bool isDestructive(int) const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FireworksItem(std::string const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemInstance const& initFireworksRocketItem(::ItemInstance&, std::vector<ItemInstance> const&, int);

    MCNAPI static ::ItemStack const& initFireworksRocketItem(::ItemStack&, std::vector<ItemStack> const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& TAG_EXPLOSIONS();

    MCNAPI static std::string const& TAG_E_FLIGHT();

    MCNAPI static std::string const& TAG_FIREWORKS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isDestructive(int) const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
