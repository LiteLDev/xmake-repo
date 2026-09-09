#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/level/block/SignBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Vec3;
// clang-format on

class SignItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mConvertMap;
    ::ll::UntypedStorage<4, 4>  mType;
    // NOLINTEND

public:
    // prevent constructor by default
    SignItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignItem();

    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;

    virtual ::Block const* getBlockToPlace(uchar const, ::Actor const&, ::BlockPos const) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignItem(std::string const&, int, ::SignBlock::SignType);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool calculatePlacePos(::Actor&, uchar&, ::BlockPos&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::SignBlock::SignType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;

    MCNAPI ::Block const* $getBlockToPlace(uchar const, ::Actor const&, ::BlockPos const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
