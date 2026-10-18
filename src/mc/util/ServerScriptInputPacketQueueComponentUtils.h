#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PlayerAuthInputPacket;
struct ServerScriptInputPacketQueueComponent;
// clang-format on

namespace ServerScriptInputPacketQueueComponentUtils {
// functions
// NOLINTBEGIN
MCNAPI bool
addPlayerAuthInputPacket(::ServerScriptInputPacketQueueComponent& component, ::PlayerAuthInputPacket const& packet);
// NOLINTEND

} // namespace ServerScriptInputPacketQueueComponentUtils
#endif // @header-generator platform
