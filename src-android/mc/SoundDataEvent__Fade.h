#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct Fade {
public:
    ::ll::UntypedStorage<4, 4> mUnk1cffff;
    ::ll::UntypedStorage<4, 4> mUnka52e01;

    Fade& operator=(Fade const&);
    Fade(Fade const&);
    Fade();
};

} // namespace SoundDataEvent
