#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/AudioDecodeRecoveryMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioFrameBuffer; }
namespace Audio { class IAudioDecoder; }
// clang-format on

namespace Audio {

class AudioDecodeSession {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<Audio::IAudioDecoder>> mDecoder;
    ::ll::TypedStorage<4, 4, ::Audio::AudioDecodeRecoveryMode> mRecoveryMode;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mPlaybackStartTime;
    ::ll::TypedStorage<1, 1, bool> mPlaybackStarted;
    ::ll::TypedStorage<8, 8, long> mTotalFramesFilled;
    ::ll::TypedStorage<1, 1, bool> mInGap;
    ::ll::TypedStorage<4, 4, uint> mGapCount;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTotalGapDuration;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mGapStartTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AudioDecodeSession();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong _decodeNormally(::Audio::AudioFrameBuffer&);

    MCNAPI ::Bedrock::Result<gsl::span<float>, std::error_code> fillPcm(::Audio::AudioFrameBuffer&);

    MCNAPI ::Bedrock::Result<gsl::span<float>, std::error_code> fillPcm(
        ::Audio::AudioFrameBuffer&,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI uchar getChannels() const;

    MCNAPI ulong getFileReadPosition() const;

    MCNAPI uint getGapCount() const;

    MCNAPI ::Audio::AudioDecodeRecoveryMode getRecoveryMode() const;

    MCNAPI int getSampleRate() const;

    MCNAPI float getTotalGapDurationSeconds() const;

    MCNAPI std::optional<ulong> getTotalSamples() const;

    MCNAPI bool isFinished() const;
    // NOLINTEND
};

} // namespace Audio
