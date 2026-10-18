#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Audio {

class OnlineStreamedAudioBuffer {
public:
    // OnlineStreamedAudioBuffer inner types declare
    // clang-format off
    struct AudioChunk;
    // clang-format on

    // OnlineStreamedAudioBuffer inner types define
    struct AudioChunk {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>               fileOffset;
        ::ll::TypedStorage<8, 24, std::vector<uchar>> data;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk897038;
        ::ll::UntypedStorage<8, 24> mUnkf86328;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        AudioChunk& operator=(AudioChunk const&);
        AudioChunk(AudioChunk const&);
        AudioChunk();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::TypedStorage<8, 24, std::vector<Audio::OnlineStreamedAudioBuffer::AudioChunk>> mChunks;
    ::ll::TypedStorage<8, 8, ulong const> mMaxBufferedBytes;
    ::ll::TypedStorage<8, 8, ulong> mContentLength;
    ::ll::TypedStorage<8, 8, ulong> mTotalBytesBuffered;
    ::ll::TypedStorage<8, 8, ulong> mTotalBytesWritten;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Bedrock::PubSub::Publisher<void (ulong, std::vector<uchar>), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> const> mOnChunkConsumed;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk104ff0;
    ::ll::UntypedStorage<8, 24> mUnkb707cf;
    ::ll::UntypedStorage<8, 8>  mUnke3ce51;
    ::ll::UntypedStorage<8, 8>  mUnkff684d;
    ::ll::UntypedStorage<8, 8>  mUnk885368;
    ::ll::UntypedStorage<8, 8>  mUnkd58fce;
    ::ll::UntypedStorage<8, 8>  mUnk746d9b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    OnlineStreamedAudioBuffer& operator=(OnlineStreamedAudioBuffer const&);
    OnlineStreamedAudioBuffer(OnlineStreamedAudioBuffer const&);
#endif // @header-generator platform
    OnlineStreamedAudioBuffer();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<gsl::span<uchar>, std::error_code> tryRead(ulong, ::gsl::span<uchar>) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Result<::gsl::span<uchar>> tryRead(uint64 offset, ::gsl::span<uchar> outputBuffer) const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Audio
