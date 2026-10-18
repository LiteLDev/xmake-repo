#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class EduControlPanelUpdateType : ushort {
#else // @header-generator platform
enum class EduControlPanelUpdateType : short {
#endif // @header-generator platform
    Unknown              = 0,
    ManualActivation     = 1,
    RoleActivation       = 2,
    SavedStateActivation = 3,
    FailedActivation     = 4,
    Deactivation         = 5,
};
