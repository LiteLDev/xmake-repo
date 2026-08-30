#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/EducationLevelSettings.h"

class EducationSettingsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 248, std::optional<EducationLevelSettings>> mEducationLevelSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setEducationLevelSettings(::EducationLevelSettings);
    // NOLINTEND
};
