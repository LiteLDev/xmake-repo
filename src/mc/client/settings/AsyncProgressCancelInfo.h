#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

#if defined(LL_PLAT_C) // @header-generator platform
struct AsyncProgressCancelInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mCancelLabel;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mCancelCallback;
    // NOLINTEND
};
#else // @header-generator platform
struct AsyncProgressCancelInfo {};
#endif // @header-generator platform

} // namespace Settings
#endif // @header-generator platform
