#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BytesDataInput.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

class VarIntDataInput : public ::BytesDataInput {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ReadOnlyBinaryStream&> mStream;
#else // @header-generator platform
    ::ReadOnlyBinaryStream& mStream;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    VarIntDataInput(ReadOnlyBinaryStream& bs) : mStream(bs) {}
#endif // @header-generator platform

public:
    // prevent constructor by default
    VarIntDataInput& operator=(VarIntDataInput const&);
    VarIntDataInput(VarIntDataInput const&);
    VarIntDataInput();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VarIntDataInput();
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> readStringResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> readStringResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> readLongStringResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> readLongStringResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<float> readFloatResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<float, std::error_code> readFloatResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<double> readDoubleResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<double, std::error_code> readDoubleResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<uchar> readByteResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<uchar, std::error_code> readByteResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<short> readShortResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<short, std::error_code> readShortResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<int> readIntResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<int, std::error_code> readIntResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<int64> readLongLongResult() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<long, std::error_code> readLongLongResult();
#else // @header-generator platform
    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> readBytesResult(void*, ulong);

    virtual ulong numBytesLeft() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit VarIntDataInput(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual uint64 numBytesLeft() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<std::string, std::error_code> $readStringResult();
#else // @header-generator platform
    MCFOLD ::Bedrock::Result<::std::string> $readStringResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<std::string, std::error_code> $readLongStringResult();
#else // @header-generator platform
    MCFOLD ::Bedrock::Result<::std::string> $readLongStringResult();
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $readBytesResult(void*, ulong);
#else // @header-generator platform
    MCFOLD ::Bedrock::Result<void> $readBytesResult(void* data, uint64 bytes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $numBytesLeft() const;
#else // @header-generator platform
    MCAPI uint64 $numBytesLeft() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
