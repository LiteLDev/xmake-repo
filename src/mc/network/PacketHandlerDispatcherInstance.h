#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/Packet.h"

class NetworkIdentifier;
class NetEventCallback;

template <class PacketType, bool Unknown = false>
class PacketHandlerDispatcherInstance {
public:
    MCAPI void $handle(NetworkIdentifier const&, NetEventCallback&, class std::shared_ptr<Packet>&) const;
};
#endif // @header-generator platform
