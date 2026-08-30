#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct SetPitch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk74b2c8;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPitch& operator=(SetPitch const&);
    SetPitch(SetPitch const&);
    SetPitch();
};

} // namespace SoundDataEvent
