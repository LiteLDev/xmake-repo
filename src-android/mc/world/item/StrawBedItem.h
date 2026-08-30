#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Vec3;
struct ResolvedItemIconInfo;
// clang-format on

class StrawBedItem : public ::Item {
public:
    // prevent constructor by default
    StrawBedItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StrawBedItem();

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual bool _checkUseOnPermissions(::Actor&, ::ItemStackBase&, uchar const&, ::BlockPos const&) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InteractionResult _tryUseOn(::ItemStackBase&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
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

    MCNAPI bool $_checkUseOnPermissions(::Actor&, ::ItemStackBase&, uchar const&, ::BlockPos const&) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
