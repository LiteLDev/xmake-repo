#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class BlockComponentEventSubscriber;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockConnectionComponent;
class BlockCustomComponentsComponent;
class BlockDeprecatedR16EventListenerComponent;
class BlockEntityFallOnConfigurationComponent;
class BlockMultiBlockComponent;
class BlockRandomOffsetComponent;
class BlockRedstoneConsumerComponent;
class BlockTickConfigurationComponent;
class BlockTransformationComponent;
class OnFallOnTrigger;
class OnInteractTrigger;
class OnPlacedTrigger;
class OnPlayerDestroyedTrigger;
class OnPlayerPlacingTrigger;
class OnStepOffTrigger;
class OnStepOnTrigger;
struct BlockAmbientSoundComponent;
struct BlockBlockEntityComponent;
struct BlockChestObstructionComponent;
struct BlockCollisionBoxComponent;
struct BlockConnectionRuleComponent;
struct BlockCraftingTableComponent;
struct BlockDestructibleByExplosionComponent;
struct BlockDestructibleByMiningComponent;
struct BlockDestructionParticlesComponent;
struct BlockDisplayNameComponent;
struct BlockEmbeddedVisualComponent;
struct BlockFlammableComponent;
struct BlockFlowerPottableComponent;
struct BlockFrictionComponent;
struct BlockGeometryComponent;
struct BlockInstrumentComponent;
struct BlockItemVisualComponent;
struct BlockLeashableComponent;
struct BlockLightDampeningComponent;
struct BlockLightEmissionComponent;
struct BlockLiquidDetectionComponent;
struct BlockLootComponent;
struct BlockMapColorComponent;
struct BlockMaterialInstancesComponent;
struct BlockMovableComponent;
struct BlockPlacementFilterComponent;
struct BlockPrecipitationInteractionsComponent;
struct BlockQueuedTickingComponent;
struct BlockRandomTickingComponent;
struct BlockRedstoneComponent;
struct BlockRedstoneProducerComponent;
struct BlockSelectionBoxComponent;
struct BlockSoundComponent;
struct BlockSupportComponent;
struct BlockVoxelShapesCullingComponent;
#endif // @header-generator platform
// clang-format on

class BlockComponentStorage {
public:
    // BlockComponentStorage inner types declare
    // clang-format off
    struct ComponentBase;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    template<typename T0> struct ComponentInstance;
#endif // @header-generator platform
    // clang-format on

    // BlockComponentStorage inner types define
    struct ComponentBase {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~ComponentBase();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual ~ComponentBase() = default;
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    template <typename T0>
    struct ComponentInstance {};
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                             mComponents;
    ::ll::UntypedStorage<8, 24>                                             mStatelessComponents;
    ::ll::TypedStorage<1, 1, bool>                                          mAllowModifyingComponents;
    ::ll::TypedStorage<1, 1, bool>                                          mAllowComponentReplacement;
    ::ll::TypedStorage<1, 1, bool>                                          mAllowTryGetComponentBeforeFinalization;
    ::ll::TypedStorage<8, 16, std::weak_ptr<BlockComponentEventSubscriber>> mBlockComponentEventSubscriber;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::Bedrock::typeid_t<void>,
            ::std::unique_ptr<::BlockComponentStorage::ComponentBase>,
            ::std::less<::Bedrock::typeid_t<void>>,
            ::std::vector<::Bedrock::typeid_t<void>>,
            ::std::vector<::std::unique_ptr<::BlockComponentStorage::ComponentBase>>>>
        mComponents;
    ::ll::TypedStorage<
        8,
        24,
        ::brstd::flat_set<
            ::Bedrock::typeid_t<void>,
            ::std::less<::Bedrock::typeid_t<void>>,
            ::std::vector<::Bedrock::typeid_t<void>>>>
                                                                                mStatelessComponents;
    ::ll::TypedStorage<1, 1, bool>                                              mAllowModifyingComponents;
    ::ll::TypedStorage<1, 1, bool>                                              mAllowComponentReplacement;
    ::ll::TypedStorage<1, 1, bool>                                              mAllowTryGetComponentBeforeFinalization;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BlockComponentEventSubscriber>> mBlockComponentEventSubscriber;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockComponentStorage();
#else // @header-generator platform
    MCAPI ::BlockComponentStorage::ComponentBase* _findComponentBase(::Bedrock::typeid_t<void> componentIdToFind) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addStatelessComponent(::Bedrock::typeid_t<void> const);

    MCNAPI ::BlockComponentStorage::ComponentBase* _findComponentBase(::Bedrock::typeid_t<void> const) const;

    MCNAPI void allowComponentReplacement();

    MCNAPI void allowTryGetComponentBeforeFinalization();

    MCNAPI void finalizeComponents();

    MCNAPI bool modificationIsAllowed() const;

    MCNAPI void setAllowComponentReplacement(bool);

    MCNAPI void setBlockComponentEventSubscriber(std::shared_ptr<BlockComponentEventSubscriber>);

    MCNAPI ~BlockComponentStorage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI ~BlockComponentStorage();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
