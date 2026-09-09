#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/AnimationRemappingInfo.h"
#include "mc/client/renderer/actor/v2/DataDrivenRendererEntry.h"
#include "mc/client/renderer/actor/v2/PreviousTransformationData.h"

struct EntityMotionTrackingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DataDrivenRendererEntry>> mRendererEntries;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>                   mSortedActorIDs;
    ::ll::TypedStorage<8, 24, std::vector<AnimationRemappingInfo>>  mPerActorRemappingInfo;
    ::ll::UntypedStorage<8, 24>                                     mPerMeshBoneTracking;
    // NOLINTEND
};
