#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataOutput.h"

class BytesDataOutput : public ::IDataOutput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void writeString(std::string_view);

    virtual void writeLongString(std::string_view);

    virtual void writeFloat(float);

    virtual void writeDouble(double);

    virtual void writeByte(char);

    virtual void writeShort(short);

    virtual void writeInt(int);

    virtual void writeLongLong(long);

    virtual void writeBytes(void const*, ulong) = 0;
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
    // NOLINTEND
};
