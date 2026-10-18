#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentManagerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
struct ContentItem;
// clang-format on

class ContentManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManagerProxy();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentManagerProxyCallbacks.h"

class ContentManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ContentManagerProxyCallbacks> mCallbacks;
    // NOLINTEND
};
#else // @header-generator platform
class ContentManagerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
