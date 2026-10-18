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
#if defined(LL_PLAT_A) // @header-generator platform
class Item;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 32, ::Scripting::Version>                                          mClosureFlagsVersion;
#else // @header-generator platform
        ::ll::TypedStorage<8, 40, ::Scripting::Version>                                          mClosureFlagsVersion;
#endif // @header-generator platform
        ::ll::TypedStorage<2, 2, ::ScriptModuleMinecraft::ScriptItemCustomComponentClosureFlags> mClosureFlags;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ComponentInfo& operator=(ComponentInfo const&);
        ComponentInfo(ComponentInfo const&);
        ComponentInfo();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ScriptModuleMinecraft::ScriptItemCustomComponentRegistry::ComponentInfo>> mKnownComponents;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::ScriptModuleMinecraft::ScriptItemCustomComponentRegistry::ComponentInfo>>
                                                                mKnownComponents;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&> mDeferredEventCoordinator;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const> mItemRegistry;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mItemRegistryInitSubscription;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const>          mItemRegistry;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mItemRegistryInitSubscription;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&> mParameterCache;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>> mSignals;
    ::ll::UntypedStorage<8, 24> mCerealContext;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>>
                                                                                   mSignals;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::cereal::ReflectionCtx>> mCerealContext;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptItemCustomComponentRegistry& operator=(ScriptItemCustomComponentRegistry const&);
    ScriptItemCustomComponentRegistry(ScriptItemCustomComponentRegistry const&);
#endif // @header-generator platform
    ScriptItemCustomComponentRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptItemCustomComponentRegistry();
#else // @header-generator platform
    virtual ~ScriptItemCustomComponentRegistry() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string_view> getValidComponentsForItem(::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>) const;
#else // @header-generator platform
    virtual ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    tryRegisterComponentV1(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const& tryGetCustomComponentParametersForItem(::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>, std::string_view, ::Scripting::WeakLifetimeScope const&) const;
#else // @header-generator platform
    virtual ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    tryRegisterComponent(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ScriptDeferredEventListener& getEventListener();
#else // @header-generator platform
    virtual ::std::vector<::std::string_view> getValidComponentsForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCerealContext(::cereal::ReflectionCtx&);
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    tryGetCustomComponentParametersForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle,
        ::std::string_view                                                           componentName,
        ::Scripting::WeakLifetimeScope const&                                        scope
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError, ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError> tryRegisterComponentV1(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);
#else // @header-generator platform
    virtual ::ScriptDeferredEventListener& getEventListener() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError, ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError, ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError> tryRegisterComponent(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);
#else // @header-generator platform
    virtual void setCerealContext(::cereal::ReflectionCtx& ctx) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onReload();
#else // @header-generator platform
    virtual void _onReload() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onScriptInitializationComplete();
    // clang-format on
#else // @header-generator platform
    virtual void _onScriptInitializationComplete() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptItemCustomComponentRegistry(
        ::ServerScriptManagerEvents&,
        ::ScriptDeferredEventCoordinator&,
        ::ItemRegistryRef const,
        std::unique_ptr<ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&&,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&
#else // @header-generator platform
    MCAPI ScriptItemCustomComponentRegistry(
        ::ServerScriptManagerEvents&      events,
        ::ScriptDeferredEventCoordinator& deferredEventCoordinator,
        ::ItemRegistryRef                 itemRegistry,
        ::std::unique_ptr<::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&& signals,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&                            parameterCache
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _subscribeItemsToComponents();
#else // @header-generator platform
    MCAPI void _subscribeItemsToComponents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    _tryRegisterComponent(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    _tryRegisterComponent(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ServerScriptManagerEvents&,
        ::ScriptDeferredEventCoordinator&,
        ::ItemRegistryRef const,
        std::unique_ptr<ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&&,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ServerScriptManagerEvents&      events,
        ::ScriptDeferredEventCoordinator& deferredEventCoordinator,
        ::ItemRegistryRef                 itemRegistry,
        ::std::unique_ptr<::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&& signals,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&                            parameterCache
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string_view>
           $getValidComponentsForItem(::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    $tryRegisterComponentV1(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    $tryGetCustomComponentParametersForItem(
        ::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>,
        std::string_view,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    $tryRegisterComponent(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    );

    MCAPI ::std::vector<::std::string_view> $getValidComponentsForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptDeferredEventListener& $getEventListener();
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    $tryGetCustomComponentParametersForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle,
        ::std::string_view                                                           componentName,
        ::Scripting::WeakLifetimeScope const&                                        scope
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setCerealContext(::cereal::ReflectionCtx&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::ScriptDeferredEventListener& $getEventListener();
#else // LL_PLAT_C
    MCFOLD ::ScriptDeferredEventListener& $getEventListener();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    $tryRegisterComponentV1(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);
#else // @header-generator platform
    MCAPI void $setCerealContext(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    $tryRegisterComponent(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);
#else // @header-generator platform
    MCAPI void $_onReload();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onReload();
#else // @header-generator platform
    MCAPI void $_onScriptInitializationComplete();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onScriptInitializationComplete();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
