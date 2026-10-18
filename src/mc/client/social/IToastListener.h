#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ToastMessage;
// clang-format on

class IToastListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void showToast(::ToastMessage, bool) = 0;

    virtual ~IToastListener() = default;

    virtual void removeToast() = 0;

    virtual void refreshToast() = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ToastMessage;
// clang-format on

class IToastListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void showToast(::ToastMessage message, bool animateIn) = 0;

    virtual void removeToast() = 0;

    virtual void refreshToast() = 0;

    virtual ~IToastListener() = default;
    // NOLINTEND
};
#else // @header-generator platform
class IToastListener {};
#endif // @header-generator platform
#endif // @header-generator platform
