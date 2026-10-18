#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/SceneStackProxyCallbacks.h"

class SceneStackProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 528> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneStackProxy();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/SceneStackProxyCallbacks.h"

class SceneStackProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 704, ::SceneStackProxyCallbacks const> mCallbacks;
    // NOLINTEND
};
#else // @header-generator platform
class SceneStackProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
