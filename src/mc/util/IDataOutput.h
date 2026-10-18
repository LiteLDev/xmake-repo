#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IDataOutput();
#else // @header-generator platform
    virtual ~IDataOutput() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeString(std::string_view) = 0;
#else // @header-generator platform
    virtual void writeString(::std::string_view v) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeLongString(std::string_view) = 0;
#else // @header-generator platform
    virtual void writeLongString(::std::string_view v) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeFloat(float) = 0;
#else // @header-generator platform
    virtual void writeFloat(float v) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeDouble(double) = 0;
#else // @header-generator platform
    virtual void writeDouble(double v) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeByte(char) = 0;
#else // @header-generator platform
    virtual void writeByte(char v) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeShort(short) = 0;
#else // @header-generator platform
    virtual void writeShort(short v) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeInt(int) = 0;
#else // @header-generator platform
    virtual void writeInt(int v) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeLongLong(long) = 0;
#else // @header-generator platform
    virtual void writeLongLong(int64 v) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeBytes(void const*, ulong) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void writeBytes(void const* data, uint64 bytes) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
