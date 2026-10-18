#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
enum class ServerExitCode : int {};
#else // @header-generator platform
enum class ServerExitCode : int {
    Success                      = 0,
    PortOccupied                 = 1,
    InvalidSettings              = 2,
    MissingDependency            = 3,
    RuntimeError                 = 4,
    DocumentationGenerationError = 5,
    ScriptWatchdogTermination    = 6,
    ResourceProcessingError      = 7,
};
#endif // @header-generator platform
#endif // @header-generator platform
