#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IContentManager;
class IContentManagerContext;
struct ContentItem;
// clang-format on

class ContentManagerContextCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<IContentManagerContext*>> mContexts;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IContentManagerContext;
// clang-format on

class ContentManagerContextCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::IContentManagerContext*>> mContexts;
    // NOLINTEND
};
#else // @header-generator platform
class ContentManagerContextCollection {};
#endif // @header-generator platform
#endif // @header-generator platform
