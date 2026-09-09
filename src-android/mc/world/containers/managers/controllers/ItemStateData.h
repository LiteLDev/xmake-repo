#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

struct ItemStateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    ::ll::TypedStorage<8, 24, std::string>  mCollectionName;
    ::ll::TypedStorage<4, 4, int>           mCollectionIndex;
    ::ll::TypedStorage<1, 1, bool>          mMatch;
    ::ll::TypedStorage<1, 1, bool>          mIsEmptyStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStateData& operator=(ItemStateData const&);
    ItemStateData();
};
