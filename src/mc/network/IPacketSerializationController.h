#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class IPacketSerializationController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPacketSerializationController() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<SerializationMode> getOverrideModeForPacket(::MinecraftPacketIds) const = 0;
#else // @header-generator platform
    virtual ::std::optional<::SerializationMode> getOverrideModeForPacket(::MinecraftPacketIds id) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
