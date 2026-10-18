#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/WorldSettingsScreenControllerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
class LevelData;
struct LevelSummary;
// clang-format on

class WorldSettingsScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettingsScreenControllerProxy();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/WorldSettingsScreenControllerProxyCallbacks.h"

class WorldSettingsScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::WorldSettingsScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND
};
#else // @header-generator platform
class WorldSettingsScreenControllerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
