#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemInstance;
// clang-format on

struct SortItemInstanceIdAux {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator()(::ItemInstance const&, ::ItemInstance const&) const;
    // NOLINTEND
};
#else // @header-generator platform
struct SortItemInstanceIdAux {};
#endif // @header-generator platform
