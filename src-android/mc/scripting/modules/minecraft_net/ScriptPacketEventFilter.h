#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet::EventFilters { struct ScriptPacketEventFilterData; }
// clang-format on

namespace ScriptModuleMinecraftNet::EventFilters {

struct ScriptPacketEventFilter {
public:
    // ScriptPacketEventFilter inner types define
    using Data = ::ScriptModuleMinecraftNet::EventFilters::ScriptPacketEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::vector<MinecraftPacketIds>>> mMonitoredPacketIds;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<MinecraftPacketIds>>> mIgnoredPacketIds;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet::EventFilters
