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
        ::ll::UntypedStorage<2, 2>                      mEventsUsed;
        ::ll::UntypedStorage<8, 280>                    mClosures;
        ::ll::TypedStorage<8, 32, ::Scripting::Version> mVersionBoundWith;
        ::ll::TypedStorage<1, 1, bool>                  mInitialized;
        ::ll::TypedStorage<1, 1, bool>                  mUsedByBlock;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScriptBlockCustomComponentData& operator=(ScriptBlockCustomComponentData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void setClosureData(
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&,
            ::Scripting::WeakLifetimeScope const&
        );

        MCNAPI ~ScriptBlockCustomComponentData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&> mDeferredEventCoordinator;
    ::ll::UntypedStorage<8, 24> mCerealContext;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mBlockSubscriptions;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>> mComponents;
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptCustomComponentAfterEventList> mAsyncEventQueues;
    ::ll::UntypedStorage<2, 2> mV1EventSubscriptionList;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&> mCustomComponentParameterCache;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentsRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptBlockCustomComponentsRegistry();

    virtual std::vector<std::string_view> getValidComponentsForBlock(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation> const&) const;

    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const& tryGetCustomComponentParametersForBlock(::Block const&, std::string_view, ::Scripting::WeakLifetimeScope const&) const;

    virtual void onPreFlushAfterEvents();

    virtual void onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    virtual void onPostFlushAfterEvents();

    virtual void _onScriptInitializationComplete();

    virtual void _onReload();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentsRegistry(
        ::ServerScriptManagerEvents&,
        ::ScriptDeferredEventCoordinator&,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&
    );

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
    _componentRegistrationValidatorsCommon(
        std::__hash_map_iterator<std::__hash_iterator<std::__hash_node<
            std::__hash_value_type<
                HashedString,
                ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>,
            void*>*>> const&,
        ::HashedString const&
    );

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
    _componentReloadRegistrationValidators(
        std::__hash_map_iterator<std::__hash_iterator<std::__hash_node<
            std::__hash_value_type<
                HashedString,
                ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>,
            void*>*>> const&,
        ::HashedString const&,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&
    );

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
    );

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
    tryRegisterCustomComponentV1(
        ::HashedString const&,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
        ScriptModuleMinecraft::ScriptBlockCustomComponentInterface> const
    _getEventMetadata();

    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);

    MCNAPI static void generateOrderDocumentationForVersion(::Scripting::ModuleDescriptor const&, ::Json::Value&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServerScriptManagerEvents&,
        ::ScriptDeferredEventCoordinator&,
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
    MCNAPI std::vector<std::string_view> $getValidComponentsForBlock(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation> const&
    ) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    $tryGetCustomComponentParametersForBlock(
        ::Block const&,
        std::string_view,
        ::Scripting::WeakLifetimeScope const&
    ) const;

    MCNAPI void $onPreFlushAfterEvents();

    MCNAPI void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onPostFlushAfterEvents();

    MCNAPI void $_onScriptInitializationComplete();

    MCNAPI void $_onReload();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
