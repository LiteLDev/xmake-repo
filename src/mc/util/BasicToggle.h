#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BasicToggle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mIsOn;
    ::ll::TypedStorage<1, 1, bool> mStateChanged;
    ::ll::TypedStorage<1, 1, bool> mFirstStateChange;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk7d5764;
    ::ll::UntypedStorage<1, 1> mUnkaa1468;
    ::ll::UntypedStorage<1, 1> mUnkad18a3;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BasicToggle(bool);

    MCNAPI bool getStateChange();

    MCNAPI bool peek() const;

    MCNAPI void setIsOn(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    BasicToggle& operator=(BasicToggle const&);
    BasicToggle(BasicToggle const&);
    BasicToggle();
#endif // @header-generator platform
};
