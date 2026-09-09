#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class ItemStackBase;
// clang-format on

class BlockReducer {
public:
    // BlockReducer inner types declare
    // clang-format off
    struct Reduction;
    // clang-format on

    // BlockReducer inner types define
    struct Reduction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack>           mInput;
        ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mOutput;
        // NOLINTEND

    public:
        // prevent constructor by default
        Reduction();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::vector<ItemStack>>> mBlockToElements;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockReducer();

    virtual void registerBlock(::ItemStack const&, std::vector<ItemStack> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockReducer();

    MCNAPI std::vector<ItemStack> const* getReduction(::ItemStackBase const&) const;

    MCNAPI std::unordered_map<int, std::vector<ItemStack>> const& getReductionMap() const;

    MCNAPI ::ItemDescriptor tryGetItemDescriptorFromKey(int) const;
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
    MCNAPI void $registerBlock(::ItemStack const&, std::vector<ItemStack> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
