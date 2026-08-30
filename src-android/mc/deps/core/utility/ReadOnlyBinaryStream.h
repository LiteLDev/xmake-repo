#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class buffer_span_mut;
// clang-format on

class ReadOnlyBinaryStream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>      mOwnedBuffer;
    ::ll::TypedStorage<8, 16, std::string_view> mView;
    ::ll::TypedStorage<8, 8, ulong>             mReadPointer;
    ::ll::TypedStorage<1, 1, bool>              mHasOverflowed;
    // NOLINTEND

public:
    // prevent constructor by default
    ReadOnlyBinaryStream();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReadOnlyBinaryStream();

    virtual ::Bedrock::Result<void, std::error_code> read(void*, ulong);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void, std::error_code> ensureReadCompleted() const;

    MCNAPI ::Bedrock::Result<bool, std::error_code> getBool();

    MCNAPI ::Bedrock::Result<uchar, std::error_code> getByte();

    MCNAPI ::Bedrock::Result<double, std::error_code> getDouble();

    MCNAPI ::Bedrock::Result<float, std::error_code> getFloat();

    MCNAPI ::Bedrock::Result<void, std::error_code> getRawBytes(::buffer_span_mut<uchar>, ulong);

    MCNAPI ::Bedrock::Result<int, std::error_code> getSignedBigEndianInt();

    MCNAPI ::Bedrock::Result<schar, std::error_code> getSignedByte();

    MCNAPI ::Bedrock::Result<int, std::error_code> getSignedInt();

    MCNAPI ::Bedrock::Result<long, std::error_code> getSignedInt64();

    MCNAPI ::Bedrock::Result<short, std::error_code> getSignedShort();

    MCNAPI ::Bedrock::Result<std::string, std::error_code> getString(ulong);

    MCNAPI ::Bedrock::Result<void, std::error_code> getString(std::string&, ulong);

    MCNAPI ulong getUnreadLength() const;

    MCNAPI ::Bedrock::Result<uchar, std::error_code> getUnsignedChar();

    MCNAPI ::Bedrock::Result<uint, std::error_code> getUnsignedInt();

    MCNAPI ::Bedrock::Result<ulong, std::error_code> getUnsignedInt64();

    MCNAPI ::Bedrock::Result<ushort, std::error_code> getUnsignedShort();

    MCNAPI ::Bedrock::Result<uint, std::error_code> getUnsignedVarInt();

    MCNAPI ::Bedrock::Result<ulong, std::error_code> getUnsignedVarInt64();

    MCNAPI ::Bedrock::Result<int, std::error_code> getVarInt();

    MCNAPI ::Bedrock::Result<long, std::error_code> getVarInt64();

    MCNAPI std::string_view getView() const;

    MCNAPI bool hasOverflowed() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void, std::error_code> $read(void*, ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
