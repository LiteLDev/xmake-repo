#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class AppConfigs;
struct AppConfigsDependencies;
// clang-format on

class AppConfigsFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<AppConfigs> createAppConfigs(::AppConfigsDependencies&&);
    // NOLINTEND
};
#else // @header-generator platform
class AppConfigsFactory {};
#endif // @header-generator platform
