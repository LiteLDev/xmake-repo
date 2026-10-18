#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptPrefabServiceInstanceInteractionEventMoved {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkf1413b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabServiceInstanceInteractionEventMoved&
    operator=(ScriptPrefabServiceInstanceInteractionEventMoved const&);
    ScriptPrefabServiceInstanceInteractionEventMoved(ScriptPrefabServiceInstanceInteractionEventMoved const&);
    ScriptPrefabServiceInstanceInteractionEventMoved();
};

} // namespace Editor::ScriptModule
#endif // @header-generator platform
