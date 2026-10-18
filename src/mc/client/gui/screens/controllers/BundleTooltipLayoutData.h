#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

struct BundleTooltipLayoutData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> numRows;
    ::ll::TypedStorage<4, 4, int> numCols;
    ::ll::TypedStorage<4, 4, int> numShownItemStacks;
    ::ll::TypedStorage<4, 4, int> numHiddenItemStacks;
    ::ll::TypedStorage<4, 4, int> hiddenItemsCount;
    ::ll::UntypedStorage<8, 48>   itemOrderToContainerIndexMap;
    // NOLINTEND

public:
    // prevent constructor by default
    BundleTooltipLayoutData& operator=(BundleTooltipLayoutData const&);
    BundleTooltipLayoutData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::pair<int, int> getFirstAndLastIndex() const;

    MCNAPI ~BundleTooltipLayoutData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

struct BundleTooltipLayoutData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> numRows;
    ::ll::TypedStorage<4, 4, int> numCols;
    ::ll::TypedStorage<4, 4, int> numShownItemStacks;
    ::ll::TypedStorage<4, 4, int> numHiddenItemStacks;
    ::ll::TypedStorage<4, 4, int> hiddenItemsCount;
    ::ll::TypedStorage<8, 48, ::brstd::flat_map<int, int, ::std::less<int>, ::std::vector<int>, ::std::vector<int>>>
        itemOrderToContainerIndexMap;
    // NOLINTEND
};
#else // @header-generator platform
struct BundleTooltipLayoutData {};
#endif // @header-generator platform
#endif // @header-generator platform
