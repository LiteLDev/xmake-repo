#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/FutureStatus.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/runtime/scripting/StringBasedRuntime.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
#if defined(LL_PLAT_A) // @header-generator platform
struct JSMallocFunctions;
#else // @header-generator platform
#endif // @header-generator platform
struct JSModuleDef;
#if defined(LL_PLAT_A) // @header-generator platform
struct JSRuntime;
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class DependencyLocator; }
namespace Scripting { class IBreakpointValidator; }
namespace Scripting { class IDebuggerController; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IWatchdog; }
namespace Scripting { class RegistryManager; }
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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting::QuickJS { class ContextObject; }
namespace Scripting::QuickJS { class Debugger; }
namespace Scripting::QuickJS { class RuntimeUserData; }
namespace Scripting::QuickJS { class Watchdog; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting::QuickJS { struct MallocFunctions; }
// clang-format on

namespace Scripting::QuickJS {

class QuickJSRuntime : public ::Scripting::StringBasedRuntime,
#if defined(LL_PLAT_A) // @header-generator platform
                       public ::std::enable_shared_from_this<Scripting::QuickJS::QuickJSRuntime> {
#else // @header-generator platform
                       public ::std::enable_shared_from_this<::Scripting::QuickJS::QuickJSRuntime> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::RegistryManager&>                        mRegistryManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::IRuntimeMetadata>>         mMetadata;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::QuickJS::MallocFunctions>> mMallocFns;
    ::ll::UntypedStorage<8, 48>                                                    mModuleNameNormalizerFn;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::QuickJS::RuntimeUserData>> mRuntimeUserData;
    ::ll::TypedStorage<1, 1, bool>                                                 mExecutingCoroutines;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::QuickJS::Debugger>>        mDebugger;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::QuickJS::Watchdog>>        mWatchdog;
    ::ll::UntypedStorage<8, 32>                                                    mContextObjects;
    ::ll::UntypedStorage<8, 48>                                                    mOnProfilerCapture;
    ::ll::TypedStorage<8, 8, std::unique_ptr<JSMallocFunctions>>                   mJsMallocFns;
    ::ll::TypedStorage<8, 8, ::JSRuntime*>                                         mJsRuntime;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk4a943c;
    ::ll::UntypedStorage<8, 8>  mUnk2bae05;
    ::ll::UntypedStorage<8, 8>  mUnk2d5711;
    ::ll::UntypedStorage<8, 64> mUnk294ec9;
    ::ll::UntypedStorage<8, 8>  mUnkf18e85;
    ::ll::UntypedStorage<1, 1>  mUnk9e6cf4;
    ::ll::UntypedStorage<8, 8>  mUnk60fff8;
    ::ll::UntypedStorage<8, 8>  mUnk469f9b;
    ::ll::UntypedStorage<8, 24> mUnkcbd710;
    ::ll::UntypedStorage<8, 64> mUnke4ca00;
    ::ll::UntypedStorage<8, 8>  mUnk299ca5;
    ::ll::UntypedStorage<8, 8>  mUnk4de080;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    QuickJSRuntime& operator=(QuickJSRuntime const&);
    QuickJSRuntime(QuickJSRuntime const&);
    QuickJSRuntime();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~QuickJSRuntime();
#else // @header-generator platform
    virtual ~QuickJSRuntime() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::IRuntimeMetadata* getMetadata() const;
#else // @header-generator platform
    virtual ::Scripting::IRuntimeMetadata* getMetadata() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void moveToThread();
#else // @header-generator platform
    virtual void moveToThread() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::ScriptContext> createContext(::Scripting::ModuleBindingBundle&&, ::Scripting::IDependencyLoader*, ::Scripting::IPrinter*, ::Scripting::ContextConfig const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::ScriptContext> createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&  config
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void destroyContext(::Scripting::ContextId);
#else // @header-generator platform
    virtual void destroyContext(::Scripting::ContextId contextId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny call(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::ClosureType>, ::entt::meta_any*, uint, ::entt::meta_type const&, std::optional<Scripting::Privilege>);
#else // @header-generator platform
    virtual ::Scripting::ResultAny runString(
        ::Scripting::ContextId                  contextId,
        ::std::string const&                    scriptName,
        ::std::string const&                    scriptData,
        ::std::optional<::Scripting::Privilege> privilege
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny resolve(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&);
#else // @header-generator platform
    virtual ::Scripting::ResultAny call(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType> closureHandle,
        ::entt::meta_any*                                        args,
        uint                                                     argc,
        ::entt::meta_type const&                                 expectedReturnType,
        ::std::optional<::Scripting::Privilege>                  privilege
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny reject(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&);
#else // @header-generator platform
    virtual ::Scripting::ResultAny resolve(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType> promise,
        ::entt::meta_any&                                        arg
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::FutureStatus getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::FutureType>) const;
#else // @header-generator platform
    virtual ::Scripting::ResultAny reject(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType> promise,
        ::entt::meta_any&                                        arg
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny getFutureResult(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::FutureType>, ::entt::meta_type const&) const;
#else // @header-generator platform
    virtual ::Scripting::FutureStatus getFutureStatus(
        ::Scripting::ContextId                                  contextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType> futureHandle
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<Scripting::CoRoutineResult> executeCoroutines(std::optional<Scripting::Privilege>);
#else // @header-generator platform
    virtual ::Scripting::ResultAny getFutureResult(
        ::Scripting::ContextId                                  contextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType> futureHandle,
        ::entt::meta_type const&                                expectedResultType
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasPendingJobs();
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
    executeCoroutines(::std::optional<::Scripting::Privilege> privilege) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::IDebuggerController* enableDebugger(::Scripting::IDebuggerTransport&, ::Scripting::IBreakpointValidator&);
#else // @header-generator platform
    virtual bool hasPendingJobs() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void disableDebugger();
#else // @header-generator platform
    virtual ::Scripting::IDebuggerController* enableDebugger(
        ::Scripting::IDebuggerTransport&   transport,
        ::Scripting::IBreakpointValidator& validator
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startProfiler();
#else // @header-generator platform
    virtual void disableDebugger() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopProfiler(std::function<void (std::string_view)>, std::optional<std::reference_wrapper<const std::string>>);
#else // @header-generator platform
    virtual void startProfiler() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::RuntimeStats computeRuntimeStats() const;
#else // @header-generator platform
    virtual void stopProfiler(
        ::std::function<void(::std::string_view)>                      captureCb,
        ::std::optional<::std::reference_wrapper<::std::string const>> savePathOpt
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings);
#else // @header-generator platform
    virtual ::Scripting::RuntimeStats computeRuntimeStats() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void disableWatchdog();
#else // @header-generator platform
    virtual ::std::optional<::Scripting::TypeNameInfo>
    getNameForType(::Scripting::ContextId contextId, ::entt::meta_type const& type, bool allowUnknownTypes) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::IWatchdog* getWatchdog() const;
#else // @header-generator platform
    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings settings) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::TypeNameInfo> getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const;
#else // @header-generator platform
    virtual void disableWatchdog() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny runString(::Scripting::ContextId, std::string const&, std::string const&, std::optional<Scripting::Privilege>);
    // clang-format on
#else // @header-generator platform
    virtual ::Scripting::IWatchdog* getWatchdog() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI QuickJSRuntime(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::RegistryManager&,
        std::unique_ptr<Scripting::IRuntimeMetadata>,
        ::Scripting::DependencyLocator*,
        std::unique_ptr<Scripting::QuickJS::MallocFunctions>,
        std::function<std::string(const std::string_view&, const std::string&, const std::vector<std::string>&)>
#else // @header-generator platform
        ::Scripting::RegistryManager&                            registryManager,
        ::std::unique_ptr<::Scripting::IRuntimeMetadata>         metadata,
        ::Scripting::DependencyLocator*                          locator,
        ::std::unique_ptr<::Scripting::QuickJS::MallocFunctions> mallocFns,
        ::std::function<
            ::std::string(::std::string_view const&, ::std::string const&, ::std::vector<::std::string> const&)>
            normalizerFn
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int _moduleImportAllowed(::JSContext*, char const*, char const*, void*);
#else // @header-generator platform
    MCNAPI static int
    _moduleImportAllowed(::JSContext* ctx, char const* baseName, char const* moduleName, void* opaque);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::JSModuleDef* _moduleLoader(::JSContext*, char const*, void*);
#else // @header-generator platform
    MCNAPI static ::JSModuleDef* _moduleLoader(::JSContext* ctx, char const* moduleName, void* opaque);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char* _moduleNameNormalizer(::JSContext*, char const*, char const*, void*);
#else // @header-generator platform
    MCNAPI static char*
    _moduleNameNormalizer(::JSContext* ctx, char const* baseName, char const* moduleName, void* opaque);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _onProfilerCapture(void*, char const*);
#else // @header-generator platform
    MCNAPI static void _onProfilerCapture(void* opaque, char const* capture);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::RegistryManager&,
        std::unique_ptr<Scripting::IRuntimeMetadata>,
        ::Scripting::DependencyLocator*,
        std::unique_ptr<Scripting::QuickJS::MallocFunctions>,
        std::function<std::string(const std::string_view&, const std::string&, const std::vector<std::string>&)>
#else // @header-generator platform
        ::Scripting::RegistryManager&                            registryManager,
        ::std::unique_ptr<::Scripting::IRuntimeMetadata>         metadata,
        ::Scripting::DependencyLocator*                          locator,
        ::std::unique_ptr<::Scripting::QuickJS::MallocFunctions> mallocFns,
        ::std::function<
            ::std::string(::std::string_view const&, ::std::string const&, ::std::vector<::std::string> const&)>
            normalizerFn
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::IRuntimeMetadata* $getMetadata() const;

    MCNAPI void $moveToThread();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::ScriptContext> $createContext(
        ::Scripting::ModuleBindingBundle&&,
        ::Scripting::IDependencyLoader*,
        ::Scripting::IPrinter*,
        ::Scripting::ContextConfig const&
#else // @header-generator platform
    MCNAPI ::std::optional<::Scripting::ScriptContext> $createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&  config
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $destroyContext(::Scripting::ContextId);
#else // @header-generator platform
    MCNAPI void $destroyContext(::Scripting::ContextId contextId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ResultAny $call(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<Scripting::ClosureType>,
        ::entt::meta_any*,
        uint,
        ::entt::meta_type const&,
        std::optional<Scripting::Privilege>
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny $runString(
        ::Scripting::ContextId                  contextId,
        ::std::string const&                    scriptName,
        ::std::string const&                    scriptData,
        ::std::optional<::Scripting::Privilege> privilege
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ResultAny
    $resolve(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&);
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny $call(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType> closureHandle,
        ::entt::meta_any*                                        args,
        uint                                                     argc,
        ::entt::meta_type const&                                 expectedReturnType,
        ::std::optional<::Scripting::Privilege>                  privilege
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ResultAny
    $reject(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&);
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny $resolve(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType> promise,
        ::entt::meta_any&                                        arg
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::FutureStatus
        $getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::FutureType>) const;
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny $reject(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType> promise,
        ::entt::meta_any&                                        arg
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ResultAny $getFutureResult(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<Scripting::FutureType>,
        ::entt::meta_type const&
#else // @header-generator platform
    MCNAPI ::Scripting::FutureStatus $getFutureStatus(
        ::Scripting::ContextId                                  contextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType> futureHandle
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<Scripting::CoRoutineResult>
        $executeCoroutines(std::optional<Scripting::Privilege>);
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny $getFutureResult(
        ::Scripting::ContextId                                  contextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType> futureHandle,
        ::entt::meta_type const&                                expectedResultType
    ) const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
    $executeCoroutines(::std::optional<::Scripting::Privilege> privilege);
#endif // @header-generator platform

    MCNAPI bool $hasPendingJobs();

    MCNAPI ::Scripting::IDebuggerController*
#if defined(LL_PLAT_A) // @header-generator platform
    $enableDebugger(::Scripting::IDebuggerTransport&, ::Scripting::IBreakpointValidator&);
#else // @header-generator platform
    $enableDebugger(::Scripting::IDebuggerTransport& transport, ::Scripting::IBreakpointValidator& validator);
#endif // @header-generator platform

    MCNAPI void $disableDebugger();

    MCNAPI void $startProfiler();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
        $stopProfiler(std::function<void(std::string_view)>, std::optional<std::reference_wrapper<const std::string>>);
#else // @header-generator platform
    MCNAPI void $stopProfiler(
        ::std::function<void(::std::string_view)>                      captureCb,
        ::std::optional<::std::reference_wrapper<::std::string const>> savePathOpt
    );
#endif // @header-generator platform

    MCNAPI ::Scripting::RuntimeStats $computeRuntimeStats() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::IWatchdog* $enableWatchdog(::Scripting::WatchdogSettings);
#else // @header-generator platform
    MCNAPI ::std::optional<::Scripting::TypeNameInfo>
    $getNameForType(::Scripting::ContextId contextId, ::entt::meta_type const& type, bool allowUnknownTypes) const;

    MCNAPI ::Scripting::IWatchdog* $enableWatchdog(::Scripting::WatchdogSettings settings);
#endif // @header-generator platform

    MCNAPI void $disableWatchdog();

    MCNAPI ::Scripting::IWatchdog* $getWatchdog() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::TypeNameInfo>
           $getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ResultAny
    $runString(::Scripting::ContextId, std::string const&, std::string const&, std::optional<Scripting::Privilege>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting::QuickJS
