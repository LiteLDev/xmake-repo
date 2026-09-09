#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Audio__OnlineAudioTimingHistogram.h"
#include "mc/deps/audio/online_streaming/OnlinePlayRequest.h"
#include "mc/deps/audio/online_streaming/StreamState.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioDecodeContext; }
namespace Audio { class IOnlineAudioFetcher; }
// clang-format on

namespace Audio {

class OnlineAudioStream {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioStream();

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
};

} // namespace Audio
