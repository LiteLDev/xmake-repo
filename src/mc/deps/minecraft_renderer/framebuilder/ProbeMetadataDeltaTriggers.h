#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct ProbeMetadataDeltaTriggers {};
#endif // @header-generator platform

} // namespace mce::framebuilder
