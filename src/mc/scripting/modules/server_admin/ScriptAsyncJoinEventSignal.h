#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/SubClientId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Future.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AsyncVerdictPromise;
class IAsyncJoinRegistrar;
struct PlayerAuthenticationInfo;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleServerAdmin { struct ScriptAsyncPlayerJoinBeforeEvent; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { template<typename T0> class Future; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleServerAdmin {

struct ScriptAsyncJoinEventSignal {
public:
    // ScriptAsyncJoinEventSignal inner types declare
    // clang-format off
    struct Subscriber;
    // clang-format on

    // ScriptAsyncJoinEventSignal inner types define
    struct Subscriber {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 64>  mRegistration;
        ::ll::UntypedStorage<8, 112> mClosure;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 72>  mUnkef0809;
        ::ll::UntypedStorage<8, 112> mUnk7e080c;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Subscriber& operator=(Subscriber const&);
        Subscriber(Subscriber const&);
        Subscriber();
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Subscriber();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using ClosureType = ::Scripting::Closure<Scripting::Future<void()>(
        Scripting::StrongTypedObjectHandle<ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent>
    )>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Scripting::DependencyLocator*> mLocator;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 24, std::vector<std::function<bool ()>>> mTickCallbacks;
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleServerAdmin::ScriptAsyncJoinEventSignal::Subscriber>> mSubscribers;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk2799a2;
    ::ll::UntypedStorage<8, 16> mUnk6aa83e;
    ::ll::UntypedStorage<8, 24> mUnka4e0c0;
    ::ll::UntypedStorage<8, 24> mUnkd55acd;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptAsyncJoinEventSignal& operator=(ScriptAsyncJoinEventSignal const&);
    ScriptAsyncJoinEventSignal(ScriptAsyncJoinEventSignal const&);
#endif // @header-generator platform
    ScriptAsyncJoinEventSignal();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void tick();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
