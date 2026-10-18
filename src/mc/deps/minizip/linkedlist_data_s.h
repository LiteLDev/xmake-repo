#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct linkedlist_datablock_internal_s;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct linkedlist_data_s {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::linkedlist_datablock_internal_s*> first_block;
    ::ll::TypedStorage<8, 8, ::linkedlist_datablock_internal_s*> last_block;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk4a9ca0;
    ::ll::UntypedStorage<8, 8> mUnkc4813a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    linkedlist_data_s& operator=(linkedlist_data_s const&);
    linkedlist_data_s(linkedlist_data_s const&);
    linkedlist_data_s();
#endif // @header-generator platform
};
