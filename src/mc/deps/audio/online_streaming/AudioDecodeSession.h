#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/audio/online_streaming/AudioDecodeRecoveryMode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioFrameBuffer; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Audio { class IAudioDecoder; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Audio {

class AudioDecodeSession {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk691d12;
    ::ll::UntypedStorage<4, 4> mUnk26835e;
    ::ll::UntypedStorage<8, 8> mUnkd5820b;
    ::ll::UntypedStorage<1, 1> mUnkaad55e;
    ::ll::UntypedStorage<8, 8> mUnkda0838;
    ::ll::UntypedStorage<1, 1> mUnk928e5f;
    ::ll::UntypedStorage<4, 4> mUnkc3c644;
    ::ll::UntypedStorage<8, 8> mUnk60b2ed;
    ::ll::UntypedStorage<8, 8> mUnka2ab8a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AudioDecodeSession& operator=(AudioDecodeSession const&);
    AudioDecodeSession(AudioDecodeSession const&);
#endif // @header-generator platform
    AudioDecodeSession();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI uint64 _decodeNormally(::Audio::AudioFrameBuffer& outputBuffer);

    MCNAPI ::Bedrock::Result<::gsl::span<float>>
    fillPcm(::Audio::AudioFrameBuffer& outputBuffer, ::std::chrono::steady_clock::time_point now);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Audio
