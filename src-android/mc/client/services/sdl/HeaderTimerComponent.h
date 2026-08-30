#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct HeaderTimerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTimerExpiredText;
    ::ll::TypedStorage<8, 24, std::string> mTimerExpires;
    ::ll::TypedStorage<8, 24, std::string> mTimerValueDisplays;
    ::ll::TypedStorage<1, 1, bool>         mHideTimerOnExpiration;
    // NOLINTEND
};

} // namespace SDL
