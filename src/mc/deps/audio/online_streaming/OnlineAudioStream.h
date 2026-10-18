#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/Audio__OnlineAudioTimingHistogram.h"
#include "mc/deps/audio/online_streaming/OnlinePlayRequest.h"
#include "mc/deps/audio/online_streaming/StreamState.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioDecodeContext; }
namespace Audio { class IOnlineAudioFetcher; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Audio {

class OnlineAudioStream {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mUrl;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Audio::IOnlineAudioFetcher>> mFetcher;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Audio::AudioDecodeContext>> mDecodeContext;
    ::ll::TypedStorage<4, 4, ::Audio::StreamState> mState;
    ::ll::TypedStorage<8, 48, ::Audio::OnlinePlayRequest> mPlayRequest;
    ::ll::TypedStorage<1, 1, bool> mPlayTriggered;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mReadyTime;
    ::ll::TypedStorage<8, 8, ulong const> mSoundHandle;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCreationTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mPlaybackStartTime;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mLastUpdateTime;
    ::ll::TypedStorage<8, 96, ::Audio::OnlineAudioTimingHistogram> mUpdateIntervalBeforePlayback;
    ::ll::TypedStorage<8, 96, ::Audio::OnlineAudioTimingHistogram> mUpdateIntervalAfterPlayback;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkc6249c;
    ::ll::UntypedStorage<8, 8>  mUnk16dcbe;
    ::ll::UntypedStorage<8, 16> mUnk4bc6ac;
    ::ll::UntypedStorage<4, 4>  mUnk3dd9c3;
    ::ll::UntypedStorage<8, 56> mUnk461306;
    ::ll::UntypedStorage<1, 1>  mUnkb70e5c;
    ::ll::UntypedStorage<8, 8>  mUnk17f874;
    ::ll::UntypedStorage<8, 8>  mUnkfea393;
    ::ll::UntypedStorage<8, 8>  mUnk2dd1a0;
    ::ll::UntypedStorage<8, 8>  mUnk2f77a6;
    ::ll::UntypedStorage<8, 16> mUnkf9b6b9;
    ::ll::UntypedStorage<8, 96> mUnkcbe79a;
    ::ll::UntypedStorage<8, 96> mUnkb76489;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    OnlineAudioStream& operator=(OnlineAudioStream const&);
    OnlineAudioStream(OnlineAudioStream const&);
#endif // @header-generator platform
    OnlineAudioStream();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong getBytesDownloaded() const;

    MCNAPI std::shared_ptr<Audio::AudioDecodeContext> getDecodeContext() const;

    MCNAPI ::Audio::IOnlineAudioFetcher const& getFetcher() const;

    MCNAPI float getSessionDurationSeconds() const;

    MCNAPI ulong getSoundHandle() const;

    MCNAPI ::Audio::StreamState getState() const;

    MCNAPI float getTimeToPlayMs() const;

    MCNAPI ::Audio::OnlineAudioTimingHistogram const& getUpdateIntervalAfterPlaybackHistogram() const;

    MCNAPI ::Audio::OnlineAudioTimingHistogram const& getUpdateIntervalBeforePlaybackHistogram() const;

    MCNAPI bool isDecoderInGap() const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Audio
