#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct SetPitch {
public:
    ::ll::UntypedStorage<4, 4> mUnk74b2c8;

    SetPitch& operator=(SetPitch const&);
    SetPitch(SetPitch const&);
    SetPitch();
};

} // namespace SoundDataEvent
