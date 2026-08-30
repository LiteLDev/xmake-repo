#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
class IAsyncJoinRegistrar;
struct PlayerAuthenticationInfo;
namespace ScriptModuleServerAdmin { struct ScriptAsyncPlayerJoinBeforeEvent; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { template<typename T0> class Future; }
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
        ::ll::UntypedStorage<8, 64>  mRegistration;
        ::ll::UntypedStorage<8, 112> mClosure;
        // NOLINTEND

    public:
        // prevent constructor by default
        Subscriber& operator=(Subscriber const&);
        Subscriber(Subscriber const&);
        Subscriber();

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
    };

    using ClosureType = ::Scripting::Closure<Scripting::Future<void()>(
        Scripting::StrongTypedObjectHandle<ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent>
    )>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Scripting::DependencyLocator*> mLocator;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 24, std::vector<std::function<bool ()>>> mTickCallbacks;
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleServerAdmin::ScriptAsyncJoinEventSignal::Subscriber>> mSubscribers;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncJoinEventSignal();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void tick();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
