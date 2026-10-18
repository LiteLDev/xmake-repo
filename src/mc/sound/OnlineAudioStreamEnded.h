#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/Audio__OnlineAudioTimingHistogram.h"
#include "mc/deps/core/NetworkConnectionType.h"
#include "mc/sound/StreamingSessionResult.h"
#else // @header-generator platform
#endif // @header-generator platform

struct OnlineAudioStreamEnded {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkbc4b3d;
    ::ll::UntypedStorage<1, 1>  mUnk29c435;
    ::ll::UntypedStorage<1, 1>  mUnk65ff02;
    ::ll::UntypedStorage<4, 4>  mUnkf9fef3;
    ::ll::UntypedStorage<4, 4>  mUnk53fe3f;
    ::ll::UntypedStorage<4, 4>  mUnkb4d481;
    ::ll::UntypedStorage<4, 4>  mUnkb92990;
    ::ll::UntypedStorage<8, 8>  mUnk5dfd06;
    ::ll::UntypedStorage<8, 8>  mUnk94d24e;
    ::ll::UntypedStorage<4, 4>  mUnk108d1f;
    ::ll::UntypedStorage<4, 4>  mUnkbd6d00;
    ::ll::UntypedStorage<4, 4>  mUnk68b3d2;
    ::ll::UntypedStorage<4, 4>  mUnkbff73d;
    ::ll::UntypedStorage<8, 96> mUnk9a1f2c;
    ::ll::UntypedStorage<8, 96> mUnk9ab5a0;
    ::ll::UntypedStorage<8, 96> mUnk572fb5;
    ::ll::UntypedStorage<8, 96> mUnk4c739b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioStreamEnded& operator=(OnlineAudioStreamEnded const&);
    OnlineAudioStreamEnded(OnlineAudioStreamEnded const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    OnlineAudioStreamEnded();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~OnlineAudioStreamEnded();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
#endif // @header-generator platform
};
