#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ItemStateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    ::ll::TypedStorage<8, 24, std::string>  mCollectionName;
    ::ll::TypedStorage<4, 4, int>           mCollectionIndex;
    ::ll::TypedStorage<1, 1, bool>          mMatch;
    ::ll::TypedStorage<1, 1, bool>          mIsEmptyStack;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 152> mUnke5af18;
    ::ll::UntypedStorage<8, 32>  mUnkc44bbe;
    ::ll::UntypedStorage<4, 4>   mUnk143794;
    ::ll::UntypedStorage<1, 1>   mUnk115f53;
    ::ll::UntypedStorage<1, 1>   mUnkb0fcb5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStateData& operator=(ItemStateData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ItemStateData(ItemStateData const&);
#endif // @header-generator platform
    ItemStateData();
};
