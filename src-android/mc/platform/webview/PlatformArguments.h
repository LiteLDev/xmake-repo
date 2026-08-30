#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Webview { struct Extension; }
// clang-format on

namespace Webview {

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

} // namespace Webview
