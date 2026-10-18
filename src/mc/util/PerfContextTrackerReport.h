#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/PerfContextGameplayMode.h"
#include "mc/profile/FrameAnomalyDetectorSummary.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/PerfContextTrackerReportLite.h"

class PerfContextTrackerReport : public ::PerfContextTrackerReportLite {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk4f1672;
    ::ll::UntypedStorage<8, 8>  mUnk8834c6;
    ::ll::UntypedStorage<8, 8>  mUnke069db;
    ::ll::UntypedStorage<4, 4>  mUnk44ce11;
    ::ll::UntypedStorage<4, 4>  mUnke4ca45;
    ::ll::UntypedStorage<4, 4>  mUnk8d4fb1;
    ::ll::UntypedStorage<4, 4>  mUnk32081e;
    ::ll::UntypedStorage<4, 4>  mUnkfd22e1;
    ::ll::UntypedStorage<4, 4>  mUnkc5b69c;
    ::ll::UntypedStorage<4, 4>  mUnkd7a40a;
    ::ll::UntypedStorage<4, 4>  mUnk1daeb0;
    ::ll::UntypedStorage<4, 48> mUnk16eb14;
    ::ll::UntypedStorage<4, 4>  mUnk1efb8e;
    ::ll::UntypedStorage<4, 4>  mUnk417e2b;
    ::ll::UntypedStorage<4, 4>  mUnk64a1a5;
    ::ll::UntypedStorage<4, 4>  mUnk11f124;
    ::ll::UntypedStorage<4, 4>  mUnkcdadd2;
    ::ll::UntypedStorage<4, 4>  mUnkc6bfdf;
    ::ll::UntypedStorage<4, 4>  mUnkce5a6c;
    ::ll::UntypedStorage<8, 8>  mUnkae9e66;
    ::ll::UntypedStorage<8, 8>  mUnkffb475;
    ::ll::UntypedStorage<8, 8>  mUnk573c46;
    ::ll::UntypedStorage<8, 8>  mUnk4ccb36;
    ::ll::UntypedStorage<8, 56> mUnk299659;
    ::ll::UntypedStorage<2, 2>  mUnka513d5;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PerfContextTrackerReport& operator=(PerfContextTrackerReport const&);
    PerfContextTrackerReport(PerfContextTrackerReport const&);
    PerfContextTrackerReport();
#endif // @header-generator platform
};
