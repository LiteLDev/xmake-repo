#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct ProbeMetadataDeltaTriggers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mFramesDelta;
    ::ll::TypedStorage<4, 4, int>    mGameTimeDelta;
    ::ll::TypedStorage<4, 4, float>  mDistanceDelta;
    ::ll::TypedStorage<4, 4, float>  mSkyBrightnessDelta;
    ::ll::TypedStorage<4, 4, float>  mBlockBrightnessDelta;
    // NOLINTEND
};

} // namespace mce::framebuilder
