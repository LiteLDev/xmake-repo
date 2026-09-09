#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDataOutput();

    virtual void writeString(std::string_view) = 0;

    virtual void writeLongString(std::string_view) = 0;

    virtual void writeFloat(float) = 0;

    virtual void writeDouble(double) = 0;

    virtual void writeByte(char) = 0;

    virtual void writeShort(short) = 0;

    virtual void writeInt(int) = 0;

    virtual void writeLongLong(long) = 0;

    virtual void writeBytes(void const*, ulong) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
