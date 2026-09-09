#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/StringByteInput.h"

class BigEndianStringByteInput : public ::StringByteInput {
public:
    // prevent constructor by default
    BigEndianStringByteInput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BigEndianStringByteInput();

    virtual ::Bedrock::Result<float, std::error_code> readFloatResult();

    virtual ::Bedrock::Result<double, std::error_code> readDoubleResult();

    virtual ::Bedrock::Result<short, std::error_code> readShortResult();

    virtual ::Bedrock::Result<int, std::error_code> readIntResult();

    virtual ::Bedrock::Result<long, std::error_code> readLongLongResult();

    virtual ::Bedrock::Result<void, std::error_code> readBytesResult(void*, ulong);

    virtual ::Bedrock::Result<void, std::error_code> readBigEndianBytesResult(void*, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<float, std::error_code> $readFloatResult();

    MCNAPI ::Bedrock::Result<double, std::error_code> $readDoubleResult();

    MCNAPI ::Bedrock::Result<short, std::error_code> $readShortResult();

    MCNAPI ::Bedrock::Result<int, std::error_code> $readIntResult();

    MCNAPI ::Bedrock::Result<long, std::error_code> $readLongLongResult();

    MCNAPI ::Bedrock::Result<void, std::error_code> $readBytesResult(void*, ulong);

    MCNAPI ::Bedrock::Result<void, std::error_code> $readBigEndianBytesResult(void*, ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
