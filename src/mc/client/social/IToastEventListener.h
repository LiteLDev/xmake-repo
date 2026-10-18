#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ToastMessage;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ToastMessage;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class IToastEventListener {
public:
    // IToastEventListener inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ToastEventType : int {
        ShowToast   = 0,
        RemoveToast = 1,
        ReportClick = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void handleToastEvent(::IToastEventListener::ToastEventType const, ::ToastMessage const) = 0;

    virtual ~IToastEventListener() = default;
    // NOLINTEND
#else // @header-generator platform
    enum class ToastEventType : int {};
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void handleToastEvent(::IToastEventListener::ToastEventType const eventType, ::ToastMessage const msg) = 0;

    virtual ~IToastEventListener() = default;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
