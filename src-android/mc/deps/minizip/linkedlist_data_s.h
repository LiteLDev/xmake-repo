#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct linkedlist_datablock_internal_s;
// clang-format on

struct linkedlist_data_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::linkedlist_datablock_internal_s*> first_block;
    ::ll::TypedStorage<8, 8, ::linkedlist_datablock_internal_s*> last_block;
    // NOLINTEND
};
