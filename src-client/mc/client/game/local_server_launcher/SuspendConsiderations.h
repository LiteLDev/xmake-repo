#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

namespace LocalServerLauncher::Impl {

struct SuspendConsiderations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16> mIsEduMode;
    ::ll::UntypedStorage<8, 64> mIsInEduMultiplayerSession;
    // NOLINTEND
};

} // namespace LocalServerLauncher::Impl
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
