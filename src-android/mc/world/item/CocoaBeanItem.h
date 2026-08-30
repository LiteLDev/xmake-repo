#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class Vec3;
// clang-format on

class CocoaBeanItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mAllowLegacyUseAsDye;
    // NOLINTEND

public:
    // prevent constructor by default
    CocoaBeanItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CocoaBeanItem();

    virtual bool isDye() const;

    virtual ::ItemColor getItemColor() const;

    virtual bool isValidAuxValue(int) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CocoaBeanItem(std::string const&, int, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isDye() const;

    MCNAPI ::ItemColor $getItemColor() const;

    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI ::Item& $setIconInfo(std::string const&, int);

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
