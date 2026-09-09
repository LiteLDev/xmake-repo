#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/CompoundContainerType.h"
#include "mc/world/item/CompoundType.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/LabTableReactionType.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
struct ChemistryIngredient;
// clang-format on

class CraftableCompounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ItemStack>>             mComponentsToCompound;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::vector<ItemStack>>>        mCompoundToComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, LabTableReactionType>>  mComponentsToReaction;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, CompoundContainerType>> mComponentsToContainerOverride;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CraftableCompounds();

    virtual void _registerCompound(std::vector<ItemStack> const&, ::ItemStack const&, ::LabTableReactionType, ::CompoundContainerType);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftableCompounds();

    MCNAPI std::string _getCompoundId(std::vector<ItemStack> const&);

    MCNAPI void _registerCompound(
        std::vector<ChemistryIngredient> const&,
        ::ItemStack const&,
        ::LabTableReactionType,
        ::CompoundContainerType
    );

    MCNAPI void _registerCompound(
        std::vector<ChemistryIngredient> const&,
        ::CompoundType,
        ::LabTableReactionType,
        ::CompoundContainerType,
        int
    );

    MCNAPI std::vector<ItemStack> const* getComponents(::ItemDescriptor const&) const;

    MCNAPI ::ItemStack const& getCompound(std::vector<ItemStack> const&);

    MCNAPI ::CompoundContainerType getContainerType(std::vector<ItemStack> const&);

    MCNAPI ::LabTableReactionType getReaction(std::vector<ItemStack> const&);

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
        std::vector<ItemStack> const&,
        ::ItemStack const&,
        ::LabTableReactionType,
        ::CompoundContainerType
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
