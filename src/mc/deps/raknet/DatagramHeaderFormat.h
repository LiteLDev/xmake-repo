#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/raknet/uint24_t.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

struct DatagramHeaderFormat {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t> datagramNumber;
    ::ll::TypedStorage<4, 4, float>              AS;
    ::ll::TypedStorage<1, 1, bool>               isACK;
    ::ll::TypedStorage<1, 1, bool>               isNAK;
    ::ll::TypedStorage<1, 1, bool>               isPacketPair;
    ::ll::TypedStorage<1, 1, bool>               hasBAndAS;
    ::ll::TypedStorage<1, 1, bool>               isContinuousSend;
    ::ll::TypedStorage<1, 1, bool>               needsBAndAs;
    ::ll::TypedStorage<1, 1, bool>               isValid;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkba9ad5;
    ::ll::UntypedStorage<4, 4> mUnkdb7655;
    ::ll::UntypedStorage<1, 1> mUnkf4d225;
    ::ll::UntypedStorage<1, 1> mUnk59378d;
    ::ll::UntypedStorage<1, 1> mUnk1d0296;
    ::ll::UntypedStorage<1, 1> mUnk2ec43d;
    ::ll::UntypedStorage<1, 1> mUnk741501;
    ::ll::UntypedStorage<1, 1> mUnkcacac8;
    ::ll::UntypedStorage<1, 1> mUnk5c98de;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DatagramHeaderFormat& operator=(DatagramHeaderFormat const&);
    DatagramHeaderFormat(DatagramHeaderFormat const&);
    DatagramHeaderFormat();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void Serialize(::RakNet::BitStream*);
#else // @header-generator platform
    MCAPI void Serialize(::RakNet::BitStream* b);
#endif // @header-generator platform
    // NOLINTEND
};
