#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct SetVolume {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd51e17;
    // NOLINTEND

public:
    // prevent constructor by default
    SetVolume& operator=(SetVolume const&);
    SetVolume(SetVolume const&);
    SetVolume();
};

} // namespace SoundDataEvent
