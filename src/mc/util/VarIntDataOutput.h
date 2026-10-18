#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
// clang-format on

class VarIntDataOutput : public ::BytesDataOutput {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BinaryStream&> mStream;
#else // @header-generator platform
    ::BinaryStream& mStream;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    VarIntDataOutput(BinaryStream& bs) : mStream(bs) {}
#endif // @header-generator platform

public:
    // prevent constructor by default
    VarIntDataOutput& operator=(VarIntDataOutput const&);
    VarIntDataOutput(VarIntDataOutput const&);
    VarIntDataOutput();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VarIntDataOutput();
#else // @header-generator platform
    virtual void writeString(::std::string_view v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeString(std::string_view);
#else // @header-generator platform
    virtual void writeLongString(::std::string_view v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeLongString(std::string_view);
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
    virtual void writeByte(char v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeByte(char);
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
#else // @header-generator platform
    virtual void writeLongLong(int64 v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeLongLong(long);

    virtual void writeBytes(void const*, ulong);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit VarIntDataOutput(::BinaryStream&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BinaryStream&);
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
