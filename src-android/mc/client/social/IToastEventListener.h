#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ToastMessage;
// clang-format on

class IToastEventListener {
public:
    // IToastEventListener inner types define
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
};
