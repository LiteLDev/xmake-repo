#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/MinecartType.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockDescriptor;
class BlockPos;
class BlockSource;
class Container;
class InteractionResult;
class ItemStack;
class Vec3;
// clang-format on

class MinecartItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MinecartType> mCartType;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecartItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecartItem();

    virtual bool isDestructive(int) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecartItem(std::string const&, int, ::MinecartType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::MinecartType);
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

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
