#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct ConnectionErrorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> hasLearnMoreLink;
    ::ll::TypedStorage<1, 1, bool> showReconnectButton;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ConnectionErrorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> hasLearnMoreLink;
    ::ll::TypedStorage<1, 1, bool> showReconnectButton;
    // NOLINTEND
};
#else // @header-generator platform
struct ConnectionErrorInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
