#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/scripting/modules/minecraft/ScriptCustomComponentRegistry.h"
#include "mc/scripting/modules/minecraft/block/IScriptBlockCustomComponentReader.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentEventTypes.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentInterface.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentAfterEventList.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentEventMetadata.h"
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockCustomComponentsComponent;
class BlockType;
class ScriptDeferredEventCoordinator;
class ScriptDeferredFlushTracker;
struct ServerScriptManagerEvents;
namespace BlockEvents { class ActorEvent; }
namespace BlockEvents { class BlockBreakEvent; }
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerDestroyEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockPlayerPlacingEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
namespace BlockEvents { class BlockRandomTickLegacyEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
namespace BlockEvents { class BlockStateChangeEvent; }
namespace BlockEvents { class BlockStepOffEvent; }
namespace BlockEvents { class BlockStepOnEvent; }
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadVersionError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockCustomComponentsRegistry : public ::ScriptModuleMinecraft::IScriptBlockCustomComponentReader,
                                            public ::ScriptDeferredEventListener,
                                            public ::ScriptModuleMinecraft::ScriptCustomComponentRegistry {
public:
    // ScriptBlockCustomComponentsRegistry inner types declare
    // clang-format off
    struct ScriptBlockCustomComponentData;
    // clang-format on

    // ScriptBlockCustomComponentsRegistry inner types define
    struct ScriptBlockCustomComponentData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<2, 2>                      mEventsUsed;
        ::ll::UntypedStorage<8, 280>                    mClosures;
        ::ll::TypedStorage<8, 32, ::Scripting::Version> mVersionBoundWith;
#else // @header-generator platform
        ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes, 14>>
            mEventsUsed;
        ::ll::TypedStorage<8, 288, ::std::optional<::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface>>
                                                        mClosures;
        ::ll::TypedStorage<8, 40, ::Scripting::Version> mVersionBoundWith;
#endif // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                  mInitialized;
        ::ll::TypedStorage<1, 1, bool>                  mUsedByBlock;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        ScriptBlockCustomComponentData& operator=(ScriptBlockCustomComponentData const&);

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void setClosureData(
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&,
            ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
        MCAPI void setClosureData(
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&& closures,
            ::Scripting::WeakLifetimeScope const&                          scope
#endif // @header-generator platform
        );
#if defined(LL_PLAT_A) // @header-generator platform

        MCNAPI ~ScriptBlockCustomComponentData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&> mDeferredEventCoordinator;
    ::ll::UntypedStorage<8, 24> mCerealContext;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mBlockSubscriptions;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>> mComponents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&>                    mDeferredEventCoordinator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::cereal::ReflectionCtx>> mCerealContext;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>      mBlockSubscriptions;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>>
                                                                                            mComponents;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptCustomComponentAfterEventList> mAsyncEventQueues;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<2, 2> mV1EventSubscriptionList;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&> mCustomComponentParameterCache;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes, 14>>
        mV1EventSubscriptionList;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&>
        mCustomComponentParameterCache;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptBlockCustomComponentsRegistry& operator=(ScriptBlockCustomComponentsRegistry const&);
    ScriptBlockCustomComponentsRegistry(ScriptBlockCustomComponentsRegistry const&);
#endif // @header-generator platform
    ScriptBlockCustomComponentsRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptBlockCustomComponentsRegistry();
#else // @header-generator platform
    virtual void onPreFlushAfterEvents() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string_view> getValidComponentsForBlock(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation> const&) const;
#else // @header-generator platform
    virtual void onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const& tryGetCustomComponentParametersForBlock(::Block const&, std::string_view, ::Scripting::WeakLifetimeScope const&) const;
#else // @header-generator platform
    virtual void onPostFlushAfterEvents() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPreFlushAfterEvents();
#else // @header-generator platform
    virtual void _onScriptInitializationComplete() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    virtual void _onReload() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPostFlushAfterEvents();
#else // @header-generator platform
    virtual ~ScriptBlockCustomComponentsRegistry() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onScriptInitializationComplete();
#else // @header-generator platform
    virtual ::std::vector<::std::string_view> getValidComponentsForBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> const& permutation
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onReload();
    // clang-format on
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    tryGetCustomComponentParametersForBlock(
        ::Block const&                        block,
        ::std::string_view                    componentName,
        ::Scripting::WeakLifetimeScope const& scope
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockCustomComponentsRegistry(
        ::ServerScriptManagerEvents&,
        ::ScriptDeferredEventCoordinator&,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&
#else // @header-generator platform
    MCAPI ScriptBlockCustomComponentsRegistry(
        ::ServerScriptManagerEvents&                                  events,
        ::ScriptDeferredEventCoordinator&                             deferredEventCoordinator,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
#endif // @header-generator platform
    _componentRegistrationValidatorsCommon(
#if defined(LL_PLAT_A) // @header-generator platform
        std::__hash_map_iterator<std::__hash_iterator<std::__hash_node<
            std::__hash_value_type<
                HashedString,
                ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>,
            void*>*>> const&,
        ::HashedString const&
#else // @header-generator platform
        ::std::_List_iterator<::std::_List_val<::std::_List_simple_types<::std::pair<
            ::HashedString const,
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>>>> const&
                              compIt,
        ::HashedString const& name
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
#endif // @header-generator platform
    _componentReloadRegistrationValidators(
#if defined(LL_PLAT_A) // @header-generator platform
        std::__hash_map_iterator<std::__hash_iterator<std::__hash_node<
            std::__hash_value_type<
                HashedString,
                ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>,
            void*>*>> const&,
        ::HashedString const&,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&
#else // @header-generator platform
        ::std::_List_iterator<::std::_List_val<::std::_List_simple_types<::std::pair<
            ::HashedString const,
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>>>> const&
                                                                            compIt,
        ::HashedString const&                                               name,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const& closures
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _registerBlockForEventing(::BlockType&, std::vector<gsl::not_null<BlockCustomComponentsComponent*>> const&);

    MCNAPI void beforeOnPlayerPlace(::BlockEvents::BlockPlayerPlacingEvent&) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& getCustomComponentParameterCache() const;

    MCNAPI void onActor(::BlockEvents::ActorEvent const&) const;

    MCNAPI void onBlockStateChange(::BlockEvents::BlockStateChangeEvent const&) const;

    MCNAPI void onBreak(::BlockEvents::BlockBreakEvent const&) const;

    MCNAPI void onEntityFallOn(::BlockEvents::BlockEntityFallOnEvent&) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent const&) const;

    MCNAPI void onPlayerBreak(::BlockEvents::BlockPlayerDestroyEvent const&) const;

    MCNAPI void onPlayerInteract(::BlockEvents::BlockPlayerInteractEvent&) const;

    MCNAPI void onQueuedTick(::BlockEvents::BlockQueuedTickEvent const&) const;

    MCNAPI void onRandomTick(::BlockEvents::BlockRandomTickEvent const&) const;

    MCNAPI void onRandomTickLegacy(::BlockEvents::BlockRandomTickLegacyEvent const&) const;

    MCNAPI void onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent const&) const;

    MCNAPI void onStepOff(::BlockEvents::BlockStepOffEvent const&) const;

    MCNAPI void onStepOn(::BlockEvents::BlockStepOnEvent const&) const;

    MCNAPI void setCerealContext(::cereal::ReflectionCtx&);

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const*
    tryGetRegisteredComponent(::HashedString const&) const;

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
    tryRegisterCustomComponent(
        ::HashedString const&,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI void _registerBlockForEventing(
        ::BlockType&                                                             block,
        ::std::vector<::gsl::not_null<::BlockCustomComponentsComponent*>> const& comps
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI void beforeOnPlayerPlace(::BlockEvents::BlockPlayerPlacingEvent& eventData) const;

    MCAPI bool
    hasSubscriptionFor(::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes type, ::Block const& block) const;

    MCAPI void onActor(::BlockEvents::ActorEvent const& eventData) const;

    MCAPI void onBlockStateChange(::BlockEvents::BlockStateChangeEvent const& eventData) const;

    MCAPI void onBreak(::BlockEvents::BlockBreakEvent const& eventData) const;

    MCAPI void onEntityFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent const& eventData) const;

    MCAPI void onPlayerBreak(::BlockEvents::BlockPlayerDestroyEvent const& eventData) const;

    MCAPI void onPlayerInteract(::BlockEvents::BlockPlayerInteractEvent& eventData) const;

    MCAPI void onQueuedTick(::BlockEvents::BlockQueuedTickEvent const& eventData) const;

    MCAPI void onRandomTick(::BlockEvents::BlockRandomTickEvent const& eventData) const;

    MCAPI void onRandomTickLegacy(::BlockEvents::BlockRandomTickLegacyEvent const& eventData) const;

    MCAPI void onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent const& eventData) const;

    MCAPI void onStepOff(::BlockEvents::BlockStepOffEvent const& eventData) const;

    MCAPI void onStepOn(::BlockEvents::BlockStepOnEvent const& eventData) const;

    MCAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const*
    tryGetRegisteredComponent(::HashedString const& name) const;

    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
    tryRegisterCustomComponent(
        ::HashedString const&                                          name,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&& closures,
        ::Scripting::WeakLifetimeScope const&                          scope
    );

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
#endif // @header-generator platform
    tryRegisterCustomComponentV1(
#if defined(LL_PLAT_A) // @header-generator platform
        ::HashedString const&,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
        ::HashedString const&                                          name,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&& closures,
        ::Scripting::WeakLifetimeScope const&                          scope
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
        ScriptModuleMinecraft::ScriptBlockCustomComponentInterface> const
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface> const
#endif // @header-generator platform
    _getEventMetadata();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
#else // @header-generator platform
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void generateOrderDocumentationForVersion(::Scripting::ModuleDescriptor const&, ::Json::Value&);
#else // @header-generator platform
    MCAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
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
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ServerScriptManagerEvents&                                  events,
        ::ScriptDeferredEventCoordinator&                             deferredEventCoordinator,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache
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
    MCNAPI std::vector<std::string_view> $getValidComponentsForBlock(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation> const&
#else // @header-generator platform
    MCAPI void $onPreFlushAfterEvents();

    MCAPI void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI void $onPostFlushAfterEvents();

    MCAPI void $_onScriptInitializationComplete();

    MCAPI void $_onReload();

    MCAPI ::std::vector<::std::string_view> $getValidComponentsForBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> const& permutation
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
#endif // @header-generator platform
    $tryGetCustomComponentParametersForBlock(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Block const&,
        std::string_view,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
        ::Block const&                        block,
        ::std::string_view                    componentName,
        ::Scripting::WeakLifetimeScope const& scope
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPreFlushAfterEvents();
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onPostFlushAfterEvents();

    MCNAPI void $_onScriptInitializationComplete();

    MCNAPI void $_onReload();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
