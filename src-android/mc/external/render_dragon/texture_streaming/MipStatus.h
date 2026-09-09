#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct MipStatus {
public:
    // MipStatus inner types define
    enum MipState : uchar {
        Evict  = 0,
        Upload = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::dragon::texturestreaming::MipStatus::MipState> mState;
    ::ll::TypedStorage<1, 1, bool>                                            mStateChanged;
    // NOLINTEND
};

} // namespace dragon::texturestreaming
