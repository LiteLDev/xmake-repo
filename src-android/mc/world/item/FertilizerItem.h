#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Container;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class RenderParams;
class Vec3;
// clang-format on

class FertilizerItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::FertilizerType> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    FertilizerItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FertilizerItem();

    virtual void executeEvent(::ItemStackBase&, std::string const&, ::RenderParams&) const;

    virtual bool isFertilizer() const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FertilizerItem(std::string const&, int, ::FertilizerType);

    MCNAPI ::FertilizerType getFertilizerType() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::FertilizerType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $executeEvent(::ItemStackBase&, std::string const&, ::RenderParams&) const;

    MCNAPI bool $isFertilizer() const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
