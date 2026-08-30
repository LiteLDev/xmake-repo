#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
