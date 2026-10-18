#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Webview { struct Extension; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Webview {

#if defined(LL_PLAT_A) // @header-generator platform
class PlatformArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<Webview::Extension>>> customExtensions;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformArguments& operator=(PlatformArguments const&);
    PlatformArguments(PlatformArguments const&);
    PlatformArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlatformArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class PlatformArguments {};
#endif // @header-generator platform

} // namespace Webview
