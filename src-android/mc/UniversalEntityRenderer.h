#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/EntityMotionTrackingData.h"
#include "mc/RenderRequest.h"
#include "mc/client/renderer/actor/v2/PreviousTransformationData.h"
#include "mc/client/renderer/shared/FinalRenderingData.h"
#include "mc/deps/core/memory/LinearAllocator.h"

// auto generated forward declare list
// clang-format off
class Matrix;
// clang-format on

class UniversalEntityRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<RenderRequest>>    mPendingRequests;
    ::ll::TypedStorage<8, 336, ::FinalRenderingData>         mStorage;
    ::ll::UntypedStorage<8, 16>                              mBoneTransformAllocator;
    ::ll::TypedStorage<8, 96, ::EntityMotionTrackingData>    mCurrentFrameTracking;
    ::ll::TypedStorage<8, 144, ::PreviousTransformationData> mPreviousTransformationData;
    // NOLINTEND
};
