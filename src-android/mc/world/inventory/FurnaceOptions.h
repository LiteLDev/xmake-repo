#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/FurnaceLayout.h"
#include "mc/world/inventory/FurnaceLeftTabIndex.h"

struct FurnaceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::FurnaceLeftTabIndex> mLeftFurnaceTab;
    ::ll::TypedStorage<1, 1, bool>                  mFiltering;
    ::ll::TypedStorage<4, 4, ::FurnaceLayout>       mLayout;
    // NOLINTEND
};
