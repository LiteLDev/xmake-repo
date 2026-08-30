#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
// clang-format on

class DyePowderItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ItemColor> mColor;
    // NOLINTEND

public:
    // prevent constructor by default
    DyePowderItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DyePowderItem();

    virtual bool isDye() const;

    virtual ::ItemColor getItemColor() const;

    virtual bool isValidAuxValue(int) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::Item& setIconInfo(std::string const&, int);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
