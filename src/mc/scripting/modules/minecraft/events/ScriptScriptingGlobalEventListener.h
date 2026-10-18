#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/scripting/modules/minecraft/Listener.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/Listener.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScriptingEventListener.h"

// auto generated forward declare list
// clang-format off
struct ScriptCommandMessageEvent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils { struct Listener; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptScriptingGlobalEventListener : public ::EventListenerDispatcher<ScriptingEventListener> {
#else // @header-generator platform
class ScriptScriptingGlobalEventListener : public ::EventListenerDispatcher<::ScriptingEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>> mListeners;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>>
        mListeners;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptScriptingGlobalEventListener();
#else // @header-generator platform
    virtual ~ScriptScriptingGlobalEventListener() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ScriptCommandMessageEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::EventResult onEvent(::ScriptCommandMessageEvent const& scriptCommandMessageEvent) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ScriptCommandMessageEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ScriptCommandMessageEvent const& scriptCommandMessageEvent);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
