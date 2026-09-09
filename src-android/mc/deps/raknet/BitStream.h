#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class BitStream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         numberOfBitsUsed;
    ::ll::TypedStorage<4, 4, uint>         numberOfBitsAllocated;
    ::ll::TypedStorage<4, 4, uint>         readOffset;
    ::ll::TypedStorage<8, 8, uchar*>       data;
    ::ll::TypedStorage<1, 1, bool>         copyData;
    ::ll::TypedStorage<1, 256, uchar[256]> stackData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddBitsAndReallocate(uint const);

    MCNAPI void IgnoreBytes(uint const);

    MCNAPI void PadWithZeroToByteLength(uint);

    MCNAPI bool Read(char*, uint const);

    MCNAPI bool ReadAlignedBytes(uchar*, uint const);

    MCNAPI bool ReadAlignedVar16(char*);

    MCNAPI bool ReadAlignedVar32(char*);

    MCNAPI bool ReadAlignedVar8(char*);

    MCNAPI bool ReadBits(uchar*, uint, bool const);

    MCNAPI void Reset();

    MCNAPI void ResetReadPointer();

    MCNAPI void Write(char const*, uint const);

    MCNAPI void Write(::RakNet::BitStream*, uint);

    MCNAPI void Write(::RakNet::BitStream&, uint);

    MCNAPI void Write0();

    MCNAPI void Write1();

    MCNAPI void WriteAlignedBytes(uchar const*, uint const);

    MCNAPI void WriteAlignedVar16(char const*);

    MCNAPI void WriteAlignedVar32(char const*);

    MCNAPI void WriteAlignedVar8(char const*);

    MCNAPI void WriteBits(uchar const*, uint, bool const);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool IsNetworkOrderInternal();

    MCNAPI static void ReverseBytes(uchar*, uchar*, uint const);
    // NOLINTEND
};

} // namespace RakNet
