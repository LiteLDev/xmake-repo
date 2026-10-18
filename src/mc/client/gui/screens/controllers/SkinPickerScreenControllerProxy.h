#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/SkinPickerScreenControllerProxyCallbacks.h"

class SkinPickerScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::SkinPickerScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinPickerScreenControllerProxy() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class SkinPickerScreenControllerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
