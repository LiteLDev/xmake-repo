#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryStickItem.h"
#include "mc/world/item/CompoundType.h"
#include "mc/world/item/ItemColor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
struct Brightness;
struct ResolvedItemIconInfo;
namespace mce { class Color; }
// clang-format on

class SparklerItem : public ::ChemistryStickItem {
public:
    // SparklerItem inner types declare
    // clang-format off
    struct ColorInfo;
    // clang-format on

    // SparklerItem inner types define
    struct ColorInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::ItemColor>    mDyeId;
        ::ll::TypedStorage<1, 1, ::CompoundType> mColorCompound;
        ::ll::TypedStorage<4, 4, int>            mVariantIndex;
        ::ll::TypedStorage<4, 4, int>            mRGB;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    SparklerItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SparklerItem();

    virtual bool isHandEquipped() const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual ::Brightness getLightEmission(int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SparklerItem(std::string const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::Color getColor(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::SparklerItem::ColorInfo const[5]> COLORS();

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
    MCNAPI bool $isHandEquipped() const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    MCNAPI ::Item& $setIconInfo(std::string const&, int);

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI ::Brightness $getLightEmission(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
