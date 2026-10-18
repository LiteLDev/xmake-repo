#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptLocatorBarError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLocatorBarErrorGenerator {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointAlreadyExistsError();
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointAlreadyExistsError();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointLimitExceededError(int);
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointLimitExceededError(int limit);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointNotFoundError();
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointNotFoundError();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
