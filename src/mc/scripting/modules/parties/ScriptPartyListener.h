#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleParties { class ScriptPartiesAfterEvents; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleParties {

struct ScriptPartyListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::UntypedStorage<8, 16>                               mScriptEventsHandle;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkbb873a;
    ::ll::UntypedStorage<8, 16> mUnk991d59;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPartyListener& operator=(ScriptPartyListener const&);
    ScriptPartyListener(ScriptPartyListener const&);
    ScriptPartyListener();
#endif // @header-generator platform
};

} // namespace ScriptModuleParties
