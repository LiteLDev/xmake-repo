#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/EducationLevelSettings.h"

struct EducationSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 240, ::EducationLevelSettings> mEducationLevelSettings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 320, ::EducationLevelSettings> mEducationLevelSettings;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    EducationSettingsPacketPayload& operator=(EducationSettingsPacketPayload const&);
#else // @header-generator platform
#endif // @header-generator platform
};
