#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCraftingTableComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                       mGridSize;
    ::ll::TypedStorage<8, 24, std::string>              mTableName;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mCraftingTags;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                           mGridSize;
    ::ll::TypedStorage<8, 32, ::std::string>                mTableName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mCraftingTags;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockCraftingTableComponent& operator=(BlockCraftingTableComponent const&);
    BlockCraftingTableComponent(BlockCraftingTableComponent const&);
    BlockCraftingTableComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
