#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteOutput.h"

class BigEndianStringByteOutput : public ::StringByteOutput {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BigEndianStringByteOutput();
#else // @header-generator platform
    using StringByteOutput::StringByteOutput;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BigEndianStringByteOutput();
#else // @header-generator platform
    virtual void writeFloat(float v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeFloat(float);
#else // @header-generator platform
    virtual void writeDouble(double v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeDouble(double);
#else // @header-generator platform
    virtual void writeShort(short v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeShort(short);
#else // @header-generator platform
    virtual void writeInt(int v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeInt(int);

    virtual void writeLongLong(long);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void writeLongLong(int64 v) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
