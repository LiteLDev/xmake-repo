#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::Spawn {

struct Herd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mMin;
    ::ll::TypedStorage<4, 4, int>          mMax;
    ::ll::TypedStorage<4, 4, int>          mInitEventCount;
    ::ll::TypedStorage<4, 4, int>          mEventSkipCount;
    ::ll::TypedStorage<8, 24, std::string> mInitialEvent;
    ::ll::TypedStorage<8, 24, std::string> mEvent;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
