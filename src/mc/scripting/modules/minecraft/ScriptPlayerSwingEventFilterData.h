#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/items/ScriptHeldItemOption.h"
#include "mc/world/actor/ActorSwingSource.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptPlayerSwingEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptHeldItemOption> mHeldItemOption;
    ::ll::TypedStorage<1, 1, ::ActorSwingSource>                            mSwingSource;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptPlayerSwingEventFilterData();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft::EventFilters
