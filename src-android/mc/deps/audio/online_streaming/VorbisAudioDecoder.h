#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/IAudioDecoder.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct stb_vorbis;
namespace Audio { class AudioFrameBuffer; }
namespace Audio { class OnlineStreamedAudioBuffer; }
// clang-format on

namespace Audio {

class VorbisAudioDecoder : public ::Audio::IAudioDecoder {
public:
    // VorbisAudioDecoder inner types declare
    // clang-format off
    struct InputBuffer;
    struct LeftoverBuffer;
    // clang-format on

    // VorbisAudioDecoder inner types define
    struct InputBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
        ::ll::TypedStorage<8, 8, ulong>               mUsed;
        ::ll::TypedStorage<8, 8, ulong>               mFileReadPosition;
        ::ll::TypedStorage<8, 8, ulong>               mSafeConsumePosition;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::gsl::span<uchar> prepareWrite(ulong);
        // NOLINTEND
    };

    struct LeftoverBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<float>> mSamples;
        ::ll::TypedStorage<8, 8, ulong>               mOffset;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Audio::OnlineStreamedAudioBuffer>>> mAudioBuffer;
    ::ll::UntypedStorage<8, 8>                                                                    mVorbis;
    ::ll::TypedStorage<1, 1, uchar>                                                               mChannels;
    ::ll::TypedStorage<4, 4, int>                                                                 mSampleRate;
    ::ll::TypedStorage<8, 8, long>                                                                mCurrentFramePosition;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                                               mTotalSamples;
    ::ll::TypedStorage<8, 48, ::Audio::VorbisAudioDecoder::InputBuffer>                           mInput;
    ::ll::TypedStorage<8, 32, ::Audio::VorbisAudioDecoder::LeftoverBuffer>                        mLeftover;
    ::ll::TypedStorage<8, 8, ulong const>                                                         mInputChunkSize;
    ::ll::TypedStorage<8, 8, ulong const> mInitialHeaderReadSize;
    // NOLINTEND

public:
    // prevent constructor by default
    VorbisAudioDecoder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VorbisAudioDecoder();

    virtual ::Bedrock::Result<void, std::error_code> initialize();

    virtual ::Bedrock::Result<gsl::span<float>, std::error_code> decodeInto(::Audio::AudioFrameBuffer&);

    virtual uchar getChannels() const;

    virtual int getSampleRate() const;

    virtual long getCurrentFramePosition() const;

    virtual void setTotalSamples(ulong);

    virtual std::optional<ulong> getTotalSamples() const;

    virtual bool isFinished() const;

    virtual ulong getFileReadPosition() const;

    virtual ulong getSafeConsumePosition() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void, std::error_code> $initialize();

    MCNAPI ::Bedrock::Result<gsl::span<float>, std::error_code> $decodeInto(::Audio::AudioFrameBuffer&);

    MCNAPI uchar $getChannels() const;

    MCNAPI int $getSampleRate() const;

    MCNAPI long $getCurrentFramePosition() const;

    MCNAPI void $setTotalSamples(ulong);

    MCNAPI std::optional<ulong> $getTotalSamples() const;

    MCNAPI bool $isFinished() const;

    MCNAPI ulong $getFileReadPosition() const;

    MCNAPI ulong $getSafeConsumePosition() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Audio
