#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioFrameBuffer; }
// clang-format on

namespace Audio {

class IAudioDecoder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAudioDecoder() = default;

    virtual ::Bedrock::Result<void, std::error_code> initialize() = 0;

    virtual ::Bedrock::Result<gsl::span<float>, std::error_code> decodeInto(::Audio::AudioFrameBuffer&) = 0;

    virtual uchar getChannels() const = 0;

    virtual int getSampleRate() const = 0;

    virtual long getCurrentFramePosition() const = 0;

    virtual void setTotalSamples(ulong) = 0;

    virtual std::optional<ulong> getTotalSamples() const = 0;

    virtual bool isFinished() const = 0;

    virtual ulong getFileReadPosition() const = 0;

    virtual ulong getSafeConsumePosition() const = 0;
    // NOLINTEND
};

} // namespace Audio
