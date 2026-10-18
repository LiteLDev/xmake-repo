#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
// clang-format on

class MinecraftScheduler {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scheduler& client();
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI static void destroyClientSingleton();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<Scheduler>& mInstance();
#else // @header-generator platform
    MCNAPI static ::std::unique_ptr<::Scheduler>& mInstance();
#endif // @header-generator platform
    // NOLINTEND
};
