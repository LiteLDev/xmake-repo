#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockClientPredictionOverrides.h"
#include "mc/world/level/block/BlockOcclusionType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/CachedComponentData.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/components/BlockComponentDirectData.h"
#include "mc/world/level/block/components/BlockComponentStorage.h"
#include "mc/world/level/block/components/BreathingType.h"
#include "mc/world/level/block/components/ConnectionID.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class BlockChangeContext;
class BlockPos;
class BlockSource;
class BlockState;
class BlockStateGroup;
class BlockType;
class Container;
class EntityContext;
class GetCollisionShapeInterface;
class HitResult;
class IClientBlockData;
class IConstBlockSource;
class IRandom;
class ItemActor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Material;
class MobSpawnerData;
class NeighborBlockDirections;
class Player;
class Random;
class SpawnConditions;
class Vec3;
struct ActorBlockSyncMessage;
struct BlockAnimateTickData;
struct BlockComponentDescription;
struct BlockGraphicsModeChangeContext;
struct Brightness;
struct ClientBlockData;
struct CopperBehavior;
struct ResourceDropsContext;
namespace BlockEvents { class BlockEventManager; }
namespace VoxelShapes { class VoxelShape; }
namespace br::spawn { struct EntityType; }
namespace mce { class Color; }
// clang-format on

class Block {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::BlockComponentStorage>          mComponents;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<BlockType*>>       mBlockType;
    ::ll::TypedStorage<4, 8, ::CachedComponentData>             mCachedComponentData;
    ::ll::TypedStorage<8, 96, ::BlockComponentDirectData>       mDirectData;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>        mTags;
    ::ll::TypedStorage<8, 32, ::CompoundTag>                    mSerializationId;
    ::ll::TypedStorage<8, 8, ulong>                             mSerializationIdHash;
    ::ll::TypedStorage<4, 4, uint>                              mSerializationIdHashForNetwork;
    ::ll::TypedStorage<4, 4, uint>                              mNetworkId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IClientBlockData>> mClientData;
    ::ll::TypedStorage<2, 2, ushort const>                      mData;
    ::ll::TypedStorage<1, 1, bool>                              mHasRuntimeId;
    // NOLINTEND

public:
    // prevent constructor by default
    Block();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Block();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Block(ushort const, ::gsl::not_null<BlockType*>);

    MCNAPI Block(ushort const, ::gsl::not_null<BlockType*>, ::CompoundTag, uint const&);

    MCNAPI ::BlockOcclusionType _getBlockOcclusionType() const;

    MCNAPI bool _isSolid() const;

    MCNAPI void _playAmbientSounds(::BlockAnimateTickData const&) const;

    MCNAPI void _queueForTickBasedOnComponentConfiguration(::BlockSource&, ::BlockPos const&, ::Random&, bool) const;

    MCNAPI void _removeFromTickingQueues(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool accumulatesSnow(bool) const;

    MCNAPI void addAABBs(::BlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    MCNAPI bool addCollisionShapes(
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB const*,
        std::vector<AABB>&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::Block& addComponent(::BlockComponentDescription const&);

    MCNAPI ::Block& addTag(::HashedString const&);

    MCNAPI bool allowStateMismatchOnPlacement(::Block const&) const;

    MCNAPI void animateTick(::BlockAnimateTickData const&) const;

    MCNAPI void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI ::ItemInstance asItemInstance(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance asItemInstance(::BlockSource&, ::BlockPos const&, bool) const;

    MCNAPI bool attack(::Player*, ::BlockPos const&) const;

    MCNAPI bool breaksFallingBlocks(::BaseGameVersion const) const;

    MCNAPI std::string buildDescriptionId() const;

    MCNAPI std::string buildDescriptionName() const;

    MCNAPI void buildSerializationId(uint);

    MCNAPI void cacheComponentData();

    MCNAPI bool canBeBrokenFromFalling() const;

    MCNAPI bool canBeBuiltOver(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI bool canBeBuiltOver(::BlockSource const&, ::BlockPos const&, ::BlockType const&) const;

    MCNAPI bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool canBeOriginalSurface(bool) const;

    MCNAPI bool canConnect(::Block const&, uchar) const;

    MCNAPI bool canFillAtPos(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool canHaveExtraData() const;

    MCNAPI bool canHurtAndBreakItem() const;

    MCNAPI bool canInstatick() const;

    MCNAPI bool canProvideFullSupport(uchar) const;

    MCNAPI bool canProvideMultifaceSupport(uchar) const;

    MCNAPI bool canProvideSupport(uchar, ::BlockSupportType) const;

    MCNAPI bool canReactToNeighborsDuringInstatick() const;

    MCNAPI bool canRedstoneWirePassThrough() const;

    MCNAPI bool canRenderSelectionOverlay(::BlockRenderLayer) const;

    MCNAPI bool canSlide(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool causesFreezeEffect() const;

    MCNAPI bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::HitResult clip(::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::AABB const&) const;

    MCNAPI ::HitResult clip(
        ::BlockSource const&,
        ::BlockPos const&,
        ::Vec3 const&,
        ::Vec3 const&,
        ::ShapeType,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI uint computeRawSerializationIdHashForNetwork() const;

    MCNAPI ::Block const& connectionUpdate(::BlockSource&, ::BlockPos const&, ::NeighborBlockDirections const&) const;

    MCNAPI ::Block const& copyState(::Block const&, ::BlockState const&) const;

    MCNAPI ::Block const& copyStates(::Block const&) const;

    MCNAPI bool dealsContactDamage(::Actor const&, bool) const;

    MCNAPI void destroy(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    MCNAPI void
    executeItemEvent(::ItemStackBase&, std::string const&, ::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI void finalizeBlockComponentStorage();

    MCNAPI void forEachState(::brstd::function_ref<bool(const BlockState&, int)>) const;

    MCNAPI bool getAllowsRunes() const;

    MCNAPI ::BlockActorType getBlockEntityType() const;

    MCNAPI float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI ::BreathingType getBreathingType(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int getBurnOdds() const;

    MCNAPI bool getClientPredictionOverride(::BlockClientPredictionOverrides) const;

    MCNAPI bool getCollisionShape(
        ::AABB&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI bool getCollisionShapeForCamera(::AABB&, ::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI int getComparatorSignal(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI ::BlockType::HorizontalDirectionBits getConnectedDirections(::BlockPos const&, ::BlockSource&) const;

    MCNAPI std::optional<ConnectionID> getConnectionID() const;

    MCNAPI std::string getCraftingLabelText() const;

    MCNAPI ::HashedString const& getCullingLayer() const;

    MCNAPI void getDebugText(std::vector<std::string>&, ::BlockPos const&) const;

    MCNAPI std::string getDescriptionId() const;

    MCNAPI float getDestroySpeed() const;

    MCNAPI float getDestroySpeed(::ItemStackBase const&) const;

    MCNAPI int getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;

    MCNAPI ::Brightness getEmissiveBrightness() const;

    MCNAPI ::BlockEvents::BlockEventManager const& getEventManager() const;

    MCNAPI int getExperienceDrop(::Random&) const;

    MCNAPI float getExplosionResistance() const;

    MCNAPI int getExtraRenderLayers() const;

    MCNAPI int getFlameOdds() const;

    MCNAPI float getFriction() const;

    MCNAPI bool getIgnoresDestroyPermissions(::Actor&, ::BlockPos const&) const;

    MCNAPI ::Brightness getLight() const;

    MCNAPI ::Brightness getLightEmission() const;

    MCNAPI bool getLiquidClipVolume(::BlockSource&, ::BlockPos const&, ::AABB&) const;

    MCNAPI ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&) const;

    MCNAPI uchar getMappedFace(uchar) const;

    MCNAPI ::Material const& getMaterial() const;

    MCNAPI ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const&, ::BlockSource&) const;

    MCNAPI ::VoxelShapes::VoxelShape const* getOcclusionFaceShape(uchar const) const;

    MCNAPI ::VoxelShapes::VoxelShape const* getOcclusionShape() const;

    MCNAPI ::BlockOcclusionType getOcclusionType() const;

    MCNAPI ::AABB const& getOutline(::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI ::Vec3 getRandomOffset(::BlockPos const&) const;

    MCNAPI uint const& getRuntimeId() const;

    MCNAPI bool getSecondPart(::BlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    MCNAPI ::CompoundTag const& getSerializationId() const;

    MCNAPI float getShadeBrightness() const;

    MCNAPI std::string const& getSoundType() const;

    MCNAPI float getThickness() const;

    MCNAPI ::TintMethod getTintMethod() const;

    MCNAPI float getTranslucency() const;

    MCNAPI ::AABB const& getUIShape(::AABB&) const;

    MCNAPI int getVariant() const;

    MCNAPI ::AABB const& getVisualShape(::AABB&) const;

    MCNAPI ::AABB const& getVisualShapeInWorld(::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool hasBlockEntity() const;

    MCNAPI bool hasComparatorSignal() const;

    MCNAPI bool hasProperty(::BlockProperty) const;

    MCNAPI bool const hasRuntimeId() const;

    MCNAPI bool hasTag(::HashedString const&) const;

    MCNAPI bool hasTag(ulong const&) const;

    MCNAPI bool ignoreBlockForInsideCubeRenderer() const;

    MCNAPI bool ignoreEntitiesOnPistonMove() const;

    MCNAPI bool isAir() const;

    MCNAPI bool isAttachedTo(::BlockSource&, ::BlockPos const&, ::BlockPos&) const;

    MCNAPI bool isContainerBlock() const;

    MCNAPI bool isCraftingBlock() const;

    MCNAPI bool isCropBlock() const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool isFallingBlock() const;

    MCNAPI bool isFenceBlock() const;

    MCNAPI bool isFilteredOut(::BlockRenderLayer) const;

    MCNAPI bool isFullBlockGeometry() const;

    MCNAPI bool isInteractiveBlock() const;

    MCNAPI bool isLavaBlocking() const;

    MCNAPI bool isLavaFlammable() const;

    MCNAPI bool isLeverBlock() const;

    MCNAPI bool isMotionBlockingBlock() const;

    MCNAPI bool isMultifaceBlock() const;

    MCNAPI bool isOpaqueFullBlock() const;

    MCNAPI bool isPartialBlock(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI bool isPreservingMediumWhenPlaced(::Block const&) const;

    MCNAPI bool isRailBlock() const;

    MCNAPI bool isSeasonTinted(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool isSignalSource() const;

    MCNAPI bool isSlabBlock() const;

    MCNAPI bool isSolid() const;

    MCNAPI bool isSolidBlockingBlock() const;

    MCNAPI bool isSolidBlockingBlockAndNotSignalSource() const;

    MCNAPI bool isStemBlock() const;

    MCNAPI bool isTopPartialBlock(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI bool isUnbreakable() const;

    MCNAPI bool isValidSpawn(::BlockSource&, ::BlockPos, ::br::spawn::EntityType const&) const;

    MCNAPI bool isWallBlock() const;

    MCNAPI ::Block const& keepStates(std::vector<const BlockState*> const&) const;

    MCNAPI bool mayConsumeFertilizer(::BlockSource&) const;

    MCNAPI bool mayPick() const;

    MCNAPI bool mayPick(::BlockSource const&, bool) const;

    MCNAPI bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool mayPlace(::BlockSource&, ::BlockPos const&, uchar, ::Actor*) const;

    MCNAPI bool mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void movedByPiston(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool needsLegacyTopRotation() const;

    MCNAPI void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void onActorEvent(::BlockPos const&, std::string const&, ::Actor&) const;

    MCNAPI void onActorInternalEvent(::BlockPos const&, std::string const&, ::Actor&) const;

    MCNAPI void onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI void onFallOn(::BlockSource&, ::BlockPos const&, ::Actor&, float) const;

    MCNAPI bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI void onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI void onLightningHit(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void onPlace(::BlockSource&, ::BlockPos const&, ::Block const&, ::BlockChangeContext const&) const;

    MCNAPI void onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    MCNAPI void onRedstoneUpdate(::BlockSource&, ::BlockPos const&, short, short, bool) const;

    MCNAPI void onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void onStandOn(::EntityContext&, ::BlockPos const&) const;

    MCNAPI void onStateChange(::BlockSource&, ::BlockPos const&, ::Block const&, ::BlockChangeContext const&) const;

    MCNAPI void onStepOff(::Actor&, ::BlockPos const&) const;

    MCNAPI void onStepOn(::Actor&, ::BlockPos const&) const;

    MCNAPI void playerDestroy(::Player&, ::BlockPos const&) const;

    MCNAPI ::Block const* playerWillDestroy(::Player&, ::BlockPos const&) const;

    MCNAPI ::ItemActor* popResource(::BlockSource&, ::BlockPos const&, ::ItemInstance const&, ::Actor const*) const;

    MCNAPI bool pushesOutItems() const;

    MCNAPI bool pushesUpFallingBlocks() const;

    MCNAPI void queuedTick(::BlockSource&, ::BlockPos const&, ::Random&) const;

    MCNAPI void randomTick(::BlockSource&, ::BlockPos const&, ::Random&) const;

    MCNAPI ::Vec3 randomlyModifyPosition(::BlockPos const&) const;

    MCNAPI bool requiresCorrectToolForDrops() const;

    MCNAPI void setRuntimeId(uint const&) const;

    MCNAPI void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    MCNAPI bool shouldRandomTick() const;

    MCNAPI bool shouldRandomTickExtraLayer() const;

    MCNAPI bool shouldStopFalling(::Actor&) const;

    MCNAPI bool shouldTickOnSetBlock() const;

    MCNAPI void
    spawnResources(::BlockSource&, ::BlockPos const&, ::IRandom&, ::ResourceDropsContext const&, ::Actor const*) const;

    MCNAPI int telemetryVariant(::BlockSource&, ::BlockPos const&) const;

    MCNAPI std::string toDebugString() const;

    MCNAPI void transformOnFall(::BlockSource&, ::BlockPos const&, ::Actor*, float) const;

    MCNAPI void triggerEvent(::BlockSource&, ::BlockPos const&, int, int) const;

    MCNAPI ::CopperBehavior const* tryGetCopperBehavior() const;

    MCNAPI ::Block const* tryGetInfested() const;

    MCNAPI ::Block const* tryGetUninfested() const;

    MCNAPI bool tryToPlace(::BlockSource&, ::BlockPos const&, ::ActorBlockSyncMessage const*) const;

    MCNAPI bool tryToTill(::BlockSource&, ::BlockPos const&, ::Actor&, ::ItemStack&) const;

    MCNAPI bool updateTallestCollisionShape(
        ::BlockSource const&,
        ::BlockPos const&,
        ::AABB const&,
        ::optional_ref<const GetCollisionShapeInterface>,
        ::AABB&,
        ::Vec3 const&,
        float&
    ) const;

    MCNAPI bool use(::Player&, ::BlockPos const&, uchar, std::optional<Vec3>) const;

    MCNAPI void visitClientData(::brstd::function_ref<void(const ClientBlockData&)>) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void DEPRECATEDcallOnGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& BLOCK_DESCRIPTION_PREFIX();

    MCNAPI static float const& SIZE_OFFSET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort const, ::gsl::not_null<BlockType*>);

    MCNAPI void* $ctor(ushort const, ::gsl::not_null<BlockType*>, ::CompoundTag, uint const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
