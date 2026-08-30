#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/flighting/FlightingToggleTextDisplay.h"
#include "mc/services/flighting/FlightingToggleId.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

struct FlightingToggleMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::FlightingToggleId>            mID;
    ::ll::TypedStorage<1, 2, ::FlightingToggleTextDisplay>   mTextDisplay;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Option*>> mOption;
    // NOLINTEND
};
