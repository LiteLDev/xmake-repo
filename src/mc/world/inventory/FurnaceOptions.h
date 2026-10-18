#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/inventory/FurnaceLayout.h"
#include "mc/world/inventory/FurnaceLeftTabIndex.h"
#else // @header-generator platform
#endif // @header-generator platform

struct FurnaceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::FurnaceLeftTabIndex> mLeftFurnaceTab;
    ::ll::TypedStorage<1, 1, bool>                  mFiltering;
    ::ll::TypedStorage<4, 4, ::FurnaceLayout>       mLayout;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk186ed2;
    ::ll::UntypedStorage<1, 1> mUnke7aa71;
    ::ll::UntypedStorage<4, 4> mUnk903218;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FurnaceOptions& operator=(FurnaceOptions const&);
    FurnaceOptions(FurnaceOptions const&);
    FurnaceOptions();
#endif // @header-generator platform
};
