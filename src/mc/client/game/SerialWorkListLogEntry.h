#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct SerialWorkListLogEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mEventName;
    ::ll::TypedStorage<4, 4, float>        mTotalTime;
    // NOLINTEND

public:
    // prevent constructor by default
    SerialWorkListLogEntry& operator=(SerialWorkListLogEntry const&);
    SerialWorkListLogEntry(SerialWorkListLogEntry const&);
    SerialWorkListLogEntry();
};
#else // @header-generator platform
struct SerialWorkListLogEntry {};
#endif // @header-generator platform
