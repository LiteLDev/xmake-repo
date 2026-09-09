#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/AnimationRemappingInfo.h"
#include "mc/client/renderer/actor/v2/PartVisibilityBoneSlice.h"
#include "mc/client/renderer/actor/v2/PartVisibilityExpression.h"
#include "mc/client/renderer/actor/v2/SkinnedMeshRemappingData.h"

struct AnimationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                   mLargestSkeletonBoneCount;
    ::ll::TypedStorage<8, 24, std::vector<AnimationRemappingInfo>>   mPerActorRemappingInfo;
    ::ll::TypedStorage<8, 24, std::vector<SkinnedMeshRemappingData>> mRemappingData;
    ::ll::TypedStorage<8, 24, std::vector<PartVisibilityBoneSlice>>  mPartVisibilityBoneSlices;
    ::ll::TypedStorage<8, 24, std::vector<PartVisibilityExpression>> mPartVisibilityExpressions;
    ::ll::TypedStorage<8, 24, std::vector<ushort>>                   mPerRenderControllerPartVisibility;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AnimationData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
