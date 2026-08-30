#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/deps/script_core/script_engine/scripting/Generator.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/scripting/modules/minecraft/device/ScriptSystemInfo.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystem {
public:
    // ScriptSystem inner types define
    using Key = ::ScriptModuleMinecraft::ScriptGlobalEventListeners*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    ::ll::UntypedStorage<8, 32>                               mSystemAfterEventsHandle;
    ::ll::UntypedStorage<8, 32>                               mSystemBeforeEventsHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ScriptModuleMinecraft::ScriptGlobalEventListeners*>> mGlobalEventListeners;
    ::ll::UntypedStorage<8, 40>                                                                   mSystemInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystem& operator=(ScriptSystem const&);
    ScriptSystem(ScriptSystem const&);
    ScriptSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSystem(::ScriptModuleMinecraft::ScriptSystem&&);

    MCNAPI ::Scripting::Result<Scripting::Promise<void, Scripting::Error>, Scripting::EngineError>
    _waitTicks(::Scripting::ScriptObjectFactory&, uint);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptSystemAfterEvents> getSystemAfterEvents();

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptSystemBeforeEvents>
    getSystemBeforeEvents();

    MCNAPI ::ScriptModuleMinecraft::ScriptSystem& operator=(::ScriptModuleMinecraft::ScriptSystem&&);

    MCNAPI uint runInterval(::Scripting::Closure<void()>, std::optional<uint>);

    MCNAPI uint runTimeout(::Scripting::Closure<void()>, std::optional<uint>);

    MCNAPI ::Scripting::Result<Scripting::Promise<void, Scripting::Error>, Scripting::EngineError>
    waitTicks(::Scripting::ScriptObjectFactory&, uint);

    MCNAPI ::Scripting::Result<Scripting::Promise<void, Scripting::Error>, Scripting::EngineError>
    waitTicksV1(::Scripting::ScriptObjectFactory&, uint);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSystem&&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
