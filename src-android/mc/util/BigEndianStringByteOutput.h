#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteOutput.h"

class BigEndianStringByteOutput : public ::StringByteOutput {
public:
    // prevent constructor by default
    BigEndianStringByteOutput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BigEndianStringByteOutput();

    virtual void writeFloat(float);

    virtual void writeDouble(double);

    virtual void writeShort(short);

    virtual void writeInt(int);

    virtual void writeLongLong(long);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $writeFloat(float);

    MCNAPI void $writeDouble(double);

    MCNAPI void $writeShort(short);

    MCNAPI void $writeInt(int);

    MCNAPI void $writeLongLong(long);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
