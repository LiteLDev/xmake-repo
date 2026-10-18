#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackTokenCancelState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mCanceled;
#else // @header-generator platform
    std::atomic<bool> mCanceled;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CallbackTokenCancelState();

    MCNAPI void cancel();

    MCNAPI bool wasCanceled() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    void cancel() { mCanceled = true; }
    bool wasCanceled() const { return mCanceled; }
#endif // @header-generator platform
};
