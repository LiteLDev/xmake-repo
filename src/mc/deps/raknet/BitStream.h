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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool AddBitsAndReallocate(uint const);
#else // @header-generator platform
    MCAPI bool AddBitsAndReallocate(uint numberOfBitsToWrite);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void IgnoreBytes(uint const);
#else // @header-generator platform
    MCAPI bool Read(char* outByteArray, uint numberOfBytes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void PadWithZeroToByteLength(uint);
#else // @header-generator platform
    MCAPI bool ReadAlignedBytes(uchar* inOutByteArray, uint numberOfBytesToRead);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool Read(char*, uint const);
#else // @header-generator platform
    MCAPI bool ReadAlignedVar16(char* inOutByteArray);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool ReadAlignedBytes(uchar*, uint const);
#else // @header-generator platform
    MCAPI bool ReadAlignedVar32(char* inOutByteArray);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool ReadAlignedVar16(char*);
#else // @header-generator platform
    MCAPI bool ReadBits(uchar* inOutByteArray, uint numberOfBitsToRead, bool alignBitsToRight);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool ReadAlignedVar32(char*);
#else // @header-generator platform
    MCAPI void Write(::RakNet::BitStream* bitStream, uint numberOfBits);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool ReadAlignedVar8(char*);
#else // @header-generator platform
    MCAPI void Write(char const* inputByteArray, uint numberOfBytes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool ReadBits(uchar*, uint, bool const);
#else // @header-generator platform
    MCAPI void WriteAlignedBytes(uchar const* inByteArray, uint numberOfBytesToWrite);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void Reset();
#else // @header-generator platform
    MCAPI void WriteAlignedVar16(char const* inByteArray);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void ResetReadPointer();
#else // @header-generator platform
    MCAPI void WriteAlignedVar32(char const* inByteArray);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void WriteBits(uchar const* inByteArray, uint numberOfBitsToWrite, bool rightAlignedBits);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
