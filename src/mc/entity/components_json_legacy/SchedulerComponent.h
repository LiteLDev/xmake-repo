#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SchedulerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCurrentEventIndex;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getCurrentEventIndex() const;

    MCNAPI void setCurrentEventIndex(int);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
