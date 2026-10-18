#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

class IPacketLimitAlgorithm {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPacketLimitAlgorithm() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IPacketLimitAlgorithm> copy() const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::IPacketLimitAlgorithm> copy() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint checkPacket(::MinecraftPacketIds) = 0;
#else // @header-generator platform
    virtual uint checkPacket(::MinecraftPacketIds packet) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
