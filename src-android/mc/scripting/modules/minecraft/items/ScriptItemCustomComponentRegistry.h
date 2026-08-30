#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentClosureFlags.h"
#include "mc/scripting/modules/minecraft/items/IScriptItemCustomComponentRegistry.h"
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class Item;
class ScriptDeferredEventCoordinator;
class ScriptDeferredEventListener;
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentSignalCollection; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadVersionError; }
namespace Scripting { class WeakLifetimeScope; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentRegistry : public ::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry {
public:
    // ScriptItemCustomComponentRegistry inner types declare
    // clang-format off
    struct ComponentInfo;
    // clang-format on

    // ScriptItemCustomComponentRegistry inner types define
    struct ComponentInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                                           mRegistered;
        ::ll::TypedStorage<8, 32, ::Scripting::Version>                                          mClosureFlagsVersion;
        ::ll::TypedStorage<2, 2, ::ScriptModuleMinecraft::ScriptItemCustomComponentClosureFlags> mClosureFlags;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentInfo& operator=(ComponentInfo const&);
        ComponentInfo(ComponentInfo const&);
        ComponentInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ScriptModuleMinecraft::ScriptItemCustomComponentRegistry::ComponentInfo>> mKnownComponents;
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&> mDeferredEventCoordinator;
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const> mItemRegistry;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mItemRegistryInitSubscription;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&> mParameterCache;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>> mSignals;
    ::ll::UntypedStorage<8, 24> mCerealContext;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptItemCustomComponentRegistry();

    virtual std::vector<std::string_view> getValidComponentsForItem(::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>) const;

    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const& tryGetCustomComponentParametersForItem(::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>, std::string_view, ::Scripting::WeakLifetimeScope const&) const;

    virtual ::ScriptDeferredEventListener& getEventListener();

    virtual void setCerealContext(::cereal::ReflectionCtx&);

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError, ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError> tryRegisterComponentV1(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError, ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError> tryRegisterComponent(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);

    virtual void _onReload();

    virtual void _onScriptInitializationComplete();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemCustomComponentRegistry(
        ::ServerScriptManagerEvents&,
        ::ScriptDeferredEventCoordinator&,
        ::ItemRegistryRef const,
        std::unique_ptr<ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&&,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&
    );

    MCNAPI void _subscribeItemsToComponents();

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    _tryRegisterComponent(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServerScriptManagerEvents&,
        ::ScriptDeferredEventCoordinator&,
        ::ItemRegistryRef const,
        std::unique_ptr<ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&&,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&
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
    MCNAPI std::vector<std::string_view>
           $getValidComponentsForItem(::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    $tryGetCustomComponentParametersForItem(
        ::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>,
        std::string_view,
        ::Scripting::WeakLifetimeScope const&
    ) const;

    MCNAPI ::ScriptDeferredEventListener& $getEventListener();

    MCNAPI void $setCerealContext(::cereal::ReflectionCtx&);

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    $tryRegisterComponentV1(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    $tryRegisterComponent(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);

    MCNAPI void $_onReload();

    MCNAPI void $_onScriptInitializationComplete();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
