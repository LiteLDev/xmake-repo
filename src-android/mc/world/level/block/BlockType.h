#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/util/IntRange.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockClientPredictionOverrides.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/NewBlockID.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/block_events/BlockEventManager.h"
#include "mc/world/level/block/components/BlockComponentStorage.h"
#include "mc/world/level/block/components/NetEaseBlockComponentStorage.h"
#include "mc/world/level/block/core/Cache.h"
#include "mc/world/level/block/states/BlockStateInstance.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockComponentEventSubscriber;
class BlockConnectionComponent;
class BlockPos;
class BlockSource;
class BlockState;
class BlockStateGroup;
class Container;
class EntityContext;
class Experiments;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class IRandom;
class IResourceDropsStrategy;
class ItemActor;
class ItemInstance;
class ItemStack;
class Material;
class MobSpawnerData;
class NeighborBlockDirections;
class Player;
class Random;
class ScriptBlockCustomComponentsFinalizer;
class SemVersion;
class SpawnConditions;
class Vec3;
struct ActorBlockSyncMessage;
struct BlockAnimateTickData;
struct BlockComponentDescription;
struct BlockGraphicsModeChangeContext;
struct CommandName;
struct CopperBehavior;
struct ResourceDrops;
struct ResourceDropsContext;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockTrait { class IGetPlacementBlockCallback; }
namespace BlockTrait { class ITrait; }
namespace VoxelShapes { class VoxelShapeRegistry; }
namespace br::spawn { struct EntityType; }
// clang-format on

class BlockType {
public:
    // BlockType inner types declare
    // clang-format off
    struct NameInfo;
    struct AlteredStateCollection;
    struct HorizontalDirectionBits;
    struct RemovedStateCollection;
    struct RearrangedStateCollection;
    // clang-format on

    // BlockType inner types define
    struct NameInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString> mRawName;
        ::ll::TypedStorage<8, 24, std::string>    mNamespaceName;
        ::ll::TypedStorage<8, 40, ::HashedString> mFullName;
        ::ll::TypedStorage<8, 24, std::string>    mPreFlatteningName;
        // NOLINTEND

    public:
        // prevent constructor by default
        NameInfo& operator=(NameInfo const&);
        NameInfo(NameInfo const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~NameInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct AlteredStateCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::reference_wrapper<const BlockState>> mBlockState;
        // NOLINTEND

    public:
        // prevent constructor by default
        AlteredStateCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual std::optional<int> getState(::BlockType const&, int) const = 0;

        virtual ~AlteredStateCollection() = default;

        virtual ::Block const* setState(::BlockType const&, int, int) const = 0;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static bool _checkVersioningRequirements(::SemVersion const&);
        // NOLINTEND
    };

    struct HorizontalDirectionBits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mNorth;
        ::ll::TypedStorage<1, 1, bool> mEast;
        ::ll::TypedStorage<1, 1, bool> mSouth;
        ::ll::TypedStorage<1, 1, bool> mWest;
        // NOLINTEND
    };

    struct RemovedStateCollection : public ::BlockType::AlteredStateCollection {
    public:
        // RemovedStateCollection inner types declare
        // clang-format off
        struct SplitBlock;
        // clang-format on

        // RemovedStateCollection inner types define
        struct SplitBlock {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, int>                               mData;
            ::ll::TypedStorage<8, 8, std::reference_wrapper<BlockType>> mBlockType;
            // NOLINTEND

        public:
            // prevent constructor by default
            SplitBlock();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI SplitBlock(int, ::BlockType&);
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(int, ::BlockType&);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<BlockType::RemovedStateCollection::SplitBlock>> mSplitBlocks;
        // NOLINTEND

    public:
        // prevent constructor by default
        RemovedStateCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual std::optional<int> getState(::BlockType const&, int) const;

        virtual ~RemovedStateCollection();

        virtual ::Block const* setState(::BlockType const&, int, int) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void
        add(::BlockState const&, std::vector<BlockType::RemovedStateCollection::SplitBlock>&&, ::SemVersion const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI std::optional<int> $getState(::BlockType const&, int) const;

        MCNAPI ::Block const* $setState(::BlockType const&, int, int) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct RearrangedStateCollection : public ::BlockType::AlteredStateCollection {
    public:
        // RearrangedStateCollection inner types define
        using GetterType = std::function<std::optional<int>(const BlockType&, int)>;

        using SetterType = std::function<const Block*(const BlockType&, int, int)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mGetter;
        ::ll::UntypedStorage<8, 48> mSetter;
        // NOLINTEND

    public:
        // prevent constructor by default
        RearrangedStateCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual std::optional<int> getState(::BlockType const&, int) const;

        virtual ~RearrangedStateCollection();

        virtual ::Block const* setState(::BlockType const&, int, int) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void
        add(::BlockType&,
            ::BlockState const&,
            std::function<std::optional<int>(const BlockType&, int)>,
            std::function<const Block*(const BlockType&, int, int)>,
            ::SemVersion const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI std::optional<int> $getState(::BlockType const&, int) const;

        MCNAPI ::Block const* $setState(::BlockType const&, int, int) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mDescriptionId;
    ::ll::TypedStorage<8, 8, ::Material const&> mMaterial;
    ::ll::TypedStorage<8, 96, ::BlockComponentStorage> mComponents;
    ::ll::TypedStorage<8, 128, ::BlockType::NameInfo> mNameInfo;
    ::ll::TypedStorage<8, 8, ::BlockProperty> mProperties;
    ::ll::TypedStorage<8, 24, std::string> mCreativeGroup;
    ::ll::TypedStorage<4, 4, float> mThickness;
    ::ll::TypedStorage<4, 4, float> mTranslucency;
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory> mCreativeCategory;
    ::ll::TypedStorage<1, 1, ::BlockActorType> mBlockEntityType;
    ::ll::UntypedStorage<1, 1> mRenderLayer;
    bool mFancy : 1;
    bool mRenderLayerCanRenderAsOpaque : 1;
    bool mCanSlide : 1;
    bool mCanReactToNeighborsDuringInstatick : 1;
    bool mFalling : 1;
    bool mIsHiddenInCommands : 1;
    bool mAllowsRunes : 1;
    bool mCanBeBrokenFromFalling : 1;
    bool mCanBeOriginalSurface : 1;
    bool mSolid : 1;
    bool mPushesOutItems : 1;
    bool mIgnoreBlockForInsideCubeRenderer : 1;
    bool mIsOpaqueFullBlock : 1;
    bool mShouldRandomTickExtraLayer : 1;
    bool mIsMobPiece : 1;
    bool mCanBeExtraBlock : 1;
    bool mIsVanilla : 1;
    bool mDataDrivenVanillaBlocksAndItemsEnabled : 1;
    bool mRequiresCorrectToolForDrops : 1;
    bool mReturnDefaultBlockOnUnidentifiedBlockState : 1;
    ::ll::TypedStorage<1, 1, ::Brightness> mLightBlock;
    ::ll::TypedStorage<1, 1, ::Brightness> mLightEmission;
    ::ll::TypedStorage<4, 16, ::mce::Color> mMapColor;
    ::ll::TypedStorage<4, 4, float> mFriction;
    ::ll::TypedStorage<1, 1, ::TintMethod> mTintMethod;
    ::ll::UntypedStorage<1, 1> mClientPredictionOverrides;
    ::ll::UntypedStorage<2, 2> mID;
    ::ll::UntypedStorage<8, 32> mMinRequiredBaseGameVersion;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mTags;
    ::ll::TypedStorage<4, 24, ::AABB> mVisualShape;
    ::ll::TypedStorage<4, 4, uint> mBitsUsed;
    ::ll::TypedStorage<4, 4, uint> mTotalBitsUsed;
    ::ll::TypedStorage<8, 24, std::map<ulong, BlockStateInstance>> mStates;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ulong>> mStateNameMap;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Block>>> mBlockPermutations;
    ::ll::TypedStorage<8, 8, ::Block const*> mDefaultState;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<BlockTrait::IGetPlacementBlockCallback>>> mGetPlacementBlockCallbacks;
    ::ll::UntypedStorage<8, 184> mLegacyDataLookupTable;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockStateGroup>> mBlockStateGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IResourceDropsStrategy>> mResourceDropsStrategy;
    ::ll::TypedStorage<4, 8, ::IntRange> mExperienceDropRange;
    ::ll::TypedStorage<8, 96, ::NetEaseBlockComponentStorage> mNetEaseComponentStorage;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<BlockType::AlteredStateCollection>>> mAlteredStateCollections;
    ::ll::TypedStorage<8, 32, ::BlockEvents::BlockEventManager> mEventManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockComponentEventSubscriber>> mBlockComponentEventSubscriber;
    ::ll::TypedStorage<8, 16, std::shared_ptr<VoxelShapes::VoxelShapeRegistry>> mShapeRegistry;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BlockType();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BlockType();

    virtual ::Block const* getNextBlockPermutation(::Block const&) const;

    virtual ::HitResult clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool getCollisionShapeForCamera(::AABB&, ::Block const&, ::IConstBlockSource const&, ::BlockPos const&) const;

    virtual bool addCollisionShapes(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual void addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual ::AABB const& getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual ::AABB const& getUIShape(::Block const&, ::AABB&) const;

    virtual bool getLiquidClipVolume(::Block const&, ::BlockSource&, ::BlockPos const&, ::AABB&) const;

    virtual bool isObstructingChests(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual ::Vec3 randomlyModifyPosition(::BlockPos const&) const;

    virtual void onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    virtual void onLightningHit(::BlockSource&, ::BlockPos const&) const;

    virtual bool liquidCanFlowIntoFromDirection(uchar, std::function<const Block&(const BlockPos&)> const&, ::BlockPos const&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool canProvideMultifaceSupport(::Block const&, uchar) const;

    virtual bool isMovingBlock() const;

    virtual ::CopperBehavior const* tryGetCopperBehavior() const;

    virtual bool isStemBlock() const;

    virtual bool isContainerBlock() const;

    virtual bool isCraftingBlock() const;

    virtual bool isLavaBlocking() const;

    virtual bool isFenceBlock() const;

    virtual bool isThinFenceBlock() const;

    virtual bool isWallBlock() const;

    virtual bool isSlabBlock() const;

    virtual bool isChestBlock() const;

    virtual bool isRailBlock() const;

    virtual bool isLeverBlock() const;

    virtual bool isCandleCakeBlock() const;

    virtual bool isMultifaceBlock() const;

    virtual bool isSignalSource() const;

    virtual bool isConsumerComponent() const;

    virtual bool canBeOriginalSurface(bool) const;

    virtual bool isSilentWhenJumpingOff() const;

    virtual bool isValidAuxValue(int) const;

    virtual bool canFillAtPos(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual ::Block const& sanitizeFillBlock(::Block const&) const;

    virtual void onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual int getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;

    virtual std::optional<HashedString> getRequiredMedium() const;

    virtual bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    virtual void handlePrecipitation(::BlockSource&, ::BlockPos const&, float, float) const;

    virtual bool canBeUsedInCommands(::BaseGameVersion const&) const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool shouldDispense(::BlockSource&, ::Container&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual void transformOnFall(::BlockSource&, ::BlockPos const&, ::Actor*, float) const;

    virtual void onMove(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool detachesOnPistonMove(::BlockSource&, ::BlockPos const&) const;

    virtual void movedByPiston(::BlockSource&, ::BlockPos const&) const;

    virtual void onStructureBlockPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    virtual bool isPreservingMediumWhenPlaced(::BlockType const*) const;

    virtual bool isFilteredOut(::BlockRenderLayer) const;

    virtual bool canRenderSelectionOverlay(::BlockRenderLayer) const;

    virtual bool ignoreEntitiesOnPistonMove(::Block const&) const;

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual bool mayConsumeFertilizer(::BlockSource&) const;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool mayPick(::BlockSource const&, ::Block const&, bool) const;

    virtual bool mayPick() const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    virtual bool mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    virtual bool tryToPlace(::BlockSource&, ::BlockPos const&, ::Block const&, ::ActorBlockSyncMessage const*) const;

    virtual bool tryToTill(::BlockSource&, ::BlockPos const&, ::Actor&, ::ItemStack&) const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual void destroy(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor*) const;

    virtual bool getIgnoresDestroyPermissions(::Actor&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual void spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual bool isAttachedTo(::BlockSource&, ::BlockPos const&, ::BlockPos&) const;

    virtual bool attack(::Player*, ::BlockPos const&) const;

    virtual bool shouldTriggerEntityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    virtual bool canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&) const;

    virtual bool canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&, ::BlockType const&) const;

    virtual void triggerEvent(::BlockSource&, ::BlockPos const&, int, int) const;

    virtual bool hasTag(::BlockSource&, ::BlockPos const&, ::Block const&, std::string const&) const;

    virtual ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const&, ::BlockSource&) const;

    virtual bool shouldStopFalling(::Actor&) const;

    virtual bool pushesUpFallingBlocks() const;

    virtual bool canHaveExtraData() const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual bool canSlide(::BlockSource&, ::BlockPos const&) const;

    virtual bool canInstatick() const;

    virtual bool canSpawnAt(::BlockSource const&, ::BlockPos const&) const;

    virtual void notifySpawnedAt(::BlockSource&, ::BlockPos const&) const;

    virtual bool causesFreezeEffect() const;

    virtual std::string buildDescriptionId(::Block const&) const;

    virtual bool isSeasonTinted(::Block const&, ::BlockSource&, ::BlockPos const&) const;

    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    virtual float getShadeBrightness(::Block const&) const;

    virtual int telemetryVariant(::BlockSource&, ::BlockPos const&) const;

    virtual int getVariant(::Block const&) const;

    virtual bool canSpawnOn(::Actor*) const;

    virtual ::Block const& getRenderBlock() const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual ::Flip getFaceFlip(uchar, ::Block const&) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual void animateTick(::BlockAnimateTickData const&) const;

    virtual ::Block const* tryLegacyUpgrade(ushort) const;

    virtual bool dealsContactDamage(::Actor const&, ::Block const&, bool) const;

    virtual ::Block const* tryGetInfested(::Block const&) const;

    virtual ::Block const* tryGetUninfested(::Block const&) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual void onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    virtual void onStandOn(::EntityContext&, ::BlockPos const&) const;

    virtual bool shouldTickOnSetBlock() const;

    virtual bool isInteractiveBlock() const;

    virtual bool allowStateMismatchOnPlacement(::Block const&, ::Block const&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const;

    virtual int getExtraRenderLayers() const;

    virtual ::HashedString const& getCullingLayer() const;

    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;

    virtual ::Brightness getLight(::Block const&) const;

    virtual ::Brightness getLightEmission(::Block const&) const;

    virtual ::Brightness getEmissiveBrightness(::Block const&) const;

    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual ::Block const& getInitialDefaultState();

    virtual void _onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockType(::BlockType const&);

    MCNAPI BlockType(::BlockType&&);

    MCNAPI BlockType(std::string const&, int, ::Material const&);

    MCNAPI std::optional<int> _tryLookupAlteredStateCollection(ulong, ushort) const;

    MCNAPI ::Block const* _trySetStateFromAlteredStateCollection(ulong, int, ushort) const;

    MCNAPI ::BlockType& addBlockProperties(::BlockProperty);

    MCNAPI ::BlockType& addComponent(::BlockComponentDescription const&);

    MCNAPI void addGetPlacementBlockCallback(std::unique_ptr<BlockTrait::IGetPlacementBlockCallback>);

    MCNAPI ::BlockType& addState(::BlockState const&);

    MCNAPI ::BlockType& addState(::BlockState const&, ulong);

    MCNAPI ::BlockType& addTag(::HashedString const&);

    MCNAPI ::BlockType& addTrait(::BlockTrait::ITrait const&);

    MCNAPI bool anyOf(std::initializer_list<std::reference_wrapper<const HashedString>>) const;

    MCNAPI bool anyOf(::gsl::span<const std::reference_wrapper<const HashedString>> const&) const;

    MCNAPI std::string buildDescriptionName(::Block const&) const;

    MCNAPI bool canHurtAndBreakItem() const;

    MCNAPI bool canProvideFullSupport(::Block const&, uchar) const;

    MCNAPI bool canReactToNeighborsDuringInstatick() const;

    MCNAPI ::Block const&
    connectionUpdate(::BlockSource&, ::Block const&, ::BlockPos const&, ::NeighborBlockDirections const&) const;

    MCNAPI void createBlockPermutations(uint);

    MCNAPI ::WeakPtr<BlockType> createWeakPtr() const;

    MCNAPI void finalizeBlockComponentStorage();

    MCNAPI void finalizeScriptCustomComponents(::ScriptBlockCustomComponentsFinalizer&);

    MCNAPI void forEachAlteredBlockState(::brstd::function_ref<bool(const BlockState&)>) const;

    MCNAPI void forEachBlockPermutation(::brstd::function_ref<bool(const Block&)>) const;

    MCNAPI bool forEachBlockPermutationMutable(::brstd::function_ref<bool(Block&)>);

    MCNAPI void forEachBlockStateInstance(::brstd::function_ref<bool(const BlockStateInstance&)>) const;

    MCNAPI bool getAllowsRunes() const;

    MCNAPI ::BlockActorType getBlockEntityType() const;

    MCNAPI short getBlockItemId() const;

    MCNAPI ::BlockState const* getBlockState(::HashedString const&) const;

    MCNAPI ::BlockStateGroup const* getBlockStateGroup() const;

    MCNAPI ::BlockStateGroup* getBlockStateGroup();

    MCNAPI bool getClientPredictionOverride(::BlockClientPredictionOverrides) const;

    MCNAPI std::vector<CommandName> getCommandNames() const;

    MCNAPI ::SharedTypes::CreativeItemCategory getCreativeCategory() const;

    MCNAPI void getDebugText(std::vector<std::string>&, ::BlockPos const&) const;

    MCNAPI ::Block const& getDefaultState() const;

    MCNAPI std::string const& getDescriptionId() const;

    MCNAPI float getDestroySpeed() const;

    MCNAPI ::BlockEvents::BlockEventManager& getEventManager();

    MCNAPI int getExperienceDrop(::Random&) const;

    MCNAPI float getExplosionResistance() const;

    MCNAPI float getFriction() const;

    MCNAPI ::Material const& getMaterial() const;

    MCNAPI std::string const& getNamespace() const;

    MCNAPI ::HashedString const& getRawNameHash() const;

    MCNAPI std::string const& getRawNameId() const;

    MCNAPI ::BlockRenderLayer getRenderLayer() const;

    MCNAPI ::BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCNAPI ::ResourceDrops getResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const;

    MCNAPI ::VoxelShapes::VoxelShapeRegistry const* getShapeRegistry() const;

    MCNAPI ::Block const& getStateFromLegacyData(ushort) const;

    MCNAPI uint getStateMask(::BlockState const&) const;

    MCNAPI float getThickness() const;

    MCNAPI ::TintMethod getTintMethod() const;

    MCNAPI float getTranslucency() const;

    MCNAPI ulong getUniquePermutations() const;

    MCNAPI bool hasAnyProperty(::BlockProperty) const;

    MCNAPI bool hasBlockEntity() const;

    MCNAPI bool hasNonLegacyState(ulong const&) const;

    MCNAPI bool hasProperty(::BlockProperty) const;

    MCNAPI bool hasResourceDropsStrategy() const;

    MCNAPI bool hasState(::BlockState const&) const;

    MCNAPI bool hasState(::HashedString const&) const;

    MCNAPI bool hasTag(::HashedString const&) const;

    MCNAPI bool hasTag(ulong const&) const;

    MCNAPI void initializeBlockStateGroup();

    MCNAPI bool isAir() const;

    MCNAPI bool isCropBlock() const;

    MCNAPI bool isDuplicatedAliasName() const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool isFallingBlock() const;

    MCNAPI bool isMotionBlockingBlock() const;

    MCNAPI bool isOpaqueFullBlock() const;

    MCNAPI bool isSolid() const;

    MCNAPI bool isSolidBlockingBlock() const;

    MCNAPI bool isValidSpawn(::BlockSource&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&) const;

    MCNAPI bool isVanilla() const;

    MCNAPI bool matchesStates(::BlockType const&) const;

    MCNAPI std::shared_ptr<BlockActor> newBlockEntity(::BlockPos const&) const;

    MCNAPI void onFallOnBase(::BlockEvents::BlockEntityFallOnEvent&) const;

    MCNAPI void onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI ::BlockType& operator=(::BlockType const&);

    MCNAPI ::BlockType& operator=(::BlockType&&);

    MCNAPI ::BlockType& overrideBlockProperties(::BlockProperty);

    MCNAPI bool requiresCorrectToolForDrops() const;

    MCNAPI ::BlockType& setAllowsRunes(bool);

    MCNAPI ::BlockType& setCanBeExtraBlock(bool);

    MCNAPI ::BlockType& setCanBeOriginalSurface(bool);

    MCNAPI ::BlockType& setCategory(::SharedTypes::CreativeItemCategory);

    MCNAPI void setClientPredictionOverride(::BlockClientPredictionOverrides, bool);

    MCNAPI void setEnableDataDrivenVanillaBlocksAndItems(bool);

    MCNAPI ::BlockType& setExperienceDrop(::IntRange);

    MCNAPI ::BlockType& setFriction(float);

    MCNAPI void setIgnoreBlockForInsideCubeRenderer(bool);

    MCNAPI ::BlockType& setIsHiddenInCommands(bool);

    MCNAPI ::BlockType&
    setIsValidSpawn(bool (*)(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&));

    MCNAPI void setIsVanillaBlock(bool);

    MCNAPI ::BlockType& setLightBlock(::Brightness);

    MCNAPI ::BlockType& setLightEmission(::Brightness);

    MCNAPI ::BlockType& setMapColor(::mce::Color const&);

    MCNAPI ::BlockType& setMinRequiredBaseGameVersion(::BaseGameVersion const&);

    MCNAPI ::BlockType& setNameId(std::string const&);

    MCNAPI void setOnlyPermutationandDefaultState(std::unique_ptr<Block>);

    MCNAPI void setOpaqueFullBlock(bool);

    MCNAPI void setPreFlatteningName(std::string);

    MCNAPI void setPushesOutItems(bool);

    MCNAPI void setRandomTickingExtraLayer(bool);

    MCNAPI ::BlockType& setRequiresCorrectToolForDrops();

    MCNAPI void setResourceDropsStrategy(std::unique_ptr<IResourceDropsStrategy>);

    MCNAPI void setShapeRegistry(std::shared_ptr<VoxelShapes::VoxelShapeRegistry>);

    MCNAPI void setSolid(bool);

    MCNAPI ::BlockType& setTintMethod(::TintMethod);

    MCNAPI ::BlockType& setTranslucency(float);

    MCNAPI void setVisualShape(::AABB const&);

    MCNAPI void setVisualShape(::Vec3 const&, ::Vec3 const&);

    MCNAPI bool shouldRandomTick() const;

    MCNAPI bool shouldTriggerOnStandOn(::Actor&, ::BlockPos const&) const;

    MCNAPI void spawnResources(
        ::BlockSource&,
        ::BlockPos const&,
        ::Block const&,
        ::IRandom&,
        ::ResourceDropsContext const&,
        ::Actor const*
    ) const;

    MCNAPI ::Block const* tryGetStateFromLegacyData(ushort) const;

    MCNAPI bool updateTallestCollisionShape(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::AABB const&,
        ::optional_ref<const GetCollisionShapeInterface>,
        ::AABB&,
        ::Vec3 const&,
        float&
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void DEPRECATEDcallOnGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    MCNAPI static bool addAABB(::AABB const&, ::AABB const*, std::vector<AABB>&);

    MCNAPI static std::string buildDescriptionIdFromNameInfo(::BlockType::NameInfo const&);

    MCNAPI static ::BlockType::NameInfo extractBlockNameInfo(std::string const&);

    MCNAPI static ::BlockType::HorizontalDirectionBits
    getConnectedDirections(::Block const&, ::BlockPos const&, ::IConstBlockSource const&);

    MCNAPI static uchar getPlacementFacingAll(::Actor const&, ::BlockPos const&, float);

    MCNAPI static uchar getPlacementFacingAllExceptAxisY(::Actor const&, ::BlockPos const&, float);

    MCNAPI static ::ItemActor* popResource(::BlockSource&, ::BlockPos const&, ::ItemStack const&, ::Actor const*);

    MCNAPI static ::ItemActor* popResource(::BlockSource&, ::BlockPos const&, ::ItemInstance const&, ::Actor const*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& BLOCK_DESCRIPTION_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockType const&);

    MCNAPI void* $ctor(::BlockType&&);

    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const* $getNextBlockPermutation(::Block const&) const;

    MCNAPI ::HitResult $clip(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::Vec3 const&,
        ::Vec3 const&,
        ::ShapeType,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI bool
    $getCollisionShapeForCamera(::AABB&, ::Block const&, ::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI bool $addCollisionShapes(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB const*,
        std::vector<AABB>&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI void
    $addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI ::AABB const&
    $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI ::AABB const& $getUIShape(::Block const&, ::AABB&) const;

    MCNAPI bool $getLiquidClipVolume(::Block const&, ::BlockSource&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $isObstructingChests(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::Vec3 $randomlyModifyPosition(::BlockPos const&) const;

    MCNAPI void $onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    MCNAPI void $onLightningHit(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar,
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&
    ) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $canProvideMultifaceSupport(::Block const&, uchar) const;

    MCNAPI bool $isMovingBlock() const;

    MCNAPI ::CopperBehavior const* $tryGetCopperBehavior() const;

    MCNAPI bool $isStemBlock() const;

    MCNAPI bool $isContainerBlock() const;

    MCNAPI bool $isCraftingBlock() const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $isFenceBlock() const;

    MCNAPI bool $isThinFenceBlock() const;

    MCNAPI bool $isWallBlock() const;

    MCNAPI bool $isSlabBlock() const;

    MCNAPI bool $isChestBlock() const;

    MCNAPI bool $isRailBlock() const;

    MCNAPI bool $isLeverBlock() const;

    MCNAPI bool $isCandleCakeBlock() const;

    MCNAPI bool $isMultifaceBlock() const;

    MCNAPI bool $isSignalSource() const;

    MCNAPI bool $isConsumerComponent() const;

    MCNAPI bool $canBeOriginalSurface(bool) const;

    MCNAPI bool $isSilentWhenJumpingOff() const;

    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI bool $canFillAtPos(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::Block const& $sanitizeFillBlock(::Block const&) const;

    MCNAPI void $onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI int $getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;

    MCNAPI std::optional<HashedString> $getRequiredMedium() const;

    MCNAPI bool $shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    MCNAPI void $handlePrecipitation(::BlockSource&, ::BlockPos const&, float, float) const;

    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const&) const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $shouldDispense(::BlockSource&, ::Container&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI void $transformOnFall(::BlockSource&, ::BlockPos const&, ::Actor*, float) const;

    MCNAPI void $onMove(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $detachesOnPistonMove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $movedByPiston(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $onStructureBlockPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isPreservingMediumWhenPlaced(::BlockType const*) const;

    MCNAPI bool $isFilteredOut(::BlockRenderLayer) const;

    MCNAPI bool $canRenderSelectionOverlay(::BlockRenderLayer) const;

    MCNAPI bool $ignoreEntitiesOnPistonMove(::Block const&) const;

    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI bool $mayConsumeFertilizer(::BlockSource&) const;

    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $mayPick(::BlockSource const&, ::Block const&, bool) const;

    MCNAPI bool $mayPick() const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI bool $mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $tryToPlace(::BlockSource&, ::BlockPos const&, ::Block const&, ::ActorBlockSyncMessage const*) const;

    MCNAPI bool $tryToTill(::BlockSource&, ::BlockPos const&, ::Actor&, ::ItemStack&) const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI void $destroy(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor*) const;

    MCNAPI bool $getIgnoresDestroyPermissions(::Actor&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI void
    $spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI bool $isAttachedTo(::BlockSource&, ::BlockPos const&, ::BlockPos&) const;

    MCNAPI bool $attack(::Player*, ::BlockPos const&) const;

    MCNAPI bool $shouldTriggerEntityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    MCNAPI bool $canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&) const;

    MCNAPI bool $canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&, ::BlockType const&) const;

    MCNAPI void $triggerEvent(::BlockSource&, ::BlockPos const&, int, int) const;

    MCNAPI bool $hasTag(::BlockSource&, ::BlockPos const&, ::Block const&, std::string const&) const;

    MCNAPI ::MobSpawnerData const* $getMobToSpawn(::SpawnConditions const&, ::BlockSource&) const;

    MCNAPI bool $shouldStopFalling(::Actor&) const;

    MCNAPI bool $pushesUpFallingBlocks() const;

    MCNAPI bool $canHaveExtraData() const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI bool $canSlide(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $canInstatick() const;

    MCNAPI bool $canSpawnAt(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI void $notifySpawnedAt(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $causesFreezeEffect() const;

    MCNAPI std::string $buildDescriptionId(::Block const&) const;

    MCNAPI bool $isSeasonTinted(::Block const&, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    MCNAPI float $getShadeBrightness(::Block const&) const;

    MCNAPI int $telemetryVariant(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI ::Block const& $getRenderBlock() const;

    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;

    MCNAPI ::Flip $getFaceFlip(uchar, ::Block const&) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI void $animateTick(::BlockAnimateTickData const&) const;

    MCNAPI ::Block const* $tryLegacyUpgrade(ushort) const;

    MCNAPI bool $dealsContactDamage(::Actor const&, ::Block const&, bool) const;

    MCNAPI ::Block const* $tryGetInfested(::Block const&) const;

    MCNAPI ::Block const* $tryGetUninfested(::Block const&) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI void $onStandOn(::EntityContext&, ::BlockPos const&) const;

    MCNAPI bool $shouldTickOnSetBlock() const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI bool $allowStateMismatchOnPlacement(::Block const&, ::Block const&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::BlockRenderLayer $getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getExtraRenderLayers() const;

    MCNAPI ::HashedString const& $getCullingLayer() const;

    MCNAPI float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI ::Brightness $getLight(::Block const&) const;

    MCNAPI ::Brightness $getLightEmission(::Block const&) const;

    MCNAPI ::Brightness $getEmissiveBrightness(::Block const&) const;

    MCNAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::Block const& $getInitialDefaultState();

    MCNAPI void $_onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
