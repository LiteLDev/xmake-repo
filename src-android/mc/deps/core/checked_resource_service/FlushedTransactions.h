#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct FlushedTransactions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mCount;
    ::ll::UntypedStorage<8, 24>     mDeferredDebugUpdates;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlushedTransactions(ulong, std::vector<std::unique_ptr<mce::IDeferredDebugUpdate>>&&);

    MCNAPI ulong flushDeferredDebugUpdates();

    MCNAPI ~FlushedTransactions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ulong, std::vector<std::unique_ptr<mce::IDeferredDebugUpdate>>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
