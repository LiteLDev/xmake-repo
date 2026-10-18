#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

class IDataInput {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IDataInput();
#else // @header-generator platform
    virtual ~IDataInput() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> readStringResult() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> readStringResult() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> readLongStringResult() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> readLongStringResult() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<float, std::error_code> readFloatResult() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<float> readFloatResult() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<double, std::error_code> readDoubleResult() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<double> readDoubleResult() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<uchar, std::error_code> readByteResult() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<uchar> readByteResult() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<short, std::error_code> readShortResult() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<short> readShortResult() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<int, std::error_code> readIntResult() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<int> readIntResult() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<long, std::error_code> readLongLongResult() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<int64> readLongLongResult() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> readBytesResult(void*, ulong) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong numBytesLeft() const = 0;
#else // @header-generator platform
    virtual uint64 numBytesLeft() const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar readByte();
#else // @header-generator platform
    MCAPI uchar readByte();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool readBytes(void*, ulong);
#else // @header-generator platform
    MCAPI bool readBytes(void* data, uint64 bytes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int readInt();
#else // @header-generator platform
    MCAPI int readInt();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long readLongLong();
#else // @header-generator platform
    MCAPI int64 readLongLong();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string readLongString();
#else // @header-generator platform
    MCAPI ::std::string readLongString();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short readShort();
#else // @header-generator platform
    MCAPI short readShort();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string readString();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::std::string readString();
#endif // @header-generator platform
    // NOLINTEND
};
