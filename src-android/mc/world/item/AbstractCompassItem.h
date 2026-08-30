#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class CompassSpriteCalculator;
class ItemStack;
class ItemStackBase;
class Mob;
struct ResolvedItemIconInfo;
// clang-format on

class AbstractCompassItem : public ::Item {
public:
    // AbstractCompassItem inner types define
    using GetSpriteCalculatorFunction = ::CompassSpriteCalculator& (*)(::Mob&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mAtlasWidth;
    ::ll::TypedStorage<4, 4, int>                                    mAtlasHeight;
    ::ll::TypedStorage<8, 8, ::CompassSpriteCalculator& (*)(::Mob&)> mGetSpriteCalculator;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractCompassItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractCompassItem();

    virtual int getEnchantSlot() const;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AbstractCompassItem(std::string const&, int, ::CompassSpriteCalculator& (*)(::Mob&));

    MCNAPI void setTextureDimensions(ushort, ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::CompassSpriteCalculator& (*)(::Mob&));
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getEnchantSlot() const;

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
