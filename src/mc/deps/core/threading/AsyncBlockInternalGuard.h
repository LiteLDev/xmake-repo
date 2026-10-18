#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class AsyncBlockInternalGuard {};
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
// clang-format on

class AsyncBlockInternalGuard {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2f719c;
    ::ll::UntypedStorage<8, 8> mUnk40cf49;
    ::ll::UntypedStorage<1, 1> mUnkb103d5;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncBlockInternalGuard& operator=(AsyncBlockInternalGuard const&);
    AsyncBlockInternalGuard(AsyncBlockInternalGuard const&);
    AsyncBlockInternalGuard();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncBlockInternalGuard(::XAsyncBlock* asyncBlock);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::XAsyncBlock* asyncBlock);
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
