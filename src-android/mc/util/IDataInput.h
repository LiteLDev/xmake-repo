#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

class IDataInput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDataInput();

    virtual ::Bedrock::Result<std::string, std::error_code> readStringResult() = 0;

    virtual ::Bedrock::Result<std::string, std::error_code> readLongStringResult() = 0;

    virtual ::Bedrock::Result<float, std::error_code> readFloatResult() = 0;

    virtual ::Bedrock::Result<double, std::error_code> readDoubleResult() = 0;

    virtual ::Bedrock::Result<uchar, std::error_code> readByteResult() = 0;

    virtual ::Bedrock::Result<short, std::error_code> readShortResult() = 0;

    virtual ::Bedrock::Result<int, std::error_code> readIntResult() = 0;

    virtual ::Bedrock::Result<long, std::error_code> readLongLongResult() = 0;

    virtual ::Bedrock::Result<void, std::error_code> readBytesResult(void*, ulong) = 0;

    virtual ulong numBytesLeft() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uchar readByte();

    MCNAPI bool readBytes(void*, ulong);

    MCNAPI int readInt();

    MCNAPI long readLongLong();

    MCNAPI std::string readLongString();

    MCNAPI short readShort();

    MCNAPI std::string readString();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
