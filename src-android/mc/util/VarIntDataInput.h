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
    ::ll::TypedStorage<8, 8, ::ReadOnlyBinaryStream&> mStream;
    // NOLINTEND

public:
    // prevent constructor by default
    VarIntDataInput& operator=(VarIntDataInput const&);
    VarIntDataInput(VarIntDataInput const&);
    VarIntDataInput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VarIntDataInput();

    virtual ::Bedrock::Result<std::string, std::error_code> readStringResult();

    virtual ::Bedrock::Result<std::string, std::error_code> readLongStringResult();

    virtual ::Bedrock::Result<float, std::error_code> readFloatResult();

    virtual ::Bedrock::Result<double, std::error_code> readDoubleResult();

    virtual ::Bedrock::Result<uchar, std::error_code> readByteResult();

    virtual ::Bedrock::Result<short, std::error_code> readShortResult();

    virtual ::Bedrock::Result<int, std::error_code> readIntResult();

    virtual ::Bedrock::Result<long, std::error_code> readLongLongResult();

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

    MCNAPI ::Bedrock::Result<void, std::error_code> $readBytesResult(void*, ulong);

    MCNAPI ulong $numBytesLeft() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
