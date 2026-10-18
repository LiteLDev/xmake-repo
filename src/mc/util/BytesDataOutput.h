#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataOutput.h"

class BytesDataOutput : public ::IDataOutput {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeString(std::string_view);
#else // @header-generator platform
    virtual void writeString(::std::string_view v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeLongString(std::string_view);
#else // @header-generator platform
    virtual void writeLongString(::std::string_view v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeFloat(float);
#else // @header-generator platform
    virtual void writeFloat(float v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeDouble(double);
#else // @header-generator platform
    virtual void writeDouble(double v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeByte(char);
#else // @header-generator platform
    virtual void writeByte(char v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeShort(short);
#else // @header-generator platform
    virtual void writeShort(short v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeInt(int);
#else // @header-generator platform
    virtual void writeInt(int v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeLongLong(long);
#else // @header-generator platform
    virtual void writeLongLong(int64 v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeBytes(void const*, ulong) = 0;
#else // @header-generator platform
    virtual void writeBytes(void const* data, uint64 bytes) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeString(std::string_view);
#else // @header-generator platform
    MCAPI void $writeString(::std::string_view v);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeLongString(std::string_view);
#else // @header-generator platform
    MCAPI void $writeLongString(::std::string_view v);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeFloat(float);
#else // @header-generator platform
    MCAPI void $writeFloat(float v);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeDouble(double);
#else // @header-generator platform
    MCAPI void $writeDouble(double v);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeByte(char);
#else // @header-generator platform
    MCAPI void $writeByte(char v);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeShort(short);
#else // @header-generator platform
    MCAPI void $writeShort(short v);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeInt(int);
#else // @header-generator platform
    MCAPI void $writeInt(int v);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeLongLong(long);
#else // @header-generator platform
    MCAPI void $writeLongLong(int64 v);


#endif // @header-generator platform
    // NOLINTEND
};
