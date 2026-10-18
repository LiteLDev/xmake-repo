#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Closure.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraftServerUI { class ScriptObservableNumber; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptObservableCallback {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                mData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSubscription;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk8e4645;
    ::ll::UntypedStorage<8, 16> mUnk176906;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptObservableCallback& operator=(ScriptObservableCallback const&);
    ScriptObservableCallback(ScriptObservableCallback const&);
#endif // @header-generator platform
    ScriptObservableCallback();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptObservableCallback(
#if defined(LL_PLAT_A) // @header-generator platform
        std::variant<Scripting::Closure<void()>, std::function<void()>>,
        ::Scripting::WeakLifetimeScope&
#else // @header-generator platform
        ::std::variant<::Scripting::Closure<void()>, ::std::function<void()>> callback,
        ::Scripting::WeakLifetimeScope&                                       scope
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(std::variant<Scripting::Closure<void()>, std::function<void()>>, ::Scripting::WeakLifetimeScope&);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::variant<::Scripting::Closure<void()>, ::std::function<void()>> callback,
        ::Scripting::WeakLifetimeScope&                                       scope
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
