#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
