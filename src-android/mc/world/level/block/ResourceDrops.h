#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

struct ResourceDrops {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mItems;
    ::ll::TypedStorage<4, 4, int>                     mExperienceCount;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceDrops& operator=(ResourceDrops const&);
    ResourceDrops(ResourceDrops const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ResourceDrops();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
