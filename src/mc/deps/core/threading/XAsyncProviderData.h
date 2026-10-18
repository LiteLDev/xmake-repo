#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct XAsyncProviderData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::XAsyncBlock*> async;
    ::ll::TypedStorage<8, 8, ulong>          bufferSize;
    ::ll::TypedStorage<8, 8, void*>          buffer;
    ::ll::TypedStorage<8, 8, void*>          context;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnke9a349;
    ::ll::UntypedStorage<8, 8> mUnk5dd2e9;
    ::ll::UntypedStorage<8, 8> mUnkfd85db;
    ::ll::UntypedStorage<8, 8> mUnkfb2604;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    XAsyncProviderData& operator=(XAsyncProviderData const&);
    XAsyncProviderData(XAsyncProviderData const&);
    XAsyncProviderData();
#endif // @header-generator platform
};
