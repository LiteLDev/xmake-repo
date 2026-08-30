#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
// clang-format on

struct XAsyncProviderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::XAsyncBlock*> async;
    ::ll::TypedStorage<8, 8, ulong>          bufferSize;
    ::ll::TypedStorage<8, 8, void*>          buffer;
    ::ll::TypedStorage<8, 8, void*>          context;
    // NOLINTEND
};
