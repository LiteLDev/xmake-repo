#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryStickItem.h"
#include "mc/world/item/ItemColor.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
struct Brightness;
// clang-format on

class GlowStickItem : public ::ChemistryStickItem {
public:
    // prevent constructor by default
    GlowStickItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GlowStickItem();

    virtual bool isValidAuxValue(int) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::Brightness getLightEmission(int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GlowStickItem(std::string const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::ItemColor const[14]> COLORS();

    MCNAPI static int const& MAX_ACTIVE_TICKS();
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
    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI ::Brightness $getLightEmission(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
