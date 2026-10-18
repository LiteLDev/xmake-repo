#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class ResetCallbackObject {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ResetCallbackObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCallbackReady;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResetCallbackObject() = default;

    virtual void resetCallback() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ResetCallbackObject {};
#endif // @header-generator platform
#endif // @header-generator platform
