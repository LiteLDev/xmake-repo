#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct MallocFunctions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void* (*)(ulong, void*)>        mMalloc;
    ::ll::TypedStorage<8, 8, void (*)(void*, void*)>         mFree;
    ::ll::TypedStorage<8, 8, void* (*)(void*, ulong, void*)> mRealloc;
    ::ll::TypedStorage<8, 8, ulong (*)(void const*, void*)>  mUsableSize;
    ::ll::TypedStorage<8, 8, void*>                          mOpaque;
    // NOLINTEND
};

} // namespace Scripting::QuickJS
