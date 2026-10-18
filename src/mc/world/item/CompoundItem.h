#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/CompoundContainerType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CompoundItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CompoundItem();
#else // @header-generator platform
    virtual bool isValidAuxValue(int auxValue) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidAuxValue(int) const;
#else // @header-generator platform
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompoundItem(std::string const&, int);
#else // @header-generator platform
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string _getName(::CompoundType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string _getName(::CompoundType type);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _registerSpecialCompound(::ItemInstance const&, ::CompoundType);
#else // @header-generator platform
    MCAPI static void _registerSpecialCompound(::ItemInstance const& item, ::CompoundType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CompoundContainerType getCompoundContainer(::ItemInstance const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string getCompoundFormula(::ItemInstance const& instance);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getCompoundFormula(::ItemInstance const&);
#else // @header-generator platform
    MCAPI static ::CompoundType getCompoundType(::ItemDescriptor const& itemDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CompoundType getCompoundType(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static ::RecipeIngredient getIngredientForCompound(::CompoundType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::RecipeIngredient getIngredientForCompound(::CompoundType);
#else // @header-generator platform
    MCAPI static ::ItemInstance getItemForCompound(::CompoundType type, int stackCount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemInstance getItemForCompound(::CompoundType, int);
#else // @header-generator platform
    MCAPI static bool isCompoundItem(::ItemStackBase const& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isCompoundItem(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static void registerSpecialCompounds();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void registerSpecialCompounds();

    MCNAPI static void unregisterSpecialCompounds();
#else // @header-generator platform
    MCAPI static void unregisterSpecialCompounds();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<int, int>& mIdToSpecialCompound();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<int, int>& mIdToSpecialCompound();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::unordered_map<int, ::ItemInstance>& mTypeToSpecialCompound();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidAuxValue(int) const;
#else // @header-generator platform
    MCAPI bool $isValidAuxValue(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& $setIconInfo(std::string const&, int);
#else // @header-generator platform
    MCFOLD ::Item& $setIconInfo(::std::string const& name, int id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
#else // @header-generator platform
    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
