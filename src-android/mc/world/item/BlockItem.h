#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class HashedString;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Vec3;
struct Brightness;
struct ResolvedItemIconInfo;
// clang-format on

class BlockItem : public ::Item {
public:
    // prevent constructor by default
    BlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockItem();

    virtual bool isDestructive(int) const;

    virtual bool isValidAuxValue(int) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual ::Brightness getLightEmission(int) const;

    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockItem(std::string const&, int, ::HashedString const&);

    MCNAPI void _displayHeightLimitErrorMessages(::Actor&, int, bool) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::HashedString const&);
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

    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI ::Brightness $getLightEmission(int) const;

    MCNAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
