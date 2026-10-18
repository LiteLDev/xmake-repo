#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

struct AsyncProgressCancelInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                      mCancelLabel;
    ::ll::TypedStorage<8, 48, std::function<void()>> mCancelCallback;
    // NOLINTEND
};

} // namespace Settings
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
