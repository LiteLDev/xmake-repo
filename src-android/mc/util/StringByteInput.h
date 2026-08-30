#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BytesDataInput.h"

class StringByteInput : public ::BytesDataInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>             mIdx;
    ::ll::TypedStorage<8, 16, std::string_view> mBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    StringByteInput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StringByteInput();

    virtual ::Bedrock::Result<void, std::error_code> readBytesResult(void*, ulong);

    virtual ulong numBytesLeft() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void, std::error_code> $readBytesResult(void*, ulong);

    MCNAPI ulong $numBytesLeft() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
