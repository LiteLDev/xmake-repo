#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/InternalPacketFixedSizeTransmissionHeader.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/uint24_t.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct InternalPacketRefCountedData; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace RakNet {

struct InternalPacket : public ::RakNet::InternalPacketFixedSizeTransmissionHeader {
public:
    // InternalPacket inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum AllocationScheme : uint {
        NORMAL      = 0,
        REF_COUNTED = 1,
        STACK       = 2,
#else // @header-generator platform
    enum class AllocationScheme : int {
        Normal     = 0,
        RefCounted = 1,
        Stack      = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>                         messageInternalOrder;
    ::ll::TypedStorage<1, 1, bool>                                       messageNumberAssigned;
    ::ll::TypedStorage<8, 8, ulong>                                      creationTime;
    ::ll::TypedStorage<8, 8, ulong>                                      nextActionTime;
    ::ll::TypedStorage<8, 8, ulong>                                      retransmissionTime;
    ::ll::TypedStorage<4, 4, uint>                                       headerLength;
    ::ll::TypedStorage<8, 8, uchar*>                                     data;
    ::ll::TypedStorage<4, 4, ::RakNet::InternalPacket::AllocationScheme> allocationScheme;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacketRefCountedData*>    refCountedData;
    ::ll::TypedStorage<1, 1, uchar>                                      timesSent;
    ::ll::TypedStorage<4, 4, ::PacketPriority>                           priority;
    ::ll::TypedStorage<4, 4, uint>                                       sendReceiptSerial;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>                  resendPrev;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>                  resendNext;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>                  unreliablePrev;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>                  unreliableNext;
    ::ll::TypedStorage<1, 128, uchar[128]>                               stackData;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>   mUnk6d96d0;
    ::ll::UntypedStorage<1, 1>   mUnkf5dc1a;
    ::ll::UntypedStorage<8, 8>   mUnk60021b;
    ::ll::UntypedStorage<8, 8>   mUnkfc1947;
    ::ll::UntypedStorage<8, 8>   mUnka7fed7;
    ::ll::UntypedStorage<4, 4>   mUnk78226b;
    ::ll::UntypedStorage<8, 8>   mUnk71f929;
    ::ll::UntypedStorage<4, 4>   mUnk9df441;
    ::ll::UntypedStorage<8, 8>   mUnkceb836;
    ::ll::UntypedStorage<1, 1>   mUnk971275;
    ::ll::UntypedStorage<4, 4>   mUnk93358a;
    ::ll::UntypedStorage<4, 4>   mUnk9be624;
    ::ll::UntypedStorage<8, 8>   mUnka9f3b2;
    ::ll::UntypedStorage<8, 8>   mUnkc2a546;
    ::ll::UntypedStorage<8, 8>   mUnk4c9874;
    ::ll::UntypedStorage<8, 8>   mUnkd1b8f3;
    ::ll::UntypedStorage<1, 128> mUnk80d59c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    InternalPacket& operator=(InternalPacket const&);
#endif // @header-generator platform
    InternalPacket(InternalPacket const&);
    InternalPacket();
};

} // namespace RakNet
