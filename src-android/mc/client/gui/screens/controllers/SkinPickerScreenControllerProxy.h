#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/SkinPickerScreenControllerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
class SkinHandle;
class UIPropertyBag;
// clang-format on

class SkinPickerScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPickerScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinPickerScreenControllerProxy() = default;
    // NOLINTEND
};
