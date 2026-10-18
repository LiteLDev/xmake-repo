#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockType.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/nbt/CompoundTag.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/item/FertilizerType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/ShapeType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/BlockClientPredictionOverrides.h"
#include "mc/world/level/block/BlockOcclusionType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/BlockSupportType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/BlockType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/CachedComponentData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/TintMethod.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/components/BlockComponentDirectData.h"
#include "mc/world/level/block/components/BlockComponentStorage.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/components/BreathingType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class BlockStateGroup;
#else // @header-generator platform
#endif // @header-generator platform
class BlockType;
#if defined(LL_PLAT_A) // @header-generator platform
class Container;
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
class GetCollisionShapeInterface;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
class HitResult;
#if defined(LL_PLAT_A) // @header-generator platform
class IClientBlockData;
class IConstBlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class IRandom;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemActor;
#else // @header-generator platform
#endif // @header-generator platform
class ItemInstance;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackBase;
#if defined(LL_PLAT_A) // @header-generator platform
class Material;
class MobSpawnerData;
class NeighborBlockDirections;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
class SpawnConditions;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorBlockSyncMessage;
#else // @header-generator platform
#endif // @header-generator platform
struct BlockAnimateTickData;
#if defined(LL_PLAT_A) // @header-generator platform
struct BlockComponentDescription;
struct BlockGraphicsModeChangeContext;
struct Brightness;
struct ClientBlockData;
struct CopperBehavior;
#else // @header-generator platform
#endif // @header-generator platform
struct ResourceDropsContext;
#if defined(LL_PLAT_A) // @header-generator platform
namespace BlockEvents { class BlockEventManager; }
namespace VoxelShapes { class VoxelShape; }
namespace br::spawn { struct EntityType; }
namespace mce { class Color; }
#else // @header-generator platform
class IClientBlockData;
#endif // @header-generator platform
// clang-format on

class Block {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using BlockStateValueType = std::variant<int, float, bool, std::string>;
    using BlockStatesType     = std::vector<std::pair<std::string, BlockStateValueType>>;

    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(uint runtimeID);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(uint legacyBlockID, ushort legacyData);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(HashedString const& name);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(HashedString const& name, ushort legacyData);
    LLNDAPI static optional_ref<Block const>
    tryGetFromRegistry(HashedString const& name, BlockStatesType const& states);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(CompoundTag const& nbt);

    LLNDAPI bool              isAir() const;
    [[nodiscard]] inline bool hasProperty(BlockProperty type) const {
        return static_cast<uint64>(type) & static_cast<uint64>(mBlockType->mProperties);
    }

    [[nodiscard]] BlockType const& getBlockType() const { return *mBlockType; }

    [[nodiscard]] std::string const& getTypeName() const { return getBlockType().getTypeName(); }

    [[nodiscard]] unsigned short getBlockItemId() const { return getBlockType().mID->mValue; }

    [[nodiscard]] ushort getData() const { return mData; }

    [[nodiscard]] Material const& getMaterial() const { return getBlockType().mMaterial; }

    template <typename T>
    std::optional<T> getState(uint64 id) const {
        return mBlockType->getState<T>(id, mData);
    }

    template <typename T>
    std::optional<T> getState(BlockState const& state) const {
        return mBlockType->getState<T>(state, mData);
    }

    template <typename T>
    optional_ref<Block const> setState(uint64 id, T value) const {
        return mBlockType->trySetState(id, value, mData);
    }

    template <typename T>
    optional_ref<Block const> setState(BlockState const& state, T value) const {
        return mBlockType->trySetState(state, value, mData);
    }

    bool operator==(Block const& other) const { return mSerializationIdHash == other.mSerializationIdHash; }

    template <typename T>
    MCAPI T const* tryGetComponent() const;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::BlockComponentStorage>              mComponents;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockType*>>         mBlockType;
    ::ll::TypedStorage<4, 8, ::CachedComponentData>                 mCachedComponentData;
    ::ll::TypedStorage<8, 96, ::BlockComponentDirectData>           mDirectData;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>        mTags;
    ::ll::TypedStorage<8, 24, ::CompoundTag>                        mSerializationId;
    ::ll::TypedStorage<8, 8, uint64>                                mSerializationIdHash;
    ::ll::TypedStorage<4, 4, uint>                                  mSerializationIdHashForNetwork;
    ::ll::TypedStorage<4, 4, uint>                                  mNetworkId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IClientBlockData>> mClientData;
    ::ll::TypedStorage<2, 2, ushort const>                          mData;
    ::ll::TypedStorage<1, 1, bool>                                  mHasRuntimeId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Block();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Block();
#else // @header-generator platform
    virtual ~Block() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Block(ushort const, ::gsl::not_null<BlockType*>);
#else // @header-generator platform
    MCAPI Block(ushort data, ::gsl::not_null<::BlockType*> oldBlock);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Block(ushort const, ::gsl::not_null<BlockType*>, ::CompoundTag, uint const&);
#else // @header-generator platform
    MCAPI Block(ushort data, ::gsl::not_null<::BlockType*> oldBlock, ::CompoundTag serId, uint const& runId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockOcclusionType _getBlockOcclusionType() const;
#else // @header-generator platform
    MCAPI bool _isSolid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isSolid() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _playAmbientSounds(::BlockAnimateTickData const& tickData) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _queueForTickBasedOnComponentConfiguration(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Random&         random,
        bool              placingBlock
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block& addComponent(::BlockComponentDescription const&);
#else // @header-generator platform
    MCAPI void _removeFromTickingQueues(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block& addTag(::HashedString const&);
#else // @header-generator platform
    MCAPI ::Block& addTag(::HashedString const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool allowStateMismatchOnPlacement(::Block const&) const;
#else // @header-generator platform
    MCAPI ::ItemInstance asItemInstance(::BlockSource& region, ::BlockPos const& position, bool withData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void animateTick(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    MCAPI bool breaksFallingBlocks(::BaseGameVersion version) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    MCAPI ::std::string buildDescriptionId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance asItemInstance(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::std::string buildDescriptionName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance asItemInstance(::BlockSource&, ::BlockPos const&, bool) const;
#else // @header-generator platform
    MCAPI void buildSerializationId(uint latestUpdaterVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool attack(::Player*, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool canConnect(::Block const& connectionBlock, uchar toOther) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool breaksFallingBlocks(::BaseGameVersion const) const;
#else // @header-generator platform
    MCAPI bool canProvideFullSupport(uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string buildDescriptionId() const;
#else // @header-generator platform
    MCFOLD bool canProvideSupport(uchar face, ::BlockSupportType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string buildDescriptionName() const;
#else // @header-generator platform
    MCAPI bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void buildSerializationId(uint);
#else // @header-generator platform
    MCAPI ::HitResult clip(::BlockPos const& pos, ::Vec3 const& A, ::Vec3 const& B, ::AABB const& aabb) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::HitResult clip(
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint computeRawSerializationIdHashForNetwork() const;
#else // @header-generator platform
    MCAPI uint computeRawSerializationIdHashForNetwork() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& connectionUpdate(::BlockSource&, ::BlockPos const&, ::NeighborBlockDirections const&) const;
#else // @header-generator platform
    MCAPI ::Block const& copyState(::Block const& fromBlock, ::BlockState const& state) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void executeItemEvent(
        ::ItemStackBase&     item,
        ::std::string const& eventName,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Actor*             actor
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getCollisionShapeForCamera(::AABB&, ::IConstBlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void finalizeBlockComponentStorage();

    MCAPI ::BlockActorType getBlockEntityType() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getComparatorSignal(::BlockSource&, ::BlockPos const&, uchar) const;
#else // @header-generator platform
    MCAPI ::std::optional<::ConnectionID> getConnectionID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockType::HorizontalDirectionBits getConnectedDirections(::BlockPos const&, ::BlockSource&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getCraftingLabelText() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ConnectionID> getConnectionID() const;
#else // @header-generator platform
    MCAPI ::std::string getDescriptionId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getCraftingLabelText() const;
#else // @header-generator platform
    MCAPI float getDestroySpeed(::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& getCullingLayer() const;
#else // @header-generator platform
    MCAPI ::std::string getDisplayName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void getDebugText(std::vector<std::string>&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool hasTag(::HashedString const& tagName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getDescriptionId() const;
#else // @header-generator platform
    MCAPI bool isCropBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getDestroySpeed() const;
#else // @header-generator platform
    MCAPI bool isPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getDestroySpeed(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI bool isPreservingMediumWhenPlaced(::Block const& medium) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;
#else // @header-generator platform
    MCAPI bool isTopPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Brightness getEmissiveBrightness() const;
#else // @header-generator platform
    MCAPI ::Block const& keepStates(::std::vector<::BlockState const*> const& statesToKeep) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockEvents::BlockEventManager const& getEventManager() const;
#else // @header-generator platform
    MCAPI bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face, ::Actor* placer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getExperienceDrop(::Random&) const;
#else // @header-generator platform
    MCAPI void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getExplosionResistance() const;
#else // @header-generator platform
    MCAPI void onActorEvent(::BlockPos const& pos, ::std::string const& eventName, ::Actor& sourceEntity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getExtraRenderLayers() const;
#else // @header-generator platform
    MCAPI void onActorInternalEvent(::BlockPos const& pos, ::std::string const& eventName, ::Actor& sourceEntity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getFlameOdds() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void onFallOn(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, float fallDistance) const;

    MCAPI void onPlace(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        ::Block const&              previousBlock,
        ::BlockChangeContext const& changeSourceContext
    ) const;

    MCAPI void onRedstoneUpdate(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        short             strength,
        short             oldStrength,
        bool              isFirstTime
    ) const;

    MCAPI void onStateChange(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        ::Block const&              previousBlock,
        ::BlockChangeContext const& changeSourceContext
    ) const;

    MCAPI void onStepOff(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void onStepOn(::Actor& entity, ::BlockPos const& pos) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getFriction() const;
#else // @header-generator platform
    MCAPI void playerDestroy(::Player& player, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIgnoresDestroyPermissions(::Actor&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void queuedTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Brightness getLight() const;
#else // @header-generator platform
    MCAPI void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Brightness getLightEmission() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool shouldRandomTick() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void spawnResources(
        ::BlockSource&                region,
        ::BlockPos const&             pos,
        ::IRandom&                    random,
        ::ResourceDropsContext const& resourceDropsContext,
        ::Actor const*                actorContext
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool use(::Player&, ::BlockPos const&, uchar, std::optional<Vec3>) const;
#else // @header-generator platform
    MCAPI ::std::string toDebugString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void visitClientData(::brstd::function_ref<void(const ClientBlockData&)>) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void DEPRECATEDcallOnGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);
#else // @header-generator platform
    MCAPI bool use(::Player& player, ::BlockPos const& pos, uchar face, ::std::optional<::Vec3> hit) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BLOCK_DESCRIPTION_PREFIX();

    MCNAPI static float const& SIZE_OFFSET();
#else // @header-generator platform
    MCAPI static ::std::string const& BLOCK_DESCRIPTION_PREFIX();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(ushort const, ::gsl::not_null<BlockType*>);
#else // @header-generator platform
    MCAPI void* $ctor(ushort data, ::gsl::not_null<::BlockType*> oldBlock);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(ushort const, ::gsl::not_null<BlockType*>, ::CompoundTag, uint const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(ushort data, ::gsl::not_null<::BlockType*> oldBlock, ::CompoundTag serId, uint const& runId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
