#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct TimeMarkerData;
// clang-format on

class TimeMarker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>    mName;
    ::ll::TypedStorage<4, 4, int>                mTime;
    ::ll::TypedStorage<4, 8, std::optional<int>> mPeriod;
    // NOLINTEND

public:
    // prevent constructor by default
    TimeMarker& operator=(TimeMarker const&);
    TimeMarker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getName() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& MAX_NAME_LENGTH();
    // NOLINTEND
};
