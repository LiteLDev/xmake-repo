#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#else // @header-generator platform
#include "mc/scripting/modules/minecraft/events/ScriptFilteredEventSignal.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { struct EmptyFilter; }
namespace ScriptModuleMinecraft { struct ScriptModuleShutdownBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptModuleStartupBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWatchdogTerminateBeforeEvent; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { template<typename T0, typename T1, typename T2> class ScriptFilteredEventSignal; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemBeforeEvents
#if defined(LL_PLAT_A) // @header-generator platform
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptSystemBeforeEvents> {
#else // @header-generator platform
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> {
#endif // @header-generator platform
public:
    // ScriptSystemBeforeEvents inner types declare
    // clang-format off
    struct SignalNameSubscriberCount;
    // clang-format on

    // ScriptSystemBeforeEvents inner types define
    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> name;
        ::ll::TypedStorage<8, 8, ulong>        count;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<8, 8, uint64>         count;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                               mHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    ::ll::UntypedStorage<8, 32>                               mBeforeWatchdogTerminateSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeModuleStartupSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeModuleShutdownSignal;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents>>
                                                              mHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeWatchdogTerminateSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent,
            2,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeModuleStartupSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptModuleShutdownBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeModuleShutdownSignal;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ScriptSystemBeforeEvents& operator=(ScriptSystemBeforeEvents const&);
    ScriptSystemBeforeEvents(ScriptSystemBeforeEvents const&);
#else // @header-generator platform
#endif // @header-generator platform
    ScriptSystemBeforeEvents();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptSystemBeforeEvents(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
#else // @header-generator platform
    MCAPI ScriptSystemBeforeEvents(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::ServerLevel*> level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ScriptModuleMinecraft::ScriptSystemBeforeEvents::SignalNameSubscriberCount>
           getFineGrainedSignalSubscriberStats() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptSystemBeforeEvents::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onBeforeModuleShutdown(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptModuleShutdownBeforeEvent>
#else // @header-generator platform
    MCAPI void onBeforeModuleShutdown(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptModuleShutdownBeforeEvent> eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onBeforeModuleStartup(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent>
#else // @header-generator platform
    MCAPI void onBeforeModuleStartup(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent> eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onBeforeWatchdogTerminate(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent>
#else // @header-generator platform
    MCAPI void onBeforeWatchdogTerminate(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent>
            beforeWatchdogTerminateEvent
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerHandler(::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptSystemBeforeEvents>);

    MCNAPI ~ScriptSystemBeforeEvents();
#else // @header-generator platform
    MCAPI ~ScriptSystemBeforeEvents();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
#else // @header-generator platform
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
#else // @header-generator platform
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::ServerLevel*> level);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
