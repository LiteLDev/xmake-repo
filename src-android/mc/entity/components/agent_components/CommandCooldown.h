#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class CommandCooldown {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDelay;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandCooldown();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CommandCooldown(float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float);
    // NOLINTEND
};

} // namespace AgentComponents
