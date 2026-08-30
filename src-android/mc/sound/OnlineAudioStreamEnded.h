#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Audio__OnlineAudioTimingHistogram.h"
#include "mc/deps/core/NetworkConnectionType.h"
#include "mc/sound/StreamingSessionResult.h"

struct OnlineAudioStreamEnded {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                         mSoundPath;
    ::ll::TypedStorage<1, 1, ::NetworkConnectionType>              mNetworkConnectionType;
    ::ll::TypedStorage<1, 1, ::StreamingSessionResult>             mResult;
    ::ll::TypedStorage<4, 4, uint>                                 mGapCount;
    ::ll::TypedStorage<4, 4, float>                                mTotalGapDurationSeconds;
    ::ll::TypedStorage<4, 4, float>                                mTimeToPlayMs;
    ::ll::TypedStorage<4, 4, float>                                mAudioPlayDurationSeconds;
    ::ll::TypedStorage<8, 8, ulong>                                mBytesRequested;
    ::ll::TypedStorage<8, 8, ulong>                                mBytesReceived;
    ::ll::TypedStorage<4, 4, uint>                                 mTotalRetries;
    ::ll::TypedStorage<4, 4, uint>                                 mFetchSizeBytes;
    ::ll::TypedStorage<4, 4, uint>                                 mBufferSizeBytes;
    ::ll::TypedStorage<4, 4, float>                                mPrefetchMultiplier;
    ::ll::TypedStorage<8, 96, ::Audio::OnlineAudioTimingHistogram> mRequestTimeBeforePlaybackHistogram;
    ::ll::TypedStorage<8, 96, ::Audio::OnlineAudioTimingHistogram> mRequestTimeAfterPlaybackHistogram;
    ::ll::TypedStorage<8, 96, ::Audio::OnlineAudioTimingHistogram> mUpdateIntervalBeforePlaybackHistogram;
    ::ll::TypedStorage<8, 96, ::Audio::OnlineAudioTimingHistogram> mUpdateIntervalAfterPlaybackHistogram;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioStreamEnded& operator=(OnlineAudioStreamEnded const&);
    OnlineAudioStreamEnded(OnlineAudioStreamEnded const&);
};
