#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { class MultiplayerServiceManager; }
// clang-format on

namespace ServerConfigurationProcessor {

struct StoreInfoDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Social::MultiplayerServiceManager&> mMultiplayerServiceManager;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreInfoDependencies& operator=(StoreInfoDependencies const&);
    StoreInfoDependencies(StoreInfoDependencies const&);
    StoreInfoDependencies();
};

} // namespace ServerConfigurationProcessor
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
