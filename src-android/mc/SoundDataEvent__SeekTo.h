#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct SeekTo {
public:
    ::ll::UntypedStorage<4, 4> mUnk5a7918;

    SeekTo& operator=(SeekTo const&);
    SeekTo(SeekTo const&);
    SeekTo();
};

} // namespace SoundDataEvent
