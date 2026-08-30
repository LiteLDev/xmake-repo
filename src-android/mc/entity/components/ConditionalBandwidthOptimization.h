#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"

struct ConditionalBandwidthOptimization {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>               mMaxOptimizedDistance;
    ::ll::TypedStorage<8, 8, ulong>               mMaxDroppedTicks;
    ::ll::TypedStorage<1, 1, bool>                mUseMotionPredictionHints;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mConditions;
    // NOLINTEND

public:
    // prevent constructor by default
    ConditionalBandwidthOptimization& operator=(ConditionalBandwidthOptimization const&);
};
