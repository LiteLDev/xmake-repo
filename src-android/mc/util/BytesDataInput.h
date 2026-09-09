#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Result<std::string, std::error_code> readStringResult();

    virtual ::Bedrock::Result<std::string, std::error_code> readLongStringResult();

    virtual ::Bedrock::Result<float, std::error_code> readFloatResult();

    virtual ::Bedrock::Result<double, std::error_code> readDoubleResult();

    virtual ::Bedrock::Result<uchar, std::error_code> readByteResult();

    virtual ::Bedrock::Result<short, std::error_code> readShortResult();

    virtual ::Bedrock::Result<int, std::error_code> readIntResult();

    virtual ::Bedrock::Result<long, std::error_code> readLongLongResult();

    virtual ::Bedrock::Result<void, std::error_code> readBytesResult(void*, ulong) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<std::string, std::error_code> $readStringResult();

    MCNAPI ::Bedrock::Result<std::string, std::error_code> $readLongStringResult();

    MCNAPI ::Bedrock::Result<float, std::error_code> $readFloatResult();

    MCNAPI ::Bedrock::Result<double, std::error_code> $readDoubleResult();

    MCNAPI ::Bedrock::Result<uchar, std::error_code> $readByteResult();

    MCNAPI ::Bedrock::Result<short, std::error_code> $readShortResult();

    MCNAPI ::Bedrock::Result<int, std::error_code> $readIntResult();

    MCNAPI ::Bedrock::Result<long, std::error_code> $readLongLongResult();
    // NOLINTEND
};
