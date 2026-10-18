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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class RegistryManager; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptContext; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClosureType; }
namespace Scripting { struct CoRoutineResult; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct FutureType; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct PromiseType; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct RuntimeContextData; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting { struct WatchdogSettings; }
// clang-format on

namespace Scripting {

#if defined(LL_PLAT_A) // @header-generator platform
class NativeRuntime : public ::Scripting::IRuntime, public ::std::enable_shared_from_this<Scripting::NativeRuntime> {
#else // @header-generator platform
class NativeRuntime : public ::Scripting::IRuntime, public ::std::enable_shared_from_this<::Scripting::NativeRuntime> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::RegistryManager&> mRegistryManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, std::unique_ptr<Scripting::RuntimeContextData>>> mContextObjects;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkff21cf;
    ::ll::UntypedStorage<8, 64> mUnk26c3ec;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NativeRuntime& operator=(NativeRuntime const&);
    NativeRuntime(NativeRuntime const&);
    NativeRuntime();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~NativeRuntime() = default;
#else // @header-generator platform
    virtual ~NativeRuntime() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::ScriptContext> createContext(::Scripting::ModuleBindingBundle&&, ::Scripting::IDependencyLoader*, ::Scripting::IPrinter*, ::Scripting::ContextConfig const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::ScriptContext> createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void destroyContext(::Scripting::ContextId);
#else // @header-generator platform
    virtual void destroyContext(::Scripting::ContextId contextId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny run(::Scripting::ContextId, ::Scripting::IPayload*, std::optional<Scripting::Privilege>);
#else // @header-generator platform
    virtual ::Scripting::ResultAny
    run(::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny call(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::ClosureType>, ::entt::meta_any*, uint, ::entt::meta_type const&, std::optional<Scripting::Privilege>);
#else // @header-generator platform
    virtual ::Scripting::ResultAny call(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType>,
        ::entt::meta_any*,
        uint,
        ::entt::meta_type const&,
        ::std::optional<::Scripting::Privilege>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny resolve(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&);
#else // @header-generator platform
    virtual ::Scripting::ResultAny resolve(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType>,
        ::entt::meta_any&
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny reject(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&);
#else // @header-generator platform
    virtual ::Scripting::ResultAny reject(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType>,
        ::entt::meta_any&
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::FutureStatus getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::FutureType>) const;
#else // @header-generator platform
    virtual ::Scripting::FutureStatus
        getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::FutureType>) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny getFutureResult(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::FutureType>, ::entt::meta_type const&) const;
#else // @header-generator platform
    virtual ::Scripting::ResultAny getFutureResult(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType>,
        ::entt::meta_type const&
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<Scripting::CoRoutineResult> executeCoroutines(std::optional<Scripting::Privilege>);
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
        executeCoroutines(::std::optional<::Scripting::Privilege>) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasPendingJobs();
#else // @header-generator platform
    virtual bool hasPendingJobs() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::IDebuggerController* enableDebugger(::Scripting::IDebuggerTransport&, ::Scripting::IBreakpointValidator&);
#else // @header-generator platform
    virtual ::Scripting::IDebuggerController*
    enableDebugger(::Scripting::IDebuggerTransport&, ::Scripting::IBreakpointValidator&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void disableDebugger();
#else // @header-generator platform
    virtual void disableDebugger() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startProfiler();
#else // @header-generator platform
    virtual void startProfiler() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopProfiler(std::function<void (std::string_view)>, std::optional<std::reference_wrapper<const std::string>>);
#else // @header-generator platform
    virtual void stopProfiler(
        ::std::function<void(::std::string_view)>,
        ::std::optional<::std::reference_wrapper<::std::string const>>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::RuntimeStats computeRuntimeStats() const;
#else // @header-generator platform
    virtual ::Scripting::RuntimeStats computeRuntimeStats() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings);
#else // @header-generator platform
    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void disableWatchdog();
#else // @header-generator platform
    virtual void disableWatchdog() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::IWatchdog* getWatchdog() const;
#else // @header-generator platform
    virtual ::Scripting::IWatchdog* getWatchdog() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::TypeNameInfo> getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<::Scripting::TypeNameInfo>
    getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::std::optional<::Scripting::ScriptContext> $createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&
    );

    MCNAPI void $destroyContext(::Scripting::ContextId contextId);

    MCNAPI ::Scripting::ResultAny $run(
        ::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege
    );

    MCNAPI ::Scripting::ResultAny $call(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType>,
        ::entt::meta_any*,
        uint,
        ::entt::meta_type const&,
        ::std::optional<::Scripting::Privilege>
    );

    MCNAPI ::Scripting::ResultAny
    $resolve(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::PromiseType>, ::entt::meta_any&);

    MCNAPI ::Scripting::ResultAny
    $reject(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::PromiseType>, ::entt::meta_any&);

    MCNAPI ::Scripting::FutureStatus
        $getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::FutureType>) const;

    MCNAPI ::Scripting::ResultAny $getFutureResult(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType>,
        ::entt::meta_type const&
    ) const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
        $executeCoroutines(::std::optional<::Scripting::Privilege>);

    MCNAPI bool $hasPendingJobs();

    MCNAPI ::Scripting::IDebuggerController*
    $enableDebugger(::Scripting::IDebuggerTransport&, ::Scripting::IBreakpointValidator&);

    MCNAPI void $disableDebugger();

    MCNAPI void $startProfiler();

    MCNAPI void $stopProfiler(
        ::std::function<void(::std::string_view)>,
        ::std::optional<::std::reference_wrapper<::std::string const>>
    );

    MCNAPI ::Scripting::RuntimeStats $computeRuntimeStats() const;

    MCNAPI ::Scripting::IWatchdog* $enableWatchdog(::Scripting::WatchdogSettings);

    MCNAPI void $disableWatchdog();

    MCNAPI ::Scripting::IWatchdog* $getWatchdog() const;

    MCNAPI ::std::optional<::Scripting::TypeNameInfo>
    $getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const;
#endif


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
