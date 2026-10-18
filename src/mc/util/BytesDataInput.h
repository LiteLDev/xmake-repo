#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> readStringResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> readStringResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> readLongStringResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> readLongStringResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<float, std::error_code> readFloatResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<float> readFloatResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<double, std::error_code> readDoubleResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<double> readDoubleResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<uchar, std::error_code> readByteResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<uchar> readByteResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<short, std::error_code> readShortResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<short> readShortResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<int, std::error_code> readIntResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<int> readIntResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<long, std::error_code> readLongLongResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<int64> readLongLongResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> readBytesResult(void*, ulong) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<std::string, std::error_code> $readStringResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::std::string> $readStringResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<std::string, std::error_code> $readLongStringResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::std::string> $readLongStringResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<float, std::error_code> $readFloatResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<float> $readFloatResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<double, std::error_code> $readDoubleResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<double> $readDoubleResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<uchar, std::error_code> $readByteResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<uchar> $readByteResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<short, std::error_code> $readShortResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<short> $readShortResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<int, std::error_code> $readIntResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<int> $readIntResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<long, std::error_code> $readLongLongResult();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<int64> $readLongLongResult();


#endif // @header-generator platform
    // NOLINTEND
};
