#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum PacketReliability : uint {
    UNRELIABLE                        = 0,
    UNRELIABLE_SEQUENCED              = 1,
    RELIABLE                          = 2,
    RELIABLE_ORDERED                  = 3,
    RELIABLE_SEQUENCED                = 4,
    UNRELIABLE_WITH_ACK_RECEIPT       = 5,
    RELIABLE_WITH_ACK_RECEIPT         = 6,
    RELIABLE_ORDERED_WITH_ACK_RECEIPT = 7,
    NUMBER_OF_RELIABILITIES           = 8,
#else // @header-generator platform
enum class PacketReliability : int {
    Unreliable                    = 0,
    UnreliableSequenced           = 1,
    Reliable                      = 2,
    ReliableOrdered               = 3,
    ReliableSequenced             = 4,
    UnreliableWithAckReceipt      = 5,
    ReliableWithAckReceipt        = 6,
    ReliableOrderedWithAckReceipt = 7,
    NumberOfReliabilities         = 8,
#endif // @header-generator platform
};
