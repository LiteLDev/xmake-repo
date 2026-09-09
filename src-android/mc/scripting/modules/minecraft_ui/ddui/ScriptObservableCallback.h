#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftServerUI { class ScriptObservableNumber; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptObservableCallback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                mData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptObservableCallback();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptObservableCallback(
        std::variant<Scripting::Closure<void()>, std::function<void()>>,
        ::Scripting::WeakLifetimeScope&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::variant<Scripting::Closure<void()>, std::function<void()>>, ::Scripting::WeakLifetimeScope&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
