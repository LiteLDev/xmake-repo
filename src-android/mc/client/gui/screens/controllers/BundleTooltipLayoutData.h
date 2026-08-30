#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
