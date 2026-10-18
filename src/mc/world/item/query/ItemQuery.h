#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStack;
struct ItemQueryOptions;
// clang-format on

class ItemQuery {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool matches(::ItemStack const&, ::ItemQueryOptions const&);
    // NOLINTEND
};
#else // @header-generator platform
class ItemQuery {};
#endif // @header-generator platform
