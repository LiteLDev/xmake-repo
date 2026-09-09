#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PerfContextGameplayMode.h"
#include "mc/profile/FrameAnomalyDetectorSummary.h"
#include "mc/util/PerfContextTrackerReportLite.h"

class PerfContextTrackerReport : public ::PerfContextTrackerReportLite {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double>                                      mAppUptimeSeconds;
    ::ll::TypedStorage<8, 8, ulong>                                       mUsedMemoryKB;
    ::ll::TypedStorage<8, 8, ulong>                                       mMaxMemoryKB;
    ::ll::TypedStorage<4, 4, float>                                       mAvgFPS;
    ::ll::TypedStorage<4, 4, int>                                         mActorRenderCount;
    ::ll::TypedStorage<4, 4, uint>                                        mClientCount;
    ::ll::TypedStorage<4, 4, uint>                                        mActorCount;
    ::ll::TypedStorage<4, 4, uint>                                        mMobCount;
    ::ll::TypedStorage<4, 4, uint>                                        mPlayerCount;
    ::ll::TypedStorage<4, 4, uint>                                        mRenderDistance;
    ::ll::TypedStorage<4, 4, uint>                                        mSimDistance;
    ::ll::TypedStorage<4, 48, std::array<float, 12>>                      mEventAvgMS;
    ::ll::TypedStorage<4, 4, uint>                                        mSentPackets;
    ::ll::TypedStorage<4, 4, uint>                                        mSentPacketsSize;
    ::ll::TypedStorage<4, 4, uint>                                        mReceivedPackets;
    ::ll::TypedStorage<4, 4, uint>                                        mReceivedPacketsSize;
    ::ll::TypedStorage<4, 4, uint>                                        mNumFrameOptimizerFrames;
    ::ll::TypedStorage<4, 4, uint>                                        mNumFramePenalties;
    ::ll::TypedStorage<4, 4, uint>                                        mNumFramePredictionFailed;
    ::ll::TypedStorage<8, 8, double>                                      mAvgGameUpdates;
    ::ll::TypedStorage<8, 8, double>                                      mAvgRenderFrameDuration;
    ::ll::TypedStorage<8, 8, double>                                      mAvgFrameWaitDuration;
    ::ll::TypedStorage<8, 8, double>                                      mAvgGameUpdateDuration;
    ::ll::TypedStorage<8, 56, std::optional<FrameAnomalyDetectorSummary>> mFrameAnomalySummary;
    ::ll::TypedStorage<2, 2, ::PerfContextGameplayMode>                   mGameplayMode;
    // NOLINTEND
};
