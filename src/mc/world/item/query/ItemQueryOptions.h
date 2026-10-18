#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/Item.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class Item;
// clang-format on
#endif // @header-generator platform

struct ItemQueryOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakPtr<::Item const>>> mItemTypes;
#endif // @header-generator platform
    // NOLINTEND
};
