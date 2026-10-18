#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct FlushedTransactions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mCount;
    ::ll::UntypedStorage<8, 24>     mDeferredDebugUpdates;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkc279ee;
    ::ll::UntypedStorage<8, 24> mUnkf602f1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FlushedTransactions& operator=(FlushedTransactions const&);
    FlushedTransactions(FlushedTransactions const&);
    FlushedTransactions();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FlushedTransactions(ulong, std::vector<std::unique_ptr<mce::IDeferredDebugUpdate>>&&);

    MCNAPI ulong flushDeferredDebugUpdates();

    MCNAPI ~FlushedTransactions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ulong, std::vector<std::unique_ptr<mce::IDeferredDebugUpdate>>&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~FlushedTransactions();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace mce
