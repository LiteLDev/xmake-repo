#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct SetVolume {
public:
    ::ll::UntypedStorage<4, 4> mUnkd51e17;

    SetVolume& operator=(SetVolume const&);
    SetVolume(SetVolume const&);
    SetVolume();
};

} // namespace SoundDataEvent
