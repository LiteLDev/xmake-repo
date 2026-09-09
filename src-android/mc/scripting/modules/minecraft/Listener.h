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
    ::ll::UntypedStorage<8, 16>                               mScriptEventsHandle;
    ::ll::TypedStorage<1, 1, bool>                            mIsV010;
    // NOLINTEND

public:
    // prevent constructor by default
    Listener& operator=(Listener const&);
    Listener();
};

} // namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils
