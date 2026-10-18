#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RegisterDiagnosticsStatsTypes {
public:
    // prevent constructor by default
    RegisterDiagnosticsStatsTypes();
};
#else // @header-generator platform
class RegisterDiagnosticsStatsTypes {};
#endif // @header-generator platform
