#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/world/item/Item.h"

struct ItemQueryOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mItemTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemQueryOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemQueryOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
