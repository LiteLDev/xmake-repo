#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ScriptDeferredEventCoordinator;
class ServerNetworkEventCoordinator;
namespace ScriptModuleMinecraft { class ScriptAfterEventList; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
#else // @header-generator platform
class ScriptDeferredFlushTracker;
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleParties {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptPartiesAfterEvents : public ::Scripting::WeakHandleFromThis<ScriptModuleParties::ScriptPartiesAfterEvents> {
#else // @header-generator platform
class ScriptPartiesAfterEvents
: public ::Scripting::WeakHandleFromThis<::ScriptModuleParties::ScriptPartiesAfterEvents> {
#endif // @header-generator platform
public:
    // ScriptPartiesAfterEvents inner types declare
    // clang-format off
    class ScriptPartiesAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptPartiesAfterEvents inner types define
    class ScriptPartiesAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
#if defined(LL_PLAT_A) // @header-generator platform
          ScriptModuleParties::ScriptPartiesAfterEvents> {};
#else // @header-generator platform
          ::ScriptModuleParties::ScriptPartiesAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&) /*override*/;
        // NOLINTEND
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::ServerNetworkEventCoordinator&> mServerNetworkEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&> mScriptDeferredEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*> mGlobalEventListeners;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleParties::ScriptPartiesAfterEvents::ScriptPartiesAfterEventsDeferredEventListener>> mScriptDeferredEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptAfterEventList>> mEvents;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk1b47b3;
    ::ll::UntypedStorage<8, 8>  mUnkeaac04;
    ::ll::UntypedStorage<8, 8>  mUnked9ec5;
    ::ll::UntypedStorage<8, 8>  mUnk4e55c8;
    ::ll::UntypedStorage<8, 8>  mUnk85f972;
    ::ll::UntypedStorage<8, 8>  mUnk1ea4e8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartiesAfterEvents& operator=(ScriptPartiesAfterEvents const&);
    ScriptPartiesAfterEvents(ScriptPartiesAfterEvents const&);
    ScriptPartiesAfterEvents();
};

} // namespace ScriptModuleParties
