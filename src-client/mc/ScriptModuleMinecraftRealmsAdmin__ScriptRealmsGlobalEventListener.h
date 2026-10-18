#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ScriptModuleMinecraftRealmsAdmin__ScriptRealmsListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/LevelEventListener.h"

namespace ScriptModuleMinecraftRealmsAdmin {

class ScriptRealmsGlobalEventListener : public ::EventListenerDispatcher<LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraftRealmsAdmin::ScriptRealmsListener>> mListeners;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftRealmsAdmin
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
