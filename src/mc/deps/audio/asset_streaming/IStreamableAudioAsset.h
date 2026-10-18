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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSize() const = 0;
#else // @header-generator platform
    virtual uint64 getSize() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<gsl::span<uchar>, std::error_code> read(::gsl::span<uchar>) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<::gsl::span<uchar>> read(::gsl::span<uchar> buffer) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> seek(ulong) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> seek(uint64 position) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<ulong, std::error_code> tell() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<uint64> tell() = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Audio
