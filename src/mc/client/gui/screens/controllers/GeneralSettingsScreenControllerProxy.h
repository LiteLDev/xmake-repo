#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/GeneralSettingsScreenControllerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
struct ToggleChangeEventData;
// clang-format on

class GeneralSettingsScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneralSettingsScreenControllerProxy();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/GeneralSettingsScreenControllerProxyCallbacks.h"

class GeneralSettingsScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::GeneralSettingsScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND
};
#else // @header-generator platform
class GeneralSettingsScreenControllerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
