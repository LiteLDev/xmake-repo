#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class AppPlatform;
class IMinecraftGame;
// clang-format on

class RapidShutdown {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _rapidShutdown(std::unique_ptr<AppPlatform>, std::unique_ptr<IMinecraftGame>);
    // NOLINTEND
};
#else // @header-generator platform
class RapidShutdown {};
#endif // @header-generator platform
