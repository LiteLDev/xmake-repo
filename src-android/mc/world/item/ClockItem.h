#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackBase;
class Mob;
struct ResolvedItemIconInfo;
// clang-format on

class ClockItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mAtlasWidth;
    ::ll::TypedStorage<4, 4, int> mAtlasHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    ClockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClockItem();

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool const) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClockItem(std::string const&, int);

    MCNAPI void setTextureDimensions(ushort, ushort);
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
    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
