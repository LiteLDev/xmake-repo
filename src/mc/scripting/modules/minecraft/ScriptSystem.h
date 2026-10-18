#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Generator.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/device/ScriptSystemInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { class DependencyLocator; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptSystemInfo; }
#endif // @header-generator platform
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct InvalidArgumentError; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    ::ll::UntypedStorage<8, 32>                               mSystemAfterEventsHandle;
    ::ll::UntypedStorage<8, 32>                               mSystemBeforeEventsHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ScriptModuleMinecraft::ScriptGlobalEventListeners*>> mGlobalEventListeners;
    ::ll::UntypedStorage<8, 40>                                                                   mSystemInfo;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents>>
        mSystemAfterEventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents>>
        mSystemBeforeEventsHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ScriptModuleMinecraft::ScriptGlobalEventListeners*>>
        mGlobalEventListeners;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemInfo>>>
        mSystemInfo;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystem& operator=(ScriptSystem const&);
    ScriptSystem(ScriptSystem const&);
    ScriptSystem();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptSystem(::ScriptModuleMinecraft::ScriptSystem&&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error>, ::Scripting::EngineError>
    _waitTicks(::Scripting::ScriptObjectFactory& factory, uint numberOfTicks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<Scripting::Promise<void, Scripting::Error>, Scripting::EngineError>
    _waitTicks(::Scripting::ScriptObjectFactory&, uint);
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptSystem& operator=(::ScriptModuleMinecraft::ScriptSystem&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptSystemAfterEvents> getSystemAfterEvents();
#else // @header-generator platform
    MCAPI uint runInterval(::Scripting::Closure<void()> closure, ::std::optional<uint> interval);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptSystemBeforeEvents>
    getSystemBeforeEvents();
#else // @header-generator platform
    MCAPI uint runTimeout(::Scripting::Closure<void()> closure, ::std::optional<uint> delay);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptSystem& operator=(::ScriptModuleMinecraft::ScriptSystem&&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error>, ::Scripting::EngineError>
    waitTicks(::Scripting::ScriptObjectFactory& factory, uint numberOfTicks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint runInterval(::Scripting::Closure<void()>, std::optional<uint>);

    MCNAPI uint runTimeout(::Scripting::Closure<void()>, std::optional<uint>);

    MCNAPI ::Scripting::Result<Scripting::Promise<void, Scripting::Error>, Scripting::EngineError>
    waitTicks(::Scripting::ScriptObjectFactory&, uint);

    MCNAPI ::Scripting::Result<Scripting::Promise<void, Scripting::Error>, Scripting::EngineError>
    waitTicksV1(::Scripting::ScriptObjectFactory&, uint);
#else // @header-generator platform
    MCAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error>, ::Scripting::EngineError>
    waitTicksV1(::Scripting::ScriptObjectFactory& factory, uint numberOfTicks);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSystem&&);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
