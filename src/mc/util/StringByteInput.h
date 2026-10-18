#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BytesDataInput.h"

class StringByteInput : public ::BytesDataInput {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>             mIdx;
    ::ll::TypedStorage<8, 16, std::string_view> mBuffer;
#else // @header-generator platform
    size_t           mIdx;
    std::string_view mBuffer;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    StringByteInput();
#else // @header-generator platform
    StringByteInput(std::string_view sv, size_t offset = 0) noexcept : mIdx(offset), mBuffer(sv) {}
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StringByteInput();
#else // @header-generator platform
    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> readBytesResult(void*, ulong);

    virtual ulong numBytesLeft() const;
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
    MCNAPI ::Bedrock::Result<void, std::error_code> $readBytesResult(void*, ulong);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $readBytesResult(void* data, uint64 bytes);
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
