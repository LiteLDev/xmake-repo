#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { struct EmptyFilter; }
namespace ScriptModuleMinecraft { struct ScriptModuleShutdownBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptModuleStartupBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWatchdogTerminateBeforeEvent; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1, typename T2> class ScriptFilteredEventSignal; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemBeforeEvents
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptSystemBeforeEvents> {
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
        ::ll::TypedStorage<8, 24, std::string> name;
        ::ll::TypedStorage<8, 8, ulong>        count;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::UntypedStorage<8, 16>                               mHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    ::ll::UntypedStorage<8, 32>                               mBeforeWatchdogTerminateSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeModuleStartupSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeModuleShutdownSignal;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystemBeforeEvents& operator=(ScriptSystemBeforeEvents const&);
    ScriptSystemBeforeEvents(ScriptSystemBeforeEvents const&);
    ScriptSystemBeforeEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSystemBeforeEvents(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);

    MCNAPI std::vector<ScriptModuleMinecraft::ScriptSystemBeforeEvents::SignalNameSubscriberCount>
           getFineGrainedSignalSubscriberStats() const;

    MCNAPI void onBeforeModuleShutdown(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptModuleShutdownBeforeEvent>
    );

    MCNAPI void onBeforeModuleStartup(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent>
    );

    MCNAPI void onBeforeWatchdogTerminate(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent>
    );

    MCNAPI void registerHandler(::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptSystemBeforeEvents>);

    MCNAPI ~ScriptSystemBeforeEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
