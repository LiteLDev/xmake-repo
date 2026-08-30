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
struct JSMallocFunctions;
struct JSModuleDef;
struct JSRuntime;
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
namespace Scripting::QuickJS { class ContextObject; }
namespace Scripting::QuickJS { class Debugger; }
namespace Scripting::QuickJS { class RuntimeUserData; }
namespace Scripting::QuickJS { class Watchdog; }
namespace Scripting::QuickJS { struct MallocFunctions; }
// clang-format on

namespace Scripting::QuickJS {

class QuickJSRuntime : public ::Scripting::StringBasedRuntime,
                       public ::std::enable_shared_from_this<Scripting::QuickJS::QuickJSRuntime> {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    QuickJSRuntime& operator=(QuickJSRuntime const&);
    QuickJSRuntime(QuickJSRuntime const&);
    QuickJSRuntime();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~QuickJSRuntime();

    virtual ::Scripting::IRuntimeMetadata* getMetadata() const;

    virtual void moveToThread();

    virtual std::optional<Scripting::ScriptContext> createContext(::Scripting::ModuleBindingBundle&&, ::Scripting::IDependencyLoader*, ::Scripting::IPrinter*, ::Scripting::ContextConfig const&);

    virtual void destroyContext(::Scripting::ContextId);

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

    virtual ::Scripting::ResultAny runString(::Scripting::ContextId, std::string const&, std::string const&, std::optional<Scripting::Privilege>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI QuickJSRuntime(
        ::Scripting::RegistryManager&,
        std::unique_ptr<Scripting::IRuntimeMetadata>,
        ::Scripting::DependencyLocator*,
        std::unique_ptr<Scripting::QuickJS::MallocFunctions>,
        std::function<std::string(const std::string_view&, const std::string&, const std::vector<std::string>&)>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int _moduleImportAllowed(::JSContext*, char const*, char const*, void*);

    MCNAPI static ::JSModuleDef* _moduleLoader(::JSContext*, char const*, void*);

    MCNAPI static char* _moduleNameNormalizer(::JSContext*, char const*, char const*, void*);

    MCNAPI static void _onProfilerCapture(void*, char const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::RegistryManager&,
        std::unique_ptr<Scripting::IRuntimeMetadata>,
        ::Scripting::DependencyLocator*,
        std::unique_ptr<Scripting::QuickJS::MallocFunctions>,
        std::function<std::string(const std::string_view&, const std::string&, const std::vector<std::string>&)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::IRuntimeMetadata* $getMetadata() const;

    MCNAPI void $moveToThread();

    MCNAPI std::optional<Scripting::ScriptContext> $createContext(
        ::Scripting::ModuleBindingBundle&&,
        ::Scripting::IDependencyLoader*,
        ::Scripting::IPrinter*,
        ::Scripting::ContextConfig const&
    );

    MCNAPI void $destroyContext(::Scripting::ContextId);

    MCNAPI ::Scripting::ResultAny $call(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<Scripting::ClosureType>,
        ::entt::meta_any*,
        uint,
        ::entt::meta_type const&,
        std::optional<Scripting::Privilege>
    );

    MCNAPI ::Scripting::ResultAny
    $resolve(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&);

    MCNAPI ::Scripting::ResultAny
    $reject(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::PromiseType>, ::entt::meta_any&);

    MCNAPI ::Scripting::FutureStatus
        $getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<Scripting::FutureType>) const;

    MCNAPI ::Scripting::ResultAny $getFutureResult(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<Scripting::FutureType>,
        ::entt::meta_type const&
    ) const;

    MCNAPI ::Scripting::Result_deprecated<Scripting::CoRoutineResult>
        $executeCoroutines(std::optional<Scripting::Privilege>);

    MCNAPI bool $hasPendingJobs();

    MCNAPI ::Scripting::IDebuggerController*
    $enableDebugger(::Scripting::IDebuggerTransport&, ::Scripting::IBreakpointValidator&);

    MCNAPI void $disableDebugger();

    MCNAPI void $startProfiler();

    MCNAPI void
        $stopProfiler(std::function<void(std::string_view)>, std::optional<std::reference_wrapper<const std::string>>);

    MCNAPI ::Scripting::RuntimeStats $computeRuntimeStats() const;

    MCNAPI ::Scripting::IWatchdog* $enableWatchdog(::Scripting::WatchdogSettings);

    MCNAPI void $disableWatchdog();

    MCNAPI ::Scripting::IWatchdog* $getWatchdog() const;

    MCNAPI std::optional<Scripting::TypeNameInfo>
           $getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const;

    MCNAPI ::Scripting::ResultAny
    $runString(::Scripting::ContextId, std::string const&, std::string const&, std::optional<Scripting::Privilege>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
