#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TextureShift {

struct CollectionState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              currStepName;
    ::ll::TypedStorage<8, 24, std::string>              nextStepName;
    ::ll::TypedStorage<8, 8, ulong>                     currShiftLengthInTicks;
    ::ll::TypedStorage<8, 8, ulong>                     totalShiftLengthInTicks;
    ::ll::TypedStorage<4, 4, float>                     shiftProgress;
    ::ll::TypedStorage<1, 1, bool>                      enabled;
    ::ll::TypedStorage<1, 1, bool>                      pendingUpdates;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> allSteps;
    // NOLINTEND
};

} // namespace TextureShift
