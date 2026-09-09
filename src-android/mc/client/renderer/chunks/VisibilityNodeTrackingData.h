#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/VisibilityNode.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/SubChunkPos.h"

struct VisibilityNodeTrackingData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // VisibilityNodeTrackingData inner types declare
    // clang-format off
    struct VisibilityNodeData;
    // clang-format on

    // VisibilityNodeTrackingData inner types define
    enum VisibiltiyNodeAlgorithmToUse : uchar {
        Default          = 0,
        ForceFloodFill   = 1,
        ForceGroundTruth = 2,
        Invalid          = 3,
    };

    struct VisibilityNodeData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mRebuildTime;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mGroundTruthRebuildTime;
        ::ll::TypedStorage<1, 7, std::optional<VisibilityNode>>                               mVisibilityNode;
        ::ll::TypedStorage<1, 7, std::optional<VisibilityNode>> mGroundTruthVisibilityNode;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 12, ::SubChunkPos> mRenderChunkToTrack;
    ::ll::TypedStorage<1, 1, bool> mCollectData;
    ::ll::TypedStorage<1, 1, bool> mTrackAllRenderChunks;
    ::ll::TypedStorage<1, 1, bool> mRebuildRenderChunkGroundTruthMatrix;
    ::ll::TypedStorage<1, 1, bool> mRebuildRenderChunkVisibilityNode;
    ::ll::TypedStorage<1, 1, bool> mRebuildAllRenderChunks;
    ::ll::TypedStorage<1, 1, bool> mCollectVisibilityNodePosition;
    ::ll::TypedStorage<1, 1, ::VisibilityNodeTrackingData::VisibiltiyNodeAlgorithmToUse> mVisibilityNodeAlgorithmTypeOverride;
    ::ll::TypedStorage<8, 24, std::map<SubChunkPos, VisibilityNodeTrackingData::VisibilityNodeData>> mVisibilityNodeMap;
    ::ll::TypedStorage<4, 40, std::mutex> mUpdateVisibilityNodeMapMutex;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VisibilityNodeTrackingData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addVisibilityNodeAndGenerationTime(
        ::SubChunkPos const&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        ::VisibilityNode const&
    );

    MCNAPI void addVisibilityNodeGroundTruthAndGenerationTime(
        ::SubChunkPos const&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        ::VisibilityNode const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
