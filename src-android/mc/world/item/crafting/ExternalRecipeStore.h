#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockReducer;
class ItemStack;
// clang-format on

class ExternalRecipeStore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockReducer*> mBlockReducer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerBlockReduction(::ItemStack const&, std::vector<ItemStack> const&);

    MCNAPI void setBlockReducer(::BlockReducer*);
    // NOLINTEND
};
