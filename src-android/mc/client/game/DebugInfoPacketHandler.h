#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
