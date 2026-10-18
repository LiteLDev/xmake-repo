#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
template<typename T0> class buffer_span_mut;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>      mOwnedBuffer;
    ::ll::TypedStorage<8, 16, std::string_view> mView;
    ::ll::TypedStorage<8, 8, ulong>             mReadPointer;
    ::ll::TypedStorage<1, 1, bool>              mHasOverflowed;
#else // @header-generator platform
    ::std::string      mOwnedBuffer;
    ::std::string_view mView;
    uint64             mReadPointer;
    bool               mHasOverflowed;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ReadOnlyBinaryStream();
#else // @header-generator platform
    ReadOnlyBinaryStream(::std::string_view buffer, bool copyBuffer)
    : mView(buffer),
      mReadPointer(0),
      mHasOverflowed(false) {
        if (copyBuffer) {
            mOwnedBuffer = std::string(buffer);
            mView        = mOwnedBuffer;
        }
    }
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReadOnlyBinaryStream();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> read(void*, ulong);
#else // @header-generator platform
    virtual ::Bedrock::Result<void> read(void* target, uint64 num);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> ensureReadCompleted() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Result<bool> getBool();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<bool, std::error_code> getBool();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<uchar> getByte();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<uchar, std::error_code> getByte();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<double> getDouble();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<double, std::error_code> getDouble();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<float> getFloat();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<float, std::error_code> getFloat();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> getRawBytes(::buffer_span_mut<uchar> outBuffer, uint64 length);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> getRawBytes(::buffer_span_mut<uchar>, ulong);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<int> getSignedBigEndianInt();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<int, std::error_code> getSignedBigEndianInt();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<schar> getSignedByte();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<schar, std::error_code> getSignedByte();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<int> getSignedInt();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<int, std::error_code> getSignedInt();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<int64> getSignedInt64();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<long, std::error_code> getSignedInt64();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<short> getSignedShort();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<short, std::error_code> getSignedShort();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::std::string> getString(uint64 maxLength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<std::string, std::error_code> getString(ulong);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> getString(::std::string& outStringStream, uint64 maxLength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> getString(std::string&, ulong);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<uchar> getUnsignedChar();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getUnreadLength() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Result<uint> getUnsignedInt();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<uchar, std::error_code> getUnsignedChar();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<uint64> getUnsignedInt64();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<uint, std::error_code> getUnsignedInt();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<ushort> getUnsignedShort();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<ulong, std::error_code> getUnsignedInt64();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<uint> getUnsignedVarInt();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<ushort, std::error_code> getUnsignedShort();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<uint64> getUnsignedVarInt64();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<uint, std::error_code> getUnsignedVarInt();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<int> getVarInt();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<ulong, std::error_code> getUnsignedVarInt64();

    MCNAPI ::Bedrock::Result<int, std::error_code> getVarInt();

    MCNAPI ::Bedrock::Result<long, std::error_code> getVarInt64();

    MCNAPI std::string_view getView() const;

    MCNAPI bool hasOverflowed() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Result<int64> getVarInt64();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $read(void*, ulong);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $read(void* target, uint64 num);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
