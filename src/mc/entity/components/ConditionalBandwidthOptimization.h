#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ConditionalBandwidthOptimization {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>               mMaxOptimizedDistance;
    ::ll::TypedStorage<8, 8, ulong>               mMaxDroppedTicks;
    ::ll::TypedStorage<1, 1, bool>                mUseMotionPredictionHints;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mConditions;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnka93dbc;
    ::ll::UntypedStorage<8, 8>  mUnkda7886;
    ::ll::UntypedStorage<1, 1>  mUnk640ded;
    ::ll::UntypedStorage<8, 64> mUnkf1bed1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ConditionalBandwidthOptimization& operator=(ConditionalBandwidthOptimization const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ConditionalBandwidthOptimization(ConditionalBandwidthOptimization const&);
    ConditionalBandwidthOptimization();
#endif // @header-generator platform
};
