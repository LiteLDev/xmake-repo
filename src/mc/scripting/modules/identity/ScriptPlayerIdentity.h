#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleIdentity {

class ScriptPlayerIdentity {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayer;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkddc155;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPlayerIdentity& operator=(ScriptPlayerIdentity const&);
    ScriptPlayerIdentity(ScriptPlayerIdentity const&);
    ScriptPlayerIdentity();
#endif // @header-generator platform
};

} // namespace ScriptModuleIdentity
