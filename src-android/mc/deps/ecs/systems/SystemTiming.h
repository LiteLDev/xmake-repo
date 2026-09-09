#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

struct SystemTiming {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                mSystemName;
    ::ll::TypedStorage<8, 8, ulong>                                                       mEntityCount;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTime;
    ::ll::UntypedStorage<2, 2>                                                            mCategory;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemTiming& operator=(SystemTiming const&);
};
