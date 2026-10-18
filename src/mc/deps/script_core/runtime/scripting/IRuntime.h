#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/FutureStatus.h"
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
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptContext; }
namespace Scripting { struct ClosureType; }
namespace Scripting { struct CoRoutineResult; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct FutureType; }
namespace Scripting { struct IRuntimeMetadata; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct PromiseType; }
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting { struct WatchdogSettings; }
// clang-format on

namespace Scripting {

class IRuntime {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IRuntime() = default;

    virtual ::Scripting::IRuntimeMetadata* getMetadata() const;

    virtual void moveToThread();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::ScriptContext> createContext(::Scripting::ModuleBindingBundle&&, ::Scripting::IDependencyLoader*, ::Scripting::IPrinter*, ::Scripting::ContextConfig const&) = 0;
#else // @header-generator platform
    virtual ::std::optional<::Scripting::ScriptContext> createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&  config
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void destroyContext(::Scripting::ContextId) = 0;
#else // @header-generator platform
    virtual void destroyContext(::Scripting::ContextId contextId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny run(::Scripting::ContextId, ::Scripting::IPayload*, std::optional<Scripting::Privilege>) = 0;
#else // @header-generator platform
    virtual ::Scripting::ResultAny
    run(::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny call(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::ClosureType>, ::entt::meta_any*, uint, ::entt::meta_type const&, std::optional<Scripting::Privilege>) = 0;
#else // @header-generator platform
    virtual ::Scripting::ResultAny call(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType> closureHandle,
        ::entt::meta_any*                                        args,
        uint                                                     argc,
        ::entt::meta_type const&                                 expectedReturnType,
        ::std::optional<::Scripting::Privilege>                  privilege
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny resolve(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&) = 0;
#else // @header-generator platform
    virtual ::Scripting::ResultAny resolve(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType> promise,
        ::entt::meta_any&                                        arg
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny reject(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&) = 0;
#else // @header-generator platform
    virtual ::Scripting::ResultAny reject(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType> promise,
        ::entt::meta_any&                                        arg
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::FutureStatus getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::FutureType>) const = 0;
#else // @header-generator platform
    virtual ::Scripting::FutureStatus getFutureStatus(
        ::Scripting::ContextId                                  contextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType> futureHandle
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny getFutureResult(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::FutureType>, ::entt::meta_type const&) const = 0;
#else // @header-generator platform
    virtual ::Scripting::ResultAny getFutureResult(
        ::Scripting::ContextId                                  contextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType> futureHandle,
        ::entt::meta_type const&                                expectedResultType
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<Scripting::CoRoutineResult> executeCoroutines(std::optional<Scripting::Privilege>) = 0;
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
    executeCoroutines(::std::optional<::Scripting::Privilege> privilege) = 0;
#endif // @header-generator platform

    virtual bool hasPendingJobs() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::IDebuggerController* enableDebugger(::Scripting::IDebuggerTransport&, ::Scripting::IBreakpointValidator&) = 0;
#else // @header-generator platform
    virtual ::Scripting::IDebuggerController*
    enableDebugger(::Scripting::IDebuggerTransport& transport, ::Scripting::IBreakpointValidator& validator) = 0;
#endif // @header-generator platform

    virtual void disableDebugger() = 0;

    virtual void startProfiler() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopProfiler(std::function<void (std::string_view)>, std::optional<std::reference_wrapper<const std::string>>) = 0;
#else // @header-generator platform
    virtual void stopProfiler(
        ::std::function<void(::std::string_view)>                      captureCb,
        ::std::optional<::std::reference_wrapper<::std::string const>> savePathOpt
    ) = 0;
#endif // @header-generator platform

    virtual ::Scripting::RuntimeStats computeRuntimeStats() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings) = 0;
#else // @header-generator platform
    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings settings) = 0;
#endif // @header-generator platform

    virtual void disableWatchdog() = 0;

    virtual ::Scripting::IWatchdog* getWatchdog() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::TypeNameInfo> getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<::Scripting::TypeNameInfo>
    getNameForType(::Scripting::ContextId contextId, ::entt::meta_type const& type, bool allowUnknownTypes) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::Scripting::IRuntimeMetadata* $getMetadata() const;

    MCNAPI void $moveToThread();
#endif


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
