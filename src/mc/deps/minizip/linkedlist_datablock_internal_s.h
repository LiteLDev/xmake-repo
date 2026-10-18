#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct linkedlist_datablock_internal_s {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::linkedlist_datablock_internal_s*> next_datablock;
    ::ll::TypedStorage<8, 8, ulong>                              avail_in_this_block;
    ::ll::TypedStorage<8, 8, ulong>                              filled_in_this_block;
    ::ll::TypedStorage<8, 8, ulong>                              unused;
    ::ll::TypedStorage<1, 4080, uchar[4080]>                     data;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>    mUnka21b4d;
    ::ll::UntypedStorage<4, 4>    mUnk61a132;
    ::ll::UntypedStorage<4, 4>    mUnk4849dd;
    ::ll::UntypedStorage<4, 4>    mUnkb4b9e7;
    ::ll::UntypedStorage<1, 4080> mUnk9e2e83;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    linkedlist_datablock_internal_s& operator=(linkedlist_datablock_internal_s const&);
    linkedlist_datablock_internal_s(linkedlist_datablock_internal_s const&);
    linkedlist_datablock_internal_s();
#endif // @header-generator platform
};
