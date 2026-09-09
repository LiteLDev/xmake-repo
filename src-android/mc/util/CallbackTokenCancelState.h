#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackTokenCancelState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mCanceled;
    // NOLINTEND

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
};
