#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockReducer;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ExternalRecipeStore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockReducer*> mBlockReducer;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerBlockReduction(::ItemStack const&, std::vector<ItemStack> const&);

    MCNAPI void setBlockReducer(::BlockReducer*);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
