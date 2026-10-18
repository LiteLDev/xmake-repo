#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppLifecycleContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mAppliedHasGraphicsContext;
    ::ll::TypedStorage<1, 1, bool> mAppliedIsCurrentlyResumed;
    ::ll::TypedStorage<1, 1, bool> mHasGraphicsContext;
    ::ll::TypedStorage<1, 1, bool> mIsCurrentlyResumed;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk47460f;
    ::ll::UntypedStorage<1, 1> mUnke4ccab;
    ::ll::UntypedStorage<1, 1> mUnkae0bd0;
    ::ll::UntypedStorage<1, 1> mUnk1c34d5;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    // prevent constructor by default
    AppLifecycleContext& operator=(AppLifecycleContext const&);
    AppLifecycleContext(AppLifecycleContext const&);
    AppLifecycleContext();
#endif // @header-generator platform
};
