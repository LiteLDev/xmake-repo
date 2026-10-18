#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/network/packet/MaterialReducerEntryOutput.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct MaterialReducerEntryOutput;
// clang-format on
#endif // @header-generator platform

struct MaterialReducerDataEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                      fromItemKey;
    ::ll::TypedStorage<8, 24, std::vector<MaterialReducerEntryOutput>> toItemIdsAndCounts;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                          fromItemKey;
    ::ll::TypedStorage<8, 24, ::std::vector<::MaterialReducerEntryOutput>> toItemIdsAndCounts;
#endif // @header-generator platform
    // NOLINTEND
};
