#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct linkedlist_datablock_internal_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::linkedlist_datablock_internal_s*> next_datablock;
    ::ll::TypedStorage<8, 8, ulong>                              avail_in_this_block;
    ::ll::TypedStorage<8, 8, ulong>                              filled_in_this_block;
    ::ll::TypedStorage<8, 8, ulong>                              unused;
    ::ll::TypedStorage<1, 4080, uchar[4080]>                     data;
    // NOLINTEND
};
