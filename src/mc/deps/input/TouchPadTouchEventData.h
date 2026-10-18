#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/input/enums/TouchPadTouchPointState.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/input/enums/TouchPadTouchPointState.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

struct TouchPadTouchEventData {
public:
    // TouchPadTouchEventData inner types declare
    // clang-format off
    struct TouchPoint;
    struct Resolution;
    // clang-format on

    // TouchPadTouchEventData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct TouchPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                       mId;
        ::ll::TypedStorage<4, 4, float>                     mX;
        ::ll::TypedStorage<4, 4, float>                     mY;
        ::ll::TypedStorage<4, 4, ::TouchPadTouchPointState> mState;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TouchPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                       mId;
        ::ll::TypedStorage<4, 4, float>                     mX;
        ::ll::TypedStorage<4, 4, float>                     mY;
        ::ll::TypedStorage<4, 4, ::TouchPadTouchPointState> mState;
        // NOLINTEND
    };
#else // @header-generator platform
    struct TouchPoint {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct Resolution {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mWidth;
        ::ll::TypedStorage<4, 4, float> mHeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                      mTouchCount;
    ::ll::TypedStorage<4, 32, ::TouchPadTouchEventData::TouchPoint[2]> mTouchPoints;
    ::ll::TypedStorage<4, 8, ::TouchPadTouchEventData::Resolution>     mResolution;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct Resolution {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mWidth;
        ::ll::TypedStorage<4, 4, float> mHeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                      mTouchCount;
    ::ll::TypedStorage<4, 32, ::TouchPadTouchEventData::TouchPoint[2]> mTouchPoints;
    ::ll::TypedStorage<4, 8, ::TouchPadTouchEventData::Resolution>     mResolution;
    // NOLINTEND
#else // @header-generator platform
    struct Resolution {};
#endif // @header-generator platform
#endif // @header-generator platform
};
