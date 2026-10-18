#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/IAudioDecoder.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct stb_vorbis;
#else // @header-generator platform
#endif // @header-generator platform
namespace Audio { class AudioFrameBuffer; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Audio { class OnlineStreamedAudioBuffer; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
        ::ll::TypedStorage<8, 8, ulong>               mUsed;
        ::ll::TypedStorage<8, 8, ulong>               mFileReadPosition;
        ::ll::TypedStorage<8, 8, ulong>               mSafeConsumePosition;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnkaea1ee;
        ::ll::UntypedStorage<8, 8>  mUnka99366;
        ::ll::UntypedStorage<8, 8>  mUnkb8c249;
        ::ll::UntypedStorage<8, 8>  mUnkddc20e;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
        // NOLINTBEGIN
        MCNAPI ::gsl::span<uchar> prepareWrite(ulong);
        // NOLINTEND
#else // @header-generator platform
        // prevent constructor by default
        InputBuffer& operator=(InputBuffer const&);
        InputBuffer(InputBuffer const&);
        InputBuffer();
#endif // @header-generator platform
    };

    struct LeftoverBuffer {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<float>> mSamples;
        ::ll::TypedStorage<8, 8, ulong>               mOffset;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnkf5ed5e;
        ::ll::UntypedStorage<8, 8>  mUnk339c98;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        LeftoverBuffer& operator=(LeftoverBuffer const&);
        LeftoverBuffer(LeftoverBuffer const&);
        LeftoverBuffer();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkd0cc24;
    ::ll::UntypedStorage<8, 8>  mUnk27ddf1;
    ::ll::UntypedStorage<1, 1>  mUnk88909e;
    ::ll::UntypedStorage<4, 4>  mUnk7d022a;
    ::ll::UntypedStorage<8, 8>  mUnkfae57c;
    ::ll::UntypedStorage<8, 16> mUnk6d01f9;
    ::ll::UntypedStorage<8, 48> mUnkc49e58;
    ::ll::UntypedStorage<8, 32> mUnkd91a7b;
    ::ll::UntypedStorage<8, 8>  mUnk4e5e98;
    ::ll::UntypedStorage<8, 8>  mUnk434370;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    VorbisAudioDecoder& operator=(VorbisAudioDecoder const&);
    VorbisAudioDecoder(VorbisAudioDecoder const&);
#endif // @header-generator platform
    VorbisAudioDecoder();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VorbisAudioDecoder();
#else // @header-generator platform
    virtual ~VorbisAudioDecoder() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> initialize();
#else // @header-generator platform
    virtual ::Bedrock::Result<void> initialize() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<gsl::span<float>, std::error_code> decodeInto(::Audio::AudioFrameBuffer&);
#else // @header-generator platform
    virtual ::Bedrock::Result<::gsl::span<float>> decodeInto(::Audio::AudioFrameBuffer& outputBuffer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar getChannels() const;
#else // @header-generator platform
    virtual uchar getChannels() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getSampleRate() const;
#else // @header-generator platform
    virtual int getSampleRate() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long getCurrentFramePosition() const;
#else // @header-generator platform
    virtual int64 getCurrentFramePosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTotalSamples(ulong);
#else // @header-generator platform
    virtual void setTotalSamples(uint64 totalSamples) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<ulong> getTotalSamples() const;
#else // @header-generator platform
    virtual ::std::optional<uint64> getTotalSamples() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isFinished() const;
#else // @header-generator platform
    virtual bool isFinished() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getFileReadPosition() const;
#else // @header-generator platform
    virtual uint64 getFileReadPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSafeConsumePosition() const;
#else // @header-generator platform
    virtual uint64 getSafeConsumePosition() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool _feedDecoder();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $initialize();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Result<void> $initialize();

    MCNAPI ::Bedrock::Result<::gsl::span<float>> $decodeInto(::Audio::AudioFrameBuffer& outputBuffer);

    MCNAPI uchar $getChannels() const;

    MCNAPI int $getSampleRate() const;

    MCNAPI int64 $getCurrentFramePosition() const;

    MCNAPI void $setTotalSamples(uint64 totalSamples);

    MCNAPI ::std::optional<uint64> $getTotalSamples() const;

    MCNAPI bool $isFinished() const;

    MCNAPI uint64 $getFileReadPosition() const;

    MCNAPI uint64 $getSafeConsumePosition() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<gsl::span<float>, std::error_code> $decodeInto(::Audio::AudioFrameBuffer&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Audio
