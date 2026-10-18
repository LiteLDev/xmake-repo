#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/EducationLevelSettings.h"

class EducationSettingsManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 248, std::optional<EducationLevelSettings>> mEducationLevelSettings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 328, ::std::optional<::EducationLevelSettings>> mEducationLevelSettings;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setEducationLevelSettings(::EducationLevelSettings);
#else // @header-generator platform
    MCAPI void setEducationLevelSettings(::EducationLevelSettings settings);
#endif // @header-generator platform
    // NOLINTEND
};
