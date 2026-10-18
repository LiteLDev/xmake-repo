#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class PackManifest;
struct ContentItem;
// clang-format on

struct ContentManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetContentItemByManifest;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManagerProxyCallbacks& operator=(ContentManagerProxyCallbacks const&);
    ContentManagerProxyCallbacks(ContentManagerProxyCallbacks const&);
    ContentManagerProxyCallbacks();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class PackManifest;
struct ContentItem;
// clang-format on

struct ContentManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::ContentItem>(::PackManifest&)>>
        mGetContentItemByManifest;
    // NOLINTEND
};
#else // @header-generator platform
struct ContentManagerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
