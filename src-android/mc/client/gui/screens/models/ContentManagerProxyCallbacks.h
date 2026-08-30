#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
