#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppLifecycleContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAppliedHasGraphicsContext;
    ::ll::TypedStorage<1, 1, bool> mAppliedIsCurrentlyResumed;
    ::ll::TypedStorage<1, 1, bool> mHasGraphicsContext;
    ::ll::TypedStorage<1, 1, bool> mIsCurrentlyResumed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AppLifecycleContext();

    MCNAPI void applyNewState();

    MCNAPI bool canRender() const;

    MCNAPI void setFocus(bool const);

    MCNAPI void setHasGraphicsContext(bool const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
