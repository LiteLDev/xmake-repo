#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/LoadingScreenScheduleData.h"

struct SchedulePlayerLoadingScreenComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<LoadingScreenScheduleData>> mSchedule;
    // NOLINTEND

public:
    // prevent constructor by default
    SchedulePlayerLoadingScreenComponent& operator=(SchedulePlayerLoadingScreenComponent const&);
};
