#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/CompoundContainerType.h"
#include "mc/world/item/CompoundType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/actor/LabTableReactionType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ItemDescriptor;
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
struct ChemistryIngredient;
// clang-format on

class CraftableCompounds {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ItemStack>>             mComponentsToCompound;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::vector<ItemStack>>>        mCompoundToComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, LabTableReactionType>>  mComponentsToReaction;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, CompoundContainerType>> mComponentsToContainerOverride;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnke6f603;
    ::ll::UntypedStorage<8, 64> mUnk7112c4;
    ::ll::UntypedStorage<8, 64> mUnk34bcd8;
    ::ll::UntypedStorage<8, 64> mUnk938d66;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CraftableCompounds& operator=(CraftableCompounds const&);
    CraftableCompounds(CraftableCompounds const&);
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~CraftableCompounds();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _registerCompound(std::vector<ItemStack> const&, ::ItemStack const&, ::LabTableReactionType, ::CompoundContainerType);
    // clang-format on
#else // @header-generator platform
    virtual void _registerCompound(
        ::std::vector<::ItemStack> const& input,
        ::ItemStack const&                result,
        ::LabTableReactionType            reaction,
        ::CompoundContainerType           containerOverride
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftableCompounds();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _getCompoundId(std::vector<ItemStack> const&);
#else // @header-generator platform
    MCNAPI ::std::string _getCompoundId(::std::vector<::ItemStack> const& input);
#endif // @header-generator platform

    MCNAPI void _registerCompound(
#if defined(LL_PLAT_A) // @header-generator platform
        std::vector<ChemistryIngredient> const&,
        ::ItemStack const&,
        ::LabTableReactionType,
        ::CompoundContainerType
#else // @header-generator platform
        ::std::vector<::ChemistryIngredient> const& input,
        ::ItemStack const&                          result,
        ::LabTableReactionType                      reaction,
        ::CompoundContainerType                     containerOverride
#endif // @header-generator platform
    );

    MCNAPI void _registerCompound(
#if defined(LL_PLAT_A) // @header-generator platform
        std::vector<ChemistryIngredient> const&,
        ::CompoundType,
        ::LabTableReactionType,
        ::CompoundContainerType,
        int
#else // @header-generator platform
        ::std::vector<::ChemistryIngredient> const& input,
        ::CompoundType                              result,
        ::LabTableReactionType                      reaction,
        ::CompoundContainerType                     containerOverride,
        int                                         stackCount
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemStack> const* getComponents(::ItemDescriptor const&) const;
#else // @header-generator platform
    MCNAPI ::ItemStack const& getCompound(::std::vector<::ItemStack> const& components);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& getCompound(std::vector<ItemStack> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::CompoundContainerType getContainerType(::std::vector<::ItemStack> const& components);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundContainerType getContainerType(std::vector<ItemStack> const&);

    MCNAPI ::LabTableReactionType getReaction(std::vector<ItemStack> const&);
#else // @header-generator platform
    MCNAPI ::LabTableReactionType getReaction(::std::vector<::ItemStack> const& components);
#endif // @header-generator platform

    MCNAPI void registerCompounds();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_registerCompound(
#if defined(LL_PLAT_A) // @header-generator platform
        std::vector<ItemStack> const&,
        ::ItemStack const&,
        ::LabTableReactionType,
        ::CompoundContainerType
#else // @header-generator platform
        ::std::vector<::ItemStack> const& input,
        ::ItemStack const&                result,
        ::LabTableReactionType            reaction,
        ::CompoundContainerType           containerOverride
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
