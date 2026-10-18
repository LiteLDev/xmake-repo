#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/StringByteInput.h"

class BigEndianStringByteInput : public ::StringByteInput {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BigEndianStringByteInput();
#else // @header-generator platform
    using StringByteInput::StringByteInput;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BigEndianStringByteInput();
#else // @header-generator platform
    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<float, std::error_code> readFloatResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<void> readBigEndianBytesResult(void* data, uint64 bytes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<double, std::error_code> readDoubleResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<float> readFloatResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<short, std::error_code> readShortResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<double> readDoubleResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<int, std::error_code> readIntResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<short> readShortResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<long, std::error_code> readLongLongResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<int> readIntResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> readBytesResult(void*, ulong);

    virtual ::Bedrock::Result<void, std::error_code> readBigEndianBytesResult(void*, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Bedrock::Result<int64> readLongLongResult() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<float, std::error_code> $readFloatResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $readBytesResult(void* data, uint64 bytes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<double, std::error_code> $readDoubleResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $readBigEndianBytesResult(void* data, uint64 bytes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<short, std::error_code> $readShortResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<float> $readFloatResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<int, std::error_code> $readIntResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<double> $readDoubleResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<long, std::error_code> $readLongLongResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<short> $readShortResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $readBytesResult(void*, ulong);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<int> $readIntResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $readBigEndianBytesResult(void*, ulong);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Bedrock::Result<int64> $readLongLongResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
