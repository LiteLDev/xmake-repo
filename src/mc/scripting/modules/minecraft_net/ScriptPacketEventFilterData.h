#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraftNet::EventFilters {

struct ScriptPacketEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds> mPacketId;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk6633f9;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPacketEventFilterData& operator=(ScriptPacketEventFilterData const&);
    ScriptPacketEventFilterData(ScriptPacketEventFilterData const&);
    ScriptPacketEventFilterData();
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet::EventFilters
