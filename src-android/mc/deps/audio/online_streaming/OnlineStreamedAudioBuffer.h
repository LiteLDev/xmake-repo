#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

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
        ::ll::TypedStorage<8, 8, ulong>               fileOffset;
        ::ll::TypedStorage<8, 24, std::vector<uchar>> data;
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
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::TypedStorage<8, 24, std::vector<Audio::OnlineStreamedAudioBuffer::AudioChunk>> mChunks;
    ::ll::TypedStorage<8, 8, ulong const> mMaxBufferedBytes;
    ::ll::TypedStorage<8, 8, ulong> mContentLength;
    ::ll::TypedStorage<8, 8, ulong> mTotalBytesBuffered;
    ::ll::TypedStorage<8, 8, ulong> mTotalBytesWritten;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Bedrock::PubSub::Publisher<void (ulong, std::vector<uchar>), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> const> mOnChunkConsumed;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineStreamedAudioBuffer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<gsl::span<uchar>, std::error_code> tryRead(ulong, ::gsl::span<uchar>) const;
    // NOLINTEND
};

} // namespace Audio
