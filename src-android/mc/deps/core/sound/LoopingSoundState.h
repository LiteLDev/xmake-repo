#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LoopingSoundState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> position;
    ::ll::TypedStorage<4, 4, float>                                    pitch;
    ::ll::TypedStorage<4, 4, float>                                    volume;
    // NOLINTEND

public:
    // prevent constructor by default
    LoopingSoundState& operator=(LoopingSoundState const&);
};
