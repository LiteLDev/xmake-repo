#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/CompoundContainerType.h"
#include "mc/world/item/CompoundType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Item;
class ItemDescriptor;
class ItemInstance;
class ItemStackBase;
class RecipeIngredient;
struct ResolvedItemIconInfo;
// clang-format on

class CompoundItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    CompoundItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundItem();

    virtual bool isValidAuxValue(int) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompoundItem(std::string const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string _getName(::CompoundType);

    MCNAPI static void _registerSpecialCompound(::ItemInstance const&, ::CompoundType);

    MCNAPI static ::CompoundContainerType getCompoundContainer(::ItemInstance const&);

    MCNAPI static std::string getCompoundFormula(::ItemInstance const&);

    MCNAPI static ::CompoundType getCompoundType(::ItemDescriptor const&);

    MCNAPI static ::RecipeIngredient getIngredientForCompound(::CompoundType);

    MCNAPI static ::ItemInstance getItemForCompound(::CompoundType, int);

    MCNAPI static bool isCompoundItem(::ItemStackBase const&);

    MCNAPI static void registerSpecialCompounds();

    MCNAPI static void unregisterSpecialCompounds();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<int, int>& mIdToSpecialCompound();

    MCNAPI static std::unordered_map<int, ItemInstance>& mTypeToSpecialCompound();
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

    MCNAPI ::Item& $setIconInfo(std::string const&, int);

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
