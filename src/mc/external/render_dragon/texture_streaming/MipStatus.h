#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct MipStatus {
public:
    // MipStatus inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    enum class MipState : uchar {};
#endif // @header-generator platform
};

} // namespace dragon::texturestreaming
