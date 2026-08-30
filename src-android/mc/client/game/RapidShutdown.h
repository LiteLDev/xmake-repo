#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
