#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/LoadingScreenScheduleData.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct LoadingScreenScheduleData;
// clang-format on
#endif // @header-generator platform

struct SchedulePlayerLoadingScreenComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<LoadingScreenScheduleData>> mSchedule;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::LoadingScreenScheduleData>> mSchedule;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SchedulePlayerLoadingScreenComponent& operator=(SchedulePlayerLoadingScreenComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
