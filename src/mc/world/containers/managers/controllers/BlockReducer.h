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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 152, ::ItemStack>           mInput;
        ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mOutput;
#else // @header-generator platform
        ::ll::TypedStorage<8, 152, ::ItemStack>               mInput;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mOutput;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Reduction();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::vector<ItemStack>>> mBlockToElements;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::vector<::ItemStack>>> mBlockToElements;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockReducer();
#else // @header-generator platform
    virtual ~BlockReducer() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerBlock(::ItemStack const&, std::vector<ItemStack> const&);
#else // @header-generator platform
    virtual void registerBlock(::ItemStack const& block, ::std::vector<::ItemStack> const& elements);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockReducer();
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack> const* getReduction(::ItemStackBase const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::ItemDescriptor tryGetItemDescriptorFromKey(int blockKey) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerBlock(::ItemStack const&, std::vector<ItemStack> const&);
#else // @header-generator platform
    MCAPI void $registerBlock(::ItemStack const& block, ::std::vector<::ItemStack> const& elements);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
