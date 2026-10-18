#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class Item;
// clang-format on

struct ItemInUseComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>    mItem;
    ::ll::TypedStorage<4, 4, int> mDuration;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::WeakPtr<::Item const>> mItem;
    ::ll::TypedStorage<4, 4, int>                     mDuration;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ItemInUseComponent& operator=(ItemInUseComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
