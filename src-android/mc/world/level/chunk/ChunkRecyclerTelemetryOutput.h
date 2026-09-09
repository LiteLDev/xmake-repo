#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunkRecyclerTelemetryOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, float>>> mBucketPercentages;
    ::ll::TypedStorage<8, 8, ulong>                                       mGeneratedChunks;
    ::ll::TypedStorage<8, 8, ulong>                                       mDeletedChunks;
    ::ll::TypedStorage<8, 8, ulong>                                       mTimeSeconds;
    ::ll::TypedStorage<8, 8, ulong>                                       mChunkRadiusAvg;
    ::ll::TypedStorage<8, 8, ulong>                                       mActiveOverworldChunksAvg;
    ::ll::TypedStorage<8, 8, ulong>                                       mMaximumOverworldPlayers;
    ::ll::TypedStorage<8, 8, ulong>                                       mSimulationDistance;
    ::ll::TypedStorage<4, 4, float>                                       mTotalGenTimeSeconds;
    ::ll::TypedStorage<4, 4, float>                                       mOverworldPlayerAvg;
    ::ll::TypedStorage<1, 1, bool>                                        mIsFlatWorld;
    ::ll::TypedStorage<1, 1, bool>                                        mIsClientSideGenerationEnabled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChunkRecyclerTelemetryOutput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
