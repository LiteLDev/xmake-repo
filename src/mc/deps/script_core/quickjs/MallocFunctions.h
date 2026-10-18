#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct MallocFunctions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, void* (*)(ulong, void*)>        mMalloc;
    ::ll::TypedStorage<8, 8, void (*)(void*, void*)>         mFree;
    ::ll::TypedStorage<8, 8, void* (*)(void*, ulong, void*)> mRealloc;
    ::ll::TypedStorage<8, 8, ulong (*)(void const*, void*)>  mUsableSize;
    ::ll::TypedStorage<8, 8, void*>                          mOpaque;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk587a8f;
    ::ll::UntypedStorage<8, 8> mUnk315930;
    ::ll::UntypedStorage<8, 8> mUnk524b35;
    ::ll::UntypedStorage<8, 8> mUnk6d13c0;
    ::ll::UntypedStorage<8, 8> mUnk4cf287;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MallocFunctions& operator=(MallocFunctions const&);
    MallocFunctions(MallocFunctions const&);
    MallocFunctions();
#endif // @header-generator platform
};

} // namespace Scripting::QuickJS
