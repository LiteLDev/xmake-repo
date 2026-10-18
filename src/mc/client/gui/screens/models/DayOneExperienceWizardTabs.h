#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DayOneExperienceWizardTabs : int {
    Skin_Tip      = 0,
    Import_Worlds = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class DayOneExperienceWizardTabs : int {
    SkinTip      = 0,
    ImportWorlds = 1,
};
#else // @header-generator platform
enum class DayOneExperienceWizardTabs : int {};
#endif // @header-generator platform
#endif // @header-generator platform
