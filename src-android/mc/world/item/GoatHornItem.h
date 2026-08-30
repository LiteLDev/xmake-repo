#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Goat;
class HashedString;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class GoatHornItem : public ::Item {
public:
    // prevent constructor by default
    GoatHornItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GoatHornItem();

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual ::HashedString const& getCooldownCategory() const;

    virtual int getCooldownDuration() const;

    virtual bool canBeCharged() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GoatHornItem(std::string const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addGoatHornVarationSaveData(::Goat&, ::ItemStack&);
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
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI ::HashedString const& $getCooldownCategory() const;

    MCNAPI int $getCooldownDuration() const;

    MCNAPI bool $canBeCharged() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
