#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SneakingComponentConstants {

struct SneakingInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mHeightOffset;
    ::ll::TypedStorage<4, 4, float> mCameraOffset;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk5ce826;
    ::ll::UntypedStorage<4, 4> mUnk7e614b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SneakingInfo& operator=(SneakingInfo const&);
    SneakingInfo(SneakingInfo const&);
    SneakingInfo();
#endif // @header-generator platform
};

} // namespace SneakingComponentConstants
