#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct SeekTo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5a7918;
    // NOLINTEND

public:
    // prevent constructor by default
    SeekTo& operator=(SeekTo const&);
    SeekTo(SeekTo const&);
    SeekTo();
};

} // namespace SoundDataEvent
