#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class StringByteOutput : public ::BytesDataOutput {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::string&> mBuffer;
#else // @header-generator platform
    std::string& mBuffer;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    StringByteOutput(std::string& str) noexcept : mBuffer(str) {}
#endif // @header-generator platform

public:
    // prevent constructor by default
    StringByteOutput& operator=(StringByteOutput const&);
    StringByteOutput(StringByteOutput const&);
    StringByteOutput();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StringByteOutput();

    virtual void writeBytes(void const*, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void writeBytes(void const* data, uint64 bytes) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeBytes(void const*, ulong);
#else // @header-generator platform
    MCAPI void $writeBytes(void const* data, uint64 bytes);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
