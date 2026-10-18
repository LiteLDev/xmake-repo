#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/VisualTreeProxyCallbacks.h"

class VisualTreeProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    VisualTreeProxy();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/VisualTreeProxyCallbacks.h"

class VisualTreeProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::VisualTreeProxyCallbacks const> mCallbacks;
    // NOLINTEND
};
#else // @header-generator platform
class VisualTreeProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
