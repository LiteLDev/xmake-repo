#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class DebugInfoMessageDispatcher;
struct ActorUniqueID;
// clang-format on

class DebugInfoPacketHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<DebugInfoMessageDispatcher>> mDebugInfoMessageDispatcher;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugInfoPacketHandler();
};
#else // @header-generator platform
class DebugInfoPacketHandler {};
#endif // @header-generator platform
