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
    ::ll::TypedStorage<8, 8, ::BinaryStream&> mStream;
    // NOLINTEND

public:
    // prevent constructor by default
    VarIntDataOutput& operator=(VarIntDataOutput const&);
    VarIntDataOutput(VarIntDataOutput const&);
    VarIntDataOutput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VarIntDataOutput();

    virtual void writeString(std::string_view);

    virtual void writeLongString(std::string_view);

    virtual void writeFloat(float);

    virtual void writeDouble(double);

    virtual void writeByte(char);

    virtual void writeShort(short);

    virtual void writeInt(int);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $writeString(std::string_view);

    MCNAPI void $writeLongString(std::string_view);

    MCNAPI void $writeFloat(float);

    MCNAPI void $writeDouble(double);

    MCNAPI void $writeByte(char);

    MCNAPI void $writeShort(short);

    MCNAPI void $writeInt(int);

    MCNAPI void $writeLongLong(long);

    MCNAPI void $writeBytes(void const*, ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
