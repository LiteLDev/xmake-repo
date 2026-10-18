#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
// clang-format on

class BedrockItems {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void registerItems(::ItemRegistryRef const);

    MCNAPI static void unregisterItems(::ItemRegistryRef const);
#else // @header-generator platform
    MCAPI static void registerItems(::ItemRegistryRef itemRegistry);
#endif // @header-generator platform
    // NOLINTEND
};
