#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils {

struct Listener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                               mScriptEventsHandle;
    ::ll::TypedStorage<1, 1, bool>                            mIsV010;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents>>
                                   mScriptEventsHandle;
    ::ll::TypedStorage<1, 1, bool> mIsV010;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Listener& operator=(Listener const&);
    Listener();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils
