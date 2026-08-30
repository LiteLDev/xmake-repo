#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

class ByteQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char*> data;
    ::ll::TypedStorage<4, 4, uint>  readOffset;
    ::ll::TypedStorage<4, 4, uint>  writeOffset;
    ::ll::TypedStorage<4, 4, uint>  lengthAllocated;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ByteQueue();

    MCNAPI void Clear(char const*, uint);

    MCNAPI uint GetBytesWritten() const;

    MCNAPI void IncrementReadOffset(uint);

    MCNAPI char* PeekContiguousBytes(uint*) const;

    MCNAPI bool ReadBytes(char*, uint, bool);

    MCNAPI bool WriteBytes(char const*, uint, char const*, uint);

    MCNAPI ~ByteQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace DataStructures
