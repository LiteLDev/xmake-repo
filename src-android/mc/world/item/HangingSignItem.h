#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/SignItem.h"
#include "mc/world/level/block/SignBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class ItemStackBase;
// clang-format on

class HangingSignItem : public ::SignItem {
public:
    // prevent constructor by default
    HangingSignItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HangingSignItem();

    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    virtual ::Block const* getBlockToPlace(uchar const, ::Actor const&, ::BlockPos const) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HangingSignItem(std::string const&, int, ::SignBlock::SignType);
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

    MCNAPI ::Block const* $getBlockToPlace(uchar const, ::Actor const&, ::BlockPos const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
