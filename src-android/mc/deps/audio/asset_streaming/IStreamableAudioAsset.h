#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Audio {

class IStreamableAudioAsset {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStreamableAudioAsset() = default;

    virtual ulong getSize() const = 0;

    virtual ::Bedrock::Result<gsl::span<uchar>, std::error_code> read(::gsl::span<uchar>) = 0;

    virtual ::Bedrock::Result<void, std::error_code> seek(ulong) = 0;

    virtual ::Bedrock::Result<ulong, std::error_code> tell() = 0;
    // NOLINTEND
};

} // namespace Audio
