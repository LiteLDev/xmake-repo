#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet::EventFilters { struct ScriptPacketEventFilterData; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraftNet::EventFilters {

struct ScriptPacketEventFilter {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ScriptPacketEventFilter inner types define
    using Data = ::ScriptModuleMinecraftNet::EventFilters::ScriptPacketEventFilterData;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::vector<MinecraftPacketIds>>> mMonitoredPacketIds;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<MinecraftPacketIds>>> mIgnoredPacketIds;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk688221;
    ::ll::UntypedStorage<8, 32> mUnked9f60;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPacketEventFilter& operator=(ScriptPacketEventFilter const&);
    ScriptPacketEventFilter(ScriptPacketEventFilter const&);
    ScriptPacketEventFilter();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet::EventFilters
