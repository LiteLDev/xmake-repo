#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/FutureStatus.h"
#include "mc/deps/script_core/runtime/scripting/IRuntime.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IBreakpointValidator; }
namespace Scripting { class IDebuggerController; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPayload; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IWatchdog; }
namespace Scripting { class RegistryManager; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptContext; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClosureType; }
namespace Scripting { struct CoRoutineResult; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct FutureType; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct PromiseType; }
namespace Scripting { struct RuntimeContextData; }
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting { struct WatchdogSettings; }
// clang-format on

namespace Scripting {

class NativeRuntime : public ::Scripting::IRuntime, public ::std::enable_shared_from_this<Scripting::NativeRuntime> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::RegistryManager&> mRegistryManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, std::unique_ptr<Scripting::RuntimeContextData>>> mContextObjects;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeRuntime& operator=(NativeRuntime const&);
    NativeRuntime(NativeRuntime const&);
    NativeRuntime();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~NativeRuntime() = default;

    virtual std::optional<Scripting::ScriptContext> createContext(::Scripting::ModuleBindingBundle&&, ::Scripting::IDependencyLoader*, ::Scripting::IPrinter*, ::Scripting::ContextConfig const&);

    virtual void destroyContext(::Scripting::ContextId);

    virtual ::Scripting::ResultAny run(::Scripting::ContextId, ::Scripting::IPayload*, std::optional<Scripting::Privilege>);

    virtual ::Scripting::ResultAny call(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::ClosureType>, ::entt::meta_any*, uint, ::entt::meta_type const&, std::optional<Scripting::Privilege>);

    virtual ::Scripting::ResultAny resolve(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&);

    virtual ::Scripting::ResultAny reject(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&);

    virtual ::Scripting::FutureStatus getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::FutureType>) const;

    virtual ::Scripting::ResultAny getFutureResult(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::FutureType>, ::entt::meta_type const&) const;

    virtual ::Scripting::Result_deprecated<Scripting::CoRoutineResult> executeCoroutines(std::optional<Scripting::Privilege>);

    virtual bool hasPendingJobs();

    virtual ::Scripting::IDebuggerController* enableDebugger(::Scripting::IDebuggerTransport&, ::Scripting::IBreakpointValidator&);

    virtual void disableDebugger();

    virtual void startProfiler();

    virtual void stopProfiler(std::function<void (std::string_view)>, std::optional<std::reference_wrapper<const std::string>>);

    virtual ::Scripting::RuntimeStats computeRuntimeStats() const;

    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings);

    virtual void disableWatchdog();

    virtual ::Scripting::IWatchdog* getWatchdog() const;

    virtual std::optional<Scripting::TypeNameInfo> getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const;
    // clang-format on
    // NOLINTEND
};

} // namespace Scripting
