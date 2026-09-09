#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/MobEffectIds.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/util/VariantParameterList.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDefinitionPtr.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/actor/ActorTerrainInterlockData.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ActorVersion.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/BuiltInActorComponents.h"
#include "mc/world/actor/SpawnRuleEnum.h"
#include "mc/world/actor/SynchedActorDataEntityWrapper.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"
#include "mc/world/attribute/AttributeBuffType.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActionEvent;
class ActionQueue;
class ActorDamageSource;
class ActorDefinitionDescriptor;
class ActorDefinitionDiffList;
class ActorDefinitionEvent;
class ActorDefinitionGroup;
class ActorHurtResult;
class ActorInteraction;
class ActorOwnerComponent;
class ActorRuntimeID;
class AnimationComponent;
class Attribute;
class AttributeInstanceConstRef;
class BaseAttributeMap;
class Block;
class BlockPos;
class BlockSource;
class ChangeDimensionPacket;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class DynamicProperties;
class EntityRegistry;
class FishingHook;
class GameEvent;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ILevel;
class IOptionsReader;
class ITickingArea;
class InteractionResult;
class ItemActor;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class ListTag;
class LootTable;
class Matrix;
class MerchantRecipeList;
class Mob;
class MobEffect;
class MobEffectInstance;
class ModelPartLocator;
class Packet;
class Player;
class Random;
class RenderParams;
class RideableComponent;
class RopeSystem;
class SpatialActorNetworkData;
class StrictEntityContext;
class UpdateEquipPacket;
class UpdateTradePacket;
class Vec2;
struct AABBShapeComponent;
struct ActorDefinitionIdentifier;
struct ActorLink;
struct ActorRotationComponent;
struct DimensionType;
struct DistanceSortedActor;
struct DynamicRenderOffsetComponent;
struct EquipmentTable;
struct HurtParameters;
struct InterpolationPair;
struct MutableAttributeWithContext;
struct SoundEventIdentifier;
struct StateVectorComponent;
struct ValidMutableAttributeWithContext;
struct VariantParameterListConst;
namespace Bedrock::Safety { class RedactableString; }
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
namespace VehicleUtils { struct VehicleRootInfo; }
// clang-format on

class Actor {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, ::EntityContext> mEntityContext;
    ::ll::TypedStorage<8, 72, ::VariantParameterList> mInitParams;
    ::ll::TypedStorage<8, 24, std::string> mCustomInitEventName;
    ::ll::TypedStorage<1, 1, ::ActorInitializationMethod> mInitMethod;
    ::ll::TypedStorage<1, 1, bool> mForceInitMethodToSpawnOnReload;
    ::ll::TypedStorage<1, 1, bool> mAdded;
    ::ll::TypedStorage<8, 8, ::ActorDefinitionGroup*> mDefinitions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorDefinitionDescriptor>> mCurrentDescription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RopeSystem>> mLeashRopeSystem;
    ::ll::TypedStorage<8, 24, std::string> mAlias;
    ::ll::TypedStorage<4, 68, std::optional<glm::mat<4, 4, float, (glm::qualifier)0>>> mPreviousRenderTransform;
    ::ll::TypedStorage<4, 4, int> mLastHurtByPlayerTime;
    ::ll::TypedStorage<8, 24, std::map<HashedString, std::vector<std::vector<glm::mat<4, 4, float, (glm::qualifier)0>>>>> mPreviousBoneMatrices;
    ::ll::TypedStorage<8, 48, ::SynchedActorDataEntityWrapper> mEntityData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SpatialActorNetworkData>> mNetworkData;
    ::ll::TypedStorage<4, 12, ::Vec3> mSentDelta;
    ::ll::TypedStorage<4, 4, float> mScale;
    ::ll::TypedStorage<4, 4, float> mScalePrev;
    ::ll::TypedStorage<1, 1, bool> mIgnoreLighting;
    ::ll::TypedStorage<1, 1, bool> mFilterLighting;
    ::ll::TypedStorage<4, 4, float> mStepSoundVolume;
    ::ll::TypedStorage<4, 4, float> mStepSoundPitch;
    ::ll::TypedStorage<8, 8, ::AABB*> mLastHitBB;
    ::ll::TypedStorage<8, 8, ulong> mNameTagHash;
    ::ll::TypedStorage<4, 4, float> mShadowOffset;
    ::ll::TypedStorage<4, 4, float> mPushThrough;
    ::ll::TypedStorage<4, 4, int> mTickCount;
    ::ll::TypedStorage<4, 4, int> mInvulnerableTime;
    ::ll::TypedStorage<4, 4, int> mLastHealth;
    ::ll::TypedStorage<1, 1, bool> mInvulnerable;
    ::ll::TypedStorage<4, 4, int> mFlameTexFrameIndex;
    ::ll::TypedStorage<4, 4, float> mFlameFrameIncrementTime;
    ::ll::TypedStorage<1, 1, bool> mAlwaysFireImmune;
    ::ll::TypedStorage<1, 1, bool> mInheritRotationWhenRiding;
    ::ll::TypedStorage<1, 1, bool> mForcedLoading;
    ::ll::TypedStorage<1, 1, bool> mHighlightedThisFrame;
    ::ll::TypedStorage<1, 1, bool> mInitialized;
    ::ll::TypedStorage<1, 1, bool> mProcessedOnChunkDiscard;
    ::ll::TypedStorage<4, 4, float> mSoundVolume;
    ::ll::TypedStorage<4, 4, int> mShakeTime;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mLegacyUniqueID;
    ::ll::UntypedStorage<1, 16> mDimension;
    ::ll::TypedStorage<8, 8, ::ILevel*> mLevel;
    ::ll::TypedStorage<8, 40, ::HashedString> mActorRendererId;
    ::ll::TypedStorage<4, 4, ::ActorCategory> mCategories;
    ::ll::UntypedStorage<4, 4> mVersion;
    ::ll::TypedStorage<8, 32, ::BuiltInActorComponents> mBuiltInComponents;
    ::ll::TypedStorage<8, 40, ::HashedString> mActorRendererIdThatAnimationComponentWasInitializedWith;
    ::ll::TypedStorage<1, 1, bool> mChanged;
    ::ll::TypedStorage<1, 1, bool> mRemoved;
    ::ll::TypedStorage<1, 1, bool> mMovedToLimbo;
    ::ll::TypedStorage<1, 1, bool> mMovedToUnloadedChunk;
    ::ll::TypedStorage<1, 1, bool> mBlocksBuilding;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AnimationComponent>> mAnimationComponent;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AnimationComponent>> mUIAnimationComponent;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mTargetId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mInLovePartner;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mPersistingTradeOffers;
    ::ll::TypedStorage<4, 4, int> mPersistingTradeRiches;
    ::ll::TypedStorage<1, 1, bool> mPersistingTrade;
    ::ll::TypedStorage<1, 1, bool> mEffectsDirty;
    ::ll::TypedStorage<1, 1, bool> mLootDropped;
    ::ll::TypedStorage<1, 1, bool> mLoadedFromNBTThisFrame;
    ::ll::TypedStorage<4, 16, ::mce::Color> mHurtColor;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorDefinitionDiffList>> mDefinitionList;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mLoadedActorPropertyTag;
    ::ll::TypedStorage<8, 16, ::ActorDefinitionPtr> mActorDefinitionPtr;
    ::ll::TypedStorage<8, 24, std::string> mFilteredNameTag;
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData> mTerrainInterlockData;
    ::ll::TypedStorage<1, 1, bool> mWasHurtThisTick;
    ::ll::TypedStorage<1, 1, bool> mWasHurtLastTick;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mLastHurtMobId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mLastHurtByMobId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mLastHurtByPlayerId;
    ::ll::TypedStorage<8, 8, ulong> mLastHurtTimestamp;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mLastHurtCause;
    ::ll::TypedStorage<4, 4, float> mLastHurt;
    ::ll::TypedStorage<4, 4, int> mLastHurtMobTimestamp;
    ::ll::TypedStorage<4, 4, int> mLastHurtByMobTime;
    ::ll::TypedStorage<4, 4, int> mLastHurtByMobTimestamp;
    ::ll::TypedStorage<1, 1, bool> mIsPredictableProjectile;
    ::ll::TypedStorage<1, 1, bool> mIsRenderingInUI;
    ::ll::TypedStorage<1, 1, bool> mIsOnScreen;
    ::ll::TypedStorage<1, 1, bool> mUpdateBonesAndEffects;
    ::ll::TypedStorage<1, 1, bool> mUpdateEffects;
    ::ll::TypedStorage<1, 1, bool> mCanPickupItems;
    ::ll::TypedStorage<1, 1, bool> mHasSetCanPickupItems;
    ::ll::TypedStorage<1, 1, bool> mChainedDamageEffects;
    ::ll::TypedStorage<4, 4, int> mAffectedByWaterBottleTicksToEffect;
    ::ll::TypedStorage<4, 4, ::SpawnRuleEnum> mSpawnRulesEnum;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActionQueue>> mActionQueue;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap> mMolangVariables;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mFishingHookID;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Actor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void outOfWorld();

    virtual ~Actor();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void _serverInitItemStackIds();

    virtual void _doInitialMove();

    virtual bool hasComponent(::HashedString const&) const;

    virtual void resetUserPos(::ActorResetRule);

    virtual ::ActorType getOwnerEntityType();

    virtual void remove();

    virtual ::Vec3 getFiringPos() const;

    virtual float getInterpolatedBodyRot(float) const;

    virtual float getInterpolatedHeadRot(float) const;

    virtual float getInterpolatedBodyYaw(float) const;

    virtual float getYawSpeedInDegreesPerSecond() const;

    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const;

    virtual bool isFireImmune() const;

    virtual void blockedByShield(::ActorDamageSource const&, ::Actor&);

    virtual bool canDisableShield();

    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);

    virtual void lerpMotion(::Vec3 const&);

    virtual std::unique_ptr<Packet> tryCreateAddActorPacket();

    virtual void normalTick();

    virtual void baseTick();

    virtual void passengerTick();

    virtual bool startRiding(::Actor&, bool);

    virtual void addPassenger(::Actor&);

    virtual std::string getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;

    virtual std::string getEntityLocNameString() const;

    virtual bool isInvisible() const;

    virtual bool canShowNameTag() const;

    virtual ::mce::Color getNameTagTextColor() const;

    virtual float getShadowRadius() const;

    virtual ::Vec3 getHeadLookVector(float) const;

    virtual bool canInteractWithOtherEntitiesInGame() const;

    virtual float getBrightness(float, ::IConstBlockSource const&) const;

    virtual void playerTouch(::Player&);

    virtual bool isImmobile() const;

    virtual bool isSilentObserver() const;

    virtual bool isSleeping() const;

    virtual void setSleeping(bool);

    virtual void setSneaking(bool);

    virtual bool isBlocking() const;

    virtual bool isDamageBlocked(::ActorDamageSource const&) const;

    virtual bool isAlive() const;

    virtual bool isOnFire() const;

    virtual bool isSurfaceMob() const;

    virtual bool isTargetable() const;

    virtual void setTarget(::Actor*);

    virtual bool isValidTarget(::Actor*) const;

    virtual ::ActorHurtResult attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);

    virtual void performRangedAttack(::Actor&, float);

    virtual void setOwner(::ActorUniqueID const);

    virtual void setSitting(bool);

    virtual void onTame();

    virtual void onFailedTame();

    virtual void setStanding(bool);

    virtual bool canPowerJump() const;

    virtual bool isEnchanted() const;

    virtual void playAmbientSound();

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const;

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual ::SharedTypes::Legacy::ActorDamageCause getBlockDamageCause(::Block const&) const;

    virtual ::ActorHurtResult doFireHurt(int);

    virtual void onLightningHit();

    virtual void feed(int);

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual ::HashedString const& getActorRendererId() const;

    virtual void despawn();

    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    virtual int getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    virtual float getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const;

    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    virtual void setCarriedItem(::ItemStack const&);

    virtual ::ItemStack const& getCarriedItem() const;

    virtual void setOffhandSlot(::ItemStack const&);

    virtual ::ItemStack const& getEquippedTotem() const;

    virtual bool consumeTotem();

    virtual bool load(::CompoundTag const&, ::DataLoadHelper&);

    virtual ::HashedString const& queryEntityRenderer() const;

    virtual ::ActorUniqueID getSourceUniqueID() const;

    virtual bool canFreeze() const;

    virtual ::AABB getLiquidAABB(::SharedTypes::v1_26_20::MaterialType const) const;

    virtual void handleInsidePortal(::BlockPos const&);

    virtual bool canChangeDimensionsUsingPortal() const;

    virtual void changeDimension(::ChangeDimensionPacket const&);

    virtual void changeDimension(::DimensionType);

    virtual ::ActorUniqueID getControllingPlayer() const;

    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);

    virtual void onSynchedDataUpdate(int);

    virtual bool canAddPassenger(::Actor&) const;

    virtual bool canPickupItem(::ItemStack const&) const;

    virtual bool canBePulledIntoVehicle() const;

    virtual bool inCaravan() const;

    virtual void sendMotionPacketIfNeeded();

    virtual bool canSynchronizeNewEntity() const;

    virtual void startSwimming();

    virtual void stopSwimming();

    virtual void buildDebugInfo(std::string&) const;

    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    virtual int getDeathTime() const;

    virtual bool canBeAffected(uint) const;

    virtual bool canBeAffectedByArrow(::MobEffectInstance const&) const;

    virtual void onEffectRemoved(::MobEffectInstance&);

    virtual bool canObstructSpawningAndBlockPlacement() const;

    virtual ::AnimationComponent& getAnimationComponent();

    virtual void openContainerComponent(::Player&);

    virtual bool swing(::ActorSwingSource);

    virtual void useItem(::ItemStackBase&, ::ItemUseMethod, bool);

    virtual void getDebugText(std::vector<std::string>&);

    virtual float getMapDecorationRotation() const;

    virtual float getPassengerYRotation(::Actor const&) const;

    virtual bool add(::ItemStack&);

    virtual bool drop(::ItemStack const&, bool const);

    virtual ::InteractionResult getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);

    virtual bool canDestroyBlock(::Block const&) const;

    virtual void setAuxValue(int);

    virtual void renderDebugServerState(::IOptionsReader const&);

    virtual void kill();

    virtual void die(::ActorDamageSource const&);

    virtual bool shouldDropDeathLoot() const;

    virtual void applySnapshot(::EntityContext const&, ::MovementDataExtractionUtility::SnapshotAccessor const&);

    virtual void onPush(::Actor&);

    virtual std::optional<BlockPos> getLastDeathPos() const;

    virtual std::optional<DimensionType> getLastDeathDimension() const;

    virtual bool hasDiedBefore() const;

    virtual void doEnterWaterSplashEffect();

    virtual void doExitWaterSplashEffect();

    virtual void doWaterSplashEffect();

    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot, ::ItemStack const&) const;

    virtual bool _shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&) const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Actor(::ILevel&, ::EntityContext&);

    MCNAPI Actor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI ::BuiltInActorComponents _addActorBuiltInComponents();

    MCNAPI void _addActorNonBuiltInComponents();

    MCNAPI bool _applyPendingPropertyChanges();

    MCNAPI ::ItemActor const* _drop(::ItemStack const&, bool const);

    MCNAPI std::vector<MobEffectInstance>& _getAllEffectsNonConst();

    MCNAPI ::AnimationComponent&
    _getAnimationComponent(std::shared_ptr<AnimationComponent>&, ::AnimationComponentGroupType);

    MCNAPI void _initAliasProperties();

    MCNAPI void _initializeMaxAutoStep(float);

    MCNAPI bool _isDeathLootAllowed() const;

    MCNAPI void _notifyMobEffectsOnHurt(::ActorDamageSource const&, float);

    MCNAPI void _refreshAABB();

    MCNAPI void _sendDirtyActorData();

    MCNAPI void _setActorTypeId(::ActorType);

    MCNAPI void _setDimensionTransitionComponent(::DimensionType, ::DimensionType, int);

    MCNAPI void _setHandContainerItem(::ItemStack const&, ::HandSlot);

    MCNAPI void _setHeightOffset(float const);

    MCNAPI void _setLevelPtr(::ILevel*);

    MCNAPI void _setPos(::Vec3 const&);

    MCNAPI void _setPosPrev(::Vec3 const&);

    MCNAPI void _setupServerAnimationComponent();

    MCNAPI void _updateComposition(bool);

    MCNAPI void addCategory(::ActorCategory const&);

    MCNAPI void addDefinitionGroup(std::string const&);

    MCNAPI void addEffect(::MobEffectInstance const&);

    MCNAPI bool addTag(std::string const&);

    MCNAPI void applyImpulse(::Vec3 const&);

    MCNAPI void applyOnBornPropertyChanges();

    MCNAPI void buildDebugGroupInfo(std::string&) const;

    MCNAPI ::Vec3 buildForward() const;

    MCNAPI void burn(int, bool);

    MCNAPI bool canAttack(::Actor const&) const;

    MCNAPI bool canBeginOrContinueClimbingLadder() const;

    MCNAPI bool canCurrentlySwim() const;

    MCNAPI bool canDescendBlockBelowByCrouching() const;

    MCNAPI bool canFly() const;

    MCNAPI bool canMate(::Actor const&) const;

    MCNAPI bool canReceiveMobEffectsFromGameplay() const;

    MCNAPI bool canSee(::Actor const&, ::ShapeType) const;

    MCNAPI bool canSee(::Vec3 const&, ::ShapeType) const;

    MCNAPI bool canSee(::Actor const&, ::SharedTypes::Legacy::ActorLocation, ::ShapeType) const;

    MCNAPI bool canSeeDaylight() const;

    MCNAPI void celebrateHunt(int, bool);

    MCNAPI void checkFallDamage(float, bool, bool);

    MCNAPI void chorusFruitTeleport(::Vec3 const&);

    MCNAPI void clearFishingHookID();

    MCNAPI bool closerThan(::Actor const&, float const) const;

    MCNAPI bool closerThan(::Actor const&, float const, float const) const;

    MCNAPI void consumeItem(::ItemActor&, int);

    MCNAPI ::UpdateEquipPacket createUpdateEquipPacket(int);

    MCNAPI ::UpdateTradePacket createUpdateTradePacket(int);

    MCNAPI void deregisterTagsFromLevelCache();

    MCNAPI float distanceSqrToBlockPosCenter(::BlockPos const&) const;

    MCNAPI float distanceTo(::Actor const&) const;

    MCNAPI float distanceTo(::Vec3 const&) const;

    MCNAPI float distanceToSqr(::Vec3 const&) const;

    MCNAPI float distanceToSqr(::Actor const&) const;

    MCNAPI void dropTowards(::ItemStack const&, ::Vec3);

    MCNAPI void enableAutoSendPosRot(bool);

    MCNAPI void equip(::EquipmentTable const&);

    MCNAPI void equip(std::string const&);

    MCNAPI void equipFromEquipmentDefinition();

    MCNAPI float evaluateSeatRotation(::RideableComponent const&, bool);

    MCNAPI bool executeEvent(std::string const&, ::VariantParameterList const&);

    MCNAPI void exitVehicle(bool, bool, bool);

    MCNAPI ::FishingHook* fetchFishingHook();

    MCNAPI std::vector<DistanceSortedActor> fetchNearbyActorsSorted(::Vec3 const&);

    MCNAPI std::vector<DistanceSortedActor> fetchNearbyActorsSorted(::Vec3 const&, ::ActorType);

    MCNAPI ::AABB const& getAABB() const;

    MCNAPI ::Vec2 const& getAABBDim() const;

    MCNAPI int getActiveEffectCount() const;

    MCNAPI ::ActorDefinitionIdentifier const& getActorIdentifier() const;

    MCNAPI ::Matrix getActorToWorldTransform(float, bool, ::Vec3 const&) const;

    MCNAPI std::vector<MobEffectInstance> const& getAllEffects() const;

    MCNAPI ::ItemStack const& getArmor(::SharedTypes::Legacy::ArmorSlot) const;

    MCNAPI ::Vec3 getAttachPos(::SharedTypes::Legacy::ActorLocation) const;

    MCNAPI ::Vec3 getAttachPos(::SharedTypes::Legacy::ActorLocation, float) const;

    MCNAPI ::AttributeInstanceConstRef getAttribute(::Attribute const&) const;

    MCNAPI ::gsl::not_null<BaseAttributeMap*> getAttributes();

    MCNAPI ::gsl::not_null<const BaseAttributeMap*> getAttributes() const;

    MCNAPI ::BlockPos getBlockPosCurrentlyStandingOn(::Actor const*) const;

    MCNAPI ::BlockPos getBlockTarget() const;

    MCNAPI float getBrightness(float) const;

    MCNAPI float getCameraDistance();

    MCNAPI bool getCanPickupItems() const;

    MCNAPI ::ItemStack const& getCarriedItemInSlotPreferredBy(::ItemStack const&) const;

    MCNAPI ::Vec3 getCenter(float) const;

    MCNAPI ::Vec3 getCenteredPosition() const;

    MCNAPI bool getChainedDamageEffects() const;

    MCNAPI int getChestSlots() const;

    MCNAPI bool getCollidableMob() const;

    MCNAPI float getCurrentSwimAmount() const;

    MCNAPI bool getDamageNearbyMobs() const;

    MCNAPI ::ActorDefinitionDiffList* getDiffListNonConst();

    MCNAPI ::Dimension& getDimension() const;

    MCNAPI ::BlockSource& getDimensionBlockSource() const;

    MCNAPI ::BlockSource const& getDimensionBlockSourceConst() const;

    MCNAPI ::Dimension const& getDimensionConst() const;

    MCNAPI ::DimensionType getDimensionId() const;

    MCNAPI ::MobEffectInstance const* getEffect(::MobEffect const&) const;

    MCNAPI ::MobEffectInstance const* getEffect(::MobEffectIds) const;

    MCNAPI ::MobEffectInstance const* getEffect(uint) const;

    MCNAPI ::SynchedActorDataEntityWrapper const& getEntityData() const;

    MCNAPI ::SynchedActorDataEntityWrapper& getEntityData();

    MCNAPI ::StackRefResult<EntityRegistry> getEntityRegistry();

    MCNAPI ::ActorTerrainInterlockData& getEntityTerrainInterlockData();

    MCNAPI ::ActorType getEntityTypeId() const;

    MCNAPI int getEquipSlots() const;

    MCNAPI int getEquipmentCount() const;

    MCNAPI ::SharedTypes::Legacy::EquipmentSlot getEquipmentSlotForItem(::ItemStack const&) const;

    MCNAPI ::ItemStack const& getEquippedSlot(::SharedTypes::Legacy::EquipmentSlot) const;

    MCNAPI ::Vec3 getEyePos() const;

    MCNAPI float getFallDistance() const;

    MCNAPI std::string getFilteredNameTag() const;

    MCNAPI bool getFirstAvailableSeatPos(::Actor&, ::Vec3&) const;

    MCNAPI ::Actor* getFirstPassenger() const;

    MCNAPI int getHealth() const;

    MCNAPI ::mce::Color const& getHurtColor() const;

    MCNAPI int getHurtDir() const;

    MCNAPI int getHurtTime() const;

    MCNAPI ::ILevel const& getILevel() const;

    MCNAPI ::ILevel& getILevel();

    MCNAPI ::ActorInitializationMethod getInitializationMethod() const;

    MCNAPI ::Block const* getInsideBlock() const;

    MCNAPI ::Vec3 getInterpolatedPosition(float) const;

    MCNAPI ::Vec3 getInterpolatedRidingPosition(float) const;

    MCNAPI ::Vec2 getInterpolatedRotation(float) const;

    MCNAPI int getInventorySize() const;

    MCNAPI bool getIsExperienceDropEnabled() const;

    MCNAPI bool getIsOnScreen() const;

    MCNAPI ::Mob* getLastHurtByMob();

    MCNAPI ::ActorUniqueID getLastHurtByMobID() const;

    MCNAPI int getLastHurtByMobTime();

    MCNAPI int getLastHurtByMobTimestamp();

    MCNAPI ::Player* getLastHurtByPlayer();

    MCNAPI ::ActorUniqueID getLastHurtByPlayerID() const;

    MCNAPI ::SharedTypes::Legacy::ActorDamageCause getLastHurtCause() const;

    MCNAPI float getLastHurtDamage() const;

    MCNAPI ::Mob* getLastHurtMob();

    MCNAPI int getLastHurtMobTimestamp();

    MCNAPI ulong getLastHurtTimestamp() const;

    MCNAPI ::ActorUniqueID getLeashHolder() const;

    MCNAPI ::Level const& getLevel() const;

    MCNAPI ::Level& getLevel();

    MCNAPI ulong getLevelTimeStamp() const;

    MCNAPI int getLimitedLifetimeTicks() const;

    MCNAPI std::vector<ActorLink> getLinks() const;

    MCNAPI ::ModelPartLocator const* getLocator(::HashedString const&);

    MCNAPI ::LootTable* getLootTable();

    MCNAPI int getMarkVariant() const;

    MCNAPI float getMaxAutoStep() const;

    MCNAPI int getMaxHealth() const;

    MCNAPI long getMetadataId() const;

    MCNAPI ::MolangVariableMap& getMolangVariables();

    MCNAPI ::MutableAttributeWithContext getMutableAttribute(::Attribute const&);

    MCNAPI std::string const& getNameTag() const;

    MCNAPI ulong getNameTagAsHash() const;

    MCNAPI float getNameplateRenderDistanceMax() const;

    MCNAPI ::ItemStack const& getOffhandSlot() const;

    MCNAPI int getOnDeathExperience();

    MCNAPI ::DynamicProperties& getOrAddDynamicProperties();

    MCNAPI ::ActorUniqueID const& getOrCreateUniqueID() const;

    MCNAPI ::Mob* getOwner() const;

    MCNAPI ::ActorUniqueID const getOwnerId() const;

    MCNAPI int getPassengerIndex(::Actor const&) const;

    MCNAPI std::unique_ptr<CompoundTag> getPersistingTradeOffers();

    MCNAPI int getPersistingTradeRiches();

    MCNAPI ::Player* getPlayerOwner() const;

    MCNAPI ::Vec3 const& getPosDelta() const;

    MCNAPI ::Vec3& getPosDeltaNonConst();

    MCNAPI ::Vec3 const& getPosPrev() const;

    MCNAPI ::Vec3 const& getPosition() const;

    MCNAPI float getRadius() const;

    MCNAPI ::Random& getRandom() const;

    MCNAPI ::Bedrock::Safety::RedactableString getRedactableNameTag() const;

    MCNAPI ::ActorUniqueID getRenderLeashHolder();

    MCNAPI ::RenderParams& getRenderParams();

    MCNAPI float getRidingHeight() const;

    MCNAPI ::Vec2 const& getRotation() const;

    MCNAPI ::Vec2 const& getRotationPrev() const;

    MCNAPI ::ActorRuntimeID getRuntimeID() const;

    MCNAPI float getScaleFactor(float) const;

    MCNAPI std::string const& getScoreTag() const;

    MCNAPI int getShakeTime() const;

    MCNAPI int getSkinID() const;

    MCNAPI ::SpatialActorNetworkData& getSpatialNetworkData();

    MCNAPI float getSpeedInMetersPerSecond() const;

    MCNAPI ::Vec3 getSpeedVectorInMetersPerSecond() const;

    MCNAPI bool getStatusFlag(::ActorFlags) const;

    MCNAPI int getStrength() const;

    MCNAPI int getStrengthMax() const;

    MCNAPI int getStructuralIntegrity() const;

    MCNAPI ::SubClientId getSubClientId() const;

    MCNAPI float getSwimAmount(float) const;

    MCNAPI std::vector<std::string> const getTags() const;

    MCNAPI ::Actor* getTarget() const;

    MCNAPI ::ActorUniqueID getTargetId() const;

    MCNAPI bool getTradeInterest() const;

    MCNAPI ::MerchantRecipeList* getTradeOffers();

    MCNAPI ::Player* getTradingPlayer() const;

    MCNAPI bool getUIRendering() const;

    MCNAPI ::ValidMutableAttributeWithContext getValidMutableAttribute(::Attribute const&);

    MCNAPI int getVariant() const;

    MCNAPI ::Actor* getVehicle() const;

    MCNAPI ::VehicleUtils::VehicleRootInfo getVehicleRoot() const;

    MCNAPI ::ActorRuntimeID getVehicleRuntimeID() const;

    MCNAPI float getVerticalSpeedInMetersPerSecond() const;

    MCNAPI ::Vec3 getViewVector(float) const;

    MCNAPI ::Vec2 getViewVector2(float) const;

    MCNAPI ::WeakRef<EntityContext> const getWeakEntity() const;

    MCNAPI float getYHeadRot() const;

    MCNAPI ::InterpolationPair getYHeadRotationsNewOld() const;

    MCNAPI void handleFallDamage(float, float, ::ActorDamageSource);

    MCNAPI void handleLeftoverFallDamage(float, ::ActorDamageSource);

    MCNAPI bool hasAnyEffects() const;

    MCNAPI bool hasBeenHurtByMobInLastTicks(int) const;

    MCNAPI bool hasCategory(::ActorCategory) const;

    MCNAPI bool hasDefinitionGroup(std::string const&) const;

    MCNAPI bool hasDimension() const;

    MCNAPI bool hasEffect(::MobEffect const&) const;

    MCNAPI bool hasEffect(::MobEffectIds) const;

    MCNAPI bool hasFamily(::HashedString const&) const;

    MCNAPI bool hasFilteredNameTag() const;

    MCNAPI bool hasFishingHook() const;

    MCNAPI bool hasLevel() const;

    MCNAPI bool hasPassenger() const;

    MCNAPI bool hasPersistingTrade() const;

    MCNAPI bool hasPlayerPassenger() const;

    MCNAPI bool hasPriorityAmmunition() const;

    MCNAPI bool hasRuntimeID() const;

    MCNAPI bool hasSaddle() const;

    MCNAPI bool hasTag(std::string const&) const;

    MCNAPI bool hasTags() const;

    MCNAPI bool hasTeleported() const;

    MCNAPI bool hasTotemEquipped() const;

    MCNAPI bool hasType(::ActorType) const;

    MCNAPI bool hasUniqueID() const;

    MCNAPI void heal(int);

    MCNAPI ::ActorHurtResult hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI bool inDownwardFlowingLiquid() const;

    MCNAPI void initParams(::VariantParameterList&);

    MCNAPI void initParams(::VariantParameterListConst&) const;

    MCNAPI void initParams(::RenderParams&);

    MCNAPI bool intersects(::Vec3 const&, ::Vec3 const&) const;

    MCNAPI bool isActorLocationInMaterial(
        ::SharedTypes::Legacy::ActorLocation const,
        ::SharedTypes::v1_26_20::MaterialType const
    ) const;

    MCNAPI bool isAdventure() const;

    MCNAPI bool isAffectedByWaterBottle() const;

    MCNAPI bool isAngry() const;

    MCNAPI bool isAttackableGamemode() const;

    MCNAPI bool isAutonomous() const;

    MCNAPI bool isBaby() const;

    MCNAPI bool isBreakingObstruction() const;

    MCNAPI bool isBribed() const;

    MCNAPI bool isCharged() const;

    MCNAPI bool isChested() const;

    MCNAPI bool isClientSide() const;

    MCNAPI bool isClimbing() const;

    MCNAPI bool isControlledByLocalInstance() const;

    MCNAPI bool isCreative() const;

    MCNAPI bool isDancing() const;

    MCNAPI bool isDead() const;

    MCNAPI bool isDoorBreaker() const;

    MCNAPI bool isDoorOpener() const;

    MCNAPI bool isGlobal() const;

    MCNAPI bool isIgnited() const;

    MCNAPI bool isImmersedInWater() const;

    MCNAPI bool isInClouds() const;

    MCNAPI bool isInContactWithWater() const;

    MCNAPI bool isInLava() const;

    MCNAPI bool isInLove() const;

    MCNAPI bool isInPrecipitation() const;

    MCNAPI bool isInRain() const;

    MCNAPI bool isInScaffolding() const;

    MCNAPI bool isInSnow() const;

    MCNAPI bool isInThunderstorm() const;

    MCNAPI bool isInWater() const;

    MCNAPI bool isInWaterOrRain() const;

    MCNAPI bool isInWorld() const;

    MCNAPI bool isInsidePortal() const;

    MCNAPI bool isInvertedHealAndHarm() const;

    MCNAPI bool isJumping() const;

    MCNAPI bool isLayingDown() const;

    MCNAPI bool isLeashed() const;

    MCNAPI bool isLocalPlayer() const;

    MCNAPI bool isMovedToLimbo() const;

    MCNAPI bool isMovedToUnloadedChunk() const;

    MCNAPI bool isMoving() const;

    MCNAPI bool isNameplateDepthTested() const;

    MCNAPI bool isOrphan() const;

    MCNAPI bool isOutOfControl() const;

    MCNAPI bool isOverScaffolding() const;

    MCNAPI bool isOverWater() const;

    MCNAPI bool isPacified() const;

    MCNAPI bool isPassenger(::Actor const&) const;

    MCNAPI bool isPassenger(::ActorUniqueID const&) const;

    MCNAPI bool isPersistent() const;

    MCNAPI bool isPlayer() const;

    MCNAPI bool isPlayingDead() const;

    MCNAPI bool isPowered() const;

    MCNAPI bool isRemotePlayer() const;

    MCNAPI bool isRemoved() const;

    MCNAPI bool isResting() const;

    MCNAPI bool isRiding() const;

    MCNAPI bool isRiding(::Actor*) const;

    MCNAPI bool isSheared() const;

    MCNAPI bool isSilent() const;

    MCNAPI bool isSitting() const;

    MCNAPI bool isSneaking() const;

    MCNAPI bool isSpectator() const;

    MCNAPI bool isStanding() const;

    MCNAPI bool isSurvival() const;

    MCNAPI bool isSwimmer() const;

    MCNAPI bool isSwimming() const;

    MCNAPI bool isTame() const;

    MCNAPI bool isTickingEntity() const;

    MCNAPI bool isTrading() const;

    MCNAPI bool isTrusting() const;

    MCNAPI bool isType(::ActorType) const;

    MCNAPI bool isUnderLiquid(::SharedTypes::v1_26_20::MaterialType) const;

    MCNAPI bool isUseNewTradeScreen() const;

    MCNAPI bool isWalker() const;

    MCNAPI bool isWearingLeatherArmor() const;

    MCNAPI bool isWorldBuilder() const;

    MCNAPI void killed(::Actor&);

    MCNAPI void lerpTo(::Vec3 const&, ::Vec2 const&, int);

    MCNAPI void lerpTo(::Vec3 const&, ::Vec2 const&, float, int);

    MCNAPI void loadLinks(::CompoundTag const&, std::vector<ActorLink>&, ::DataLoadHelper&);

    MCNAPI ::ActorUniqueID const& lovePartnerId() const;

    MCNAPI void markHurt();

    MCNAPI void migrateUniqueID(::ActorUniqueID);

    MCNAPI void move(::Vec3 const&);

    MCNAPI void moveRelative(float, float, float, float);

    MCNAPI void moveTo(::Vec3 const&, ::Vec2 const&);

    MCNAPI void onAffectedByWaterBottle();

    MCNAPI bool onClimbableBlock() const;

    MCNAPI void onOrphan();

    MCNAPI void onSynchedFlagUpdate(::brstd::bitset<131, ulong> const&);

    MCNAPI bool operator!=(::Actor const&) const;

    MCNAPI bool operator==(::Actor const&) const;

    MCNAPI void pickUpItem(::ItemActor&, int);

    MCNAPI void playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int);

    MCNAPI void playSound(::IConstBlockSource const&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int);

    MCNAPI void playSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        ::Block const&,
        bool,
        std::optional<Vec3> const&
    );

    MCNAPI void
    playSynchronizedSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, bool, std::optional<Vec3> const&);

    MCNAPI void playSynchronizedSound(::SoundEventIdentifier const&, ::Vec3 const&, int, bool, ::Player*);

    MCNAPI void positionAllPassengers();

    MCNAPI void positionPassenger(::Actor&);

    MCNAPI void postGameEvent(::GameEvent const&, ::Vec3 const&, ::Block const*);

    MCNAPI void postSplashGameEvent();

    MCNAPI bool pullInEntity(::Actor&);

    MCNAPI void pushBackActionEventToActionQueue(::ActionEvent);

    MCNAPI void pushOutOfBlocks(::Vec3 const&);

    MCNAPI void queueBBUpdateFromDefinition();

    MCNAPI void queueBBUpdateFromValue(::Vec2 const&);

    MCNAPI void refreshComponents();

    MCNAPI void reload();

    MCNAPI void removeAllEffects();

    MCNAPI void removeAllPassengers(bool, bool);

    MCNAPI void removeCategory(::ActorCategory const&);

    MCNAPI void removeEffect(int);

    MCNAPI void removePersistingTrade();

    MCNAPI bool removeTag(std::string const&);

    MCNAPI bool save(::CompoundTag&) const;

    MCNAPI void savePersistingTrade(std::unique_ptr<CompoundTag>, int);

    MCNAPI void serializationSetHealth(int);

    MCNAPI void setAABB(::AABB const&);

    MCNAPI void setAABBDim(::Vec2 const&);

    MCNAPI void setActorRendererId(::HashedString);

    MCNAPI void setAutonomous(bool);

    MCNAPI void setBaseDefinition(::ActorDefinitionIdentifier const&, bool, bool);

    MCNAPI void setBlockTarget(::BlockPos const&);

    MCNAPI void setBreakingObstruction(bool);

    MCNAPI void setCameraDistance(float);

    MCNAPI void setCanFly(bool);

    MCNAPI void setChainedDamageEffects(bool);

    MCNAPI void setChanged();

    MCNAPI void setCharged(bool);

    MCNAPI void setClimbing(bool);

    MCNAPI void setDancing(bool);

    MCNAPI void setDead(bool);

    MCNAPI void setDimension(::WeakRef<Dimension>);

    MCNAPI void setDoorBreaker(bool);

    MCNAPI void setDoorOpener(bool);

    MCNAPI void setEnchanted(bool);

    MCNAPI void setEquipFromPacket(::UpdateEquipPacket const&);

    MCNAPI void setFallDistance(float);

    MCNAPI void setFilteredNameTag(std::string const&);

    MCNAPI void setFishingHookID(::ActorUniqueID);

    MCNAPI void setGlobal(bool);

    MCNAPI void setHurtDir(int);

    MCNAPI void setHurtTime(int);

    MCNAPI void setInLove(::Actor*);

    MCNAPI void setInterpolation();

    MCNAPI void setInvisible(bool);

    MCNAPI void setIsExperienceDropEnabled(bool const);

    MCNAPI void setIsOnScreen(bool);

    MCNAPI void setJumping(bool);

    MCNAPI void setLastHitBB(::Vec3 const&, ::Vec3 const&);

    MCNAPI void setLastHurtByMob(::Mob*);

    MCNAPI void setLastHurtByPlayer(::Player*);

    MCNAPI void setLastHurtMob(::Mob const&);

    MCNAPI void setLayingDown(bool);

    MCNAPI void setLeashHolder(::ActorUniqueID);

    MCNAPI void setLimitedLifetimeTicks(int);

    MCNAPI void setMarkVariant(int);

    MCNAPI void setMovedToLimbo(bool);

    MCNAPI void setMovedToUnloadedChunk(bool);

    MCNAPI void setMoving(bool);

    MCNAPI void setNameTag(std::string const&);

    MCNAPI void setNameTagVisible(bool);

    MCNAPI void setNameplateDepthTested(bool);

    MCNAPI void setNameplateRenderDistanceMax(float);

    MCNAPI void setOffersFromPacket(::UpdateTradePacket const&);

    MCNAPI void setPersistent();

    MCNAPI void setPos(::Vec3 const&);

    MCNAPI void setPosDelta(::Vec3 const&);

    MCNAPI void setPosDirectLegacy(::Vec3 const&);

    MCNAPI void setPosPrev(::Vec3 const&);

    MCNAPI void setPrevPosRotSetThisTick(bool);

    MCNAPI void setPreviousPosRot();

    MCNAPI void setRedactableNameTag(::Bedrock::Safety::RedactableString const&);

    MCNAPI void setResting(bool);

    MCNAPI void setRotationDirectly(::Vec2 const&);

    MCNAPI void setRotationPrev(::Vec2 const&);

    MCNAPI void setRotationPrevX(float);

    MCNAPI void setRotationPrevY(float);

    MCNAPI void setRotationWrapped(::Vec2 const&);

    MCNAPI void setRotationX(float);

    MCNAPI void setRotationY(float);

    MCNAPI void setRuntimeID(::ActorRuntimeID);

    MCNAPI void setSaddle(bool);

    MCNAPI void setScared(bool);

    MCNAPI void setScoreTag(std::string const&);

    MCNAPI void setShakeTime(int);

    MCNAPI void setSkinID(int);

    MCNAPI void setStatusFlag(::ActorFlags, bool);

    MCNAPI void setStrength(int);

    MCNAPI void setStrengthMax(int);

    MCNAPI void setStructuralIntegrity(int);

    MCNAPI void setSwimmer(bool);

    MCNAPI void setTempted(bool);

    MCNAPI void setTradeInterest(bool);

    MCNAPI void setTradingPlayer(::Player*);

    MCNAPI void setUIRendering(bool);

    MCNAPI void setUniqueID(::ActorUniqueID);

    MCNAPI void setUpdateBonesAndEffects(bool);

    MCNAPI void setUpdateEffects(bool);

    MCNAPI void setVariant(int);

    MCNAPI void setVelocity(::Vec3 const&);

    MCNAPI void setWalker(bool);

    MCNAPI void setYHeadRot(float);

    MCNAPI void setYHeadRotations(float, float);

    MCNAPI bool shouldAddEntityToRenderQueue() const;

    MCNAPI bool shouldOrphan(::BlockSource&);

    MCNAPI bool shouldRender() const;

    MCNAPI bool shouldTick() const;

    MCNAPI bool shouldUpdateBonesAndEffects() const;

    MCNAPI bool shouldUpdateEffects() const;

    MCNAPI ::ItemActor* spawnAtLocation(::ItemStack const&, float);

    MCNAPI void spawnTrailBubbles();

    MCNAPI void stopRiding(bool, bool, bool, bool);

    MCNAPI void synchronousSetSize(float, float);

    MCNAPI void teleportPassengersTo(::Vec3 const&, int, int);

    MCNAPI void thawFreezeEffect();

    MCNAPI bool tick(::BlockSource&);

    MCNAPI void transferTickingArea(::Dimension const&);

    MCNAPI void triggerActorRemovedEvent();

    MCNAPI std::vector<ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int) const;

    MCNAPI std::optional<int> tryGetEquippableSlotForItem(::ItemDescriptor) const;

    MCNAPI bool tryTeleportTo(::Vec3 const&, bool, bool, int, int);

    MCNAPI void updateAnimationComponentOnServer();

    MCNAPI void updateDescription();

    MCNAPI void updateDimensionChunkMove();

    MCNAPI void updateInsideBlock();

    MCNAPI void updateInvisibilityStatus();

    MCNAPI void updateMolangVariables(::RenderParams&);

    MCNAPI void updateWaterState();

    MCNAPI bool wasHurt();

    MCNAPI bool wasLastHitByPlayer();

    MCNAPI void wobble();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _moveRelative(::Vec3&, float, float, float, float, float);

    MCNAPI static ::Vec3 buildForward(::Vec2);

    MCNAPI static int getActiveEffectCount(std::vector<MobEffectInstance> const&);

    MCNAPI static ::BlockPos getBlockPosCurrentlyStandingOn(
        ::Vec3 const&,
        ::AABB const&,
        ::IConstBlockSource const&,
        ::optional_ref<const GetCollisionShapeInterface>
    );

    MCNAPI static ::BlockPos getBlockPosCurrentlyStandingOn(
        ::Vec3 const&,
        ::AABB const&,
        ::IConstBlockSource const&,
        float const,
        ::optional_ref<const GetCollisionShapeInterface>
    );

    MCNAPI static std::vector<BlockPos> getBlocksCurrentlyStandingOn(
        ::AABB const&,
        ::IConstBlockSource const&,
        float const,
        ::optional_ref<const GetCollisionShapeInterface>
    );

    MCNAPI static ::Vec3 getCenter(float, ::AABBShapeComponent const&, ::StateVectorComponent const&, float);

    MCNAPI static ::MobEffectInstance const* getEffect(std::vector<MobEffectInstance> const&, ::MobEffect const&);

    MCNAPI static ::MobEffectInstance const* getEffect(std::vector<MobEffectInstance> const&, uint);

    MCNAPI static ::Vec3 getInterpolatedPosition(float, ::StateVectorComponent const&);

    MCNAPI static ::Vec3
    getInterpolatedPosition(float, ::StateVectorComponent const&, ::DynamicRenderOffsetComponent const*);

    MCNAPI static ::AABB getLiquidAABB(::AABB const&, ::SharedTypes::v1_26_20::MaterialType const);

    MCNAPI static float getLiquidFlowStrength(::SharedTypes::v1_26_20::MaterialType const);

    MCNAPI static ::Vec3 getViewVector(::ActorRotationComponent const&, float);

    MCNAPI static ::Vec3 getViewVector(::Vec2 const&, ::Vec2 const&, float);

    MCNAPI static bool isImmobile(::EntityContext const&);

    MCNAPI static bool isInLiquid(
        ::SharedTypes::v1_26_20::MaterialType const,
        ::IConstBlockSource const&,
        ::AABB const&,
        std::vector<AABB> const&
    );

    MCNAPI static ::Actor const* tryGetFromComponent(::ActorOwnerComponent const&, bool);

    MCNAPI static ::Actor* tryGetFromComponent(::ActorOwnerComponent&, bool);

    MCNAPI static ::Actor const* tryGetFromEntity(::EntityContext const&, bool const);

    MCNAPI static ::Actor* tryGetFromEntity(::EntityContext&, bool const);

    MCNAPI static ::Actor* tryGetFromEntity(::StackRefResult<EntityContext>, bool const);

    MCNAPI static ::Actor* tryGetFromEntity(::StrictEntityContext const&, ::EntityRegistry&, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DAMAGE_NEARBY_MOBS_DURATION();

    MCNAPI static float const& DEFAULT_MAX_DISTANCE_OPTIMIZATION();

    MCNAPI static ulong const& DEFAULT_MAX_TICK_DELAY_OPTIMIZATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ILevel&, ::EntityContext&);

    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $outOfWorld();

    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);

    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $_serverInitItemStackIds();

    MCNAPI void $_doInitialMove();

    MCNAPI bool $hasComponent(::HashedString const&) const;

    MCNAPI void $resetUserPos(::ActorResetRule);

    MCNAPI ::ActorType $getOwnerEntityType();

    MCNAPI void $remove();

    MCNAPI ::Vec3 $getFiringPos() const;

    MCNAPI float $getInterpolatedBodyRot(float) const;

    MCNAPI float $getInterpolatedHeadRot(float) const;

    MCNAPI float $getInterpolatedBodyYaw(float) const;

    MCNAPI float $getYawSpeedInDegreesPerSecond() const;

    MCNAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCNAPI bool $isFireImmune() const;

    MCNAPI void $blockedByShield(::ActorDamageSource const&, ::Actor&);

    MCNAPI bool $canDisableShield();

    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);

    MCNAPI void $lerpMotion(::Vec3 const&);

    MCNAPI std::unique_ptr<Packet> $tryCreateAddActorPacket();

    MCNAPI void $normalTick();

    MCNAPI void $baseTick();

    MCNAPI void $passengerTick();

    MCNAPI bool $startRiding(::Actor&, bool);

    MCNAPI void $addPassenger(::Actor&);

    MCNAPI std::string $getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;

    MCNAPI std::string $getEntityLocNameString() const;

    MCNAPI bool $isInvisible() const;

    MCNAPI bool $canShowNameTag() const;

    MCNAPI ::mce::Color $getNameTagTextColor() const;

    MCNAPI float $getShadowRadius() const;

    MCNAPI ::Vec3 $getHeadLookVector(float) const;

    MCNAPI bool $canInteractWithOtherEntitiesInGame() const;

    MCNAPI float $getBrightness(float, ::IConstBlockSource const&) const;

    MCNAPI void $playerTouch(::Player&);

    MCNAPI bool $isImmobile() const;

    MCNAPI bool $isSilentObserver() const;

    MCNAPI bool $isSleeping() const;

    MCNAPI void $setSleeping(bool);

    MCNAPI void $setSneaking(bool);

    MCNAPI bool $isBlocking() const;

    MCNAPI bool $isDamageBlocked(::ActorDamageSource const&) const;

    MCNAPI bool $isAlive() const;

    MCNAPI bool $isOnFire() const;

    MCNAPI bool $isSurfaceMob() const;

    MCNAPI bool $isTargetable() const;

    MCNAPI void $setTarget(::Actor*);

    MCNAPI bool $isValidTarget(::Actor*) const;

    MCNAPI ::ActorHurtResult $attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);

    MCNAPI void $performRangedAttack(::Actor&, float);

    MCNAPI void $setOwner(::ActorUniqueID const);

    MCNAPI void $setSitting(bool);

    MCNAPI void $onTame();

    MCNAPI void $onFailedTame();

    MCNAPI void $setStanding(bool);

    MCNAPI bool $canPowerJump() const;

    MCNAPI bool $isEnchanted() const;

    MCNAPI void $playAmbientSound();

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;

    MCNAPI ::SharedTypes::Legacy::ActorDamageCause $getBlockDamageCause(::Block const&) const;

    MCNAPI ::ActorHurtResult $doFireHurt(int);

    MCNAPI void $onLightningHit();

    MCNAPI void $feed(int);

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI ::HashedString const& $getActorRendererId() const;

    MCNAPI void $despawn();

    MCNAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    MCNAPI ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    MCNAPI int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    MCNAPI float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const;

    MCNAPI void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    MCNAPI void $setCarriedItem(::ItemStack const&);

    MCNAPI ::ItemStack const& $getCarriedItem() const;

    MCNAPI void $setOffhandSlot(::ItemStack const&);

    MCNAPI ::ItemStack const& $getEquippedTotem() const;

    MCNAPI bool $consumeTotem();

    MCNAPI bool $load(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI ::HashedString const& $queryEntityRenderer() const;

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI bool $canFreeze() const;

    MCNAPI ::AABB $getLiquidAABB(::SharedTypes::v1_26_20::MaterialType const) const;

    MCNAPI void $handleInsidePortal(::BlockPos const&);

    MCNAPI bool $canChangeDimensionsUsingPortal() const;

    MCNAPI void $changeDimension(::ChangeDimensionPacket const&);

    MCNAPI void $changeDimension(::DimensionType);

    MCNAPI ::ActorUniqueID $getControllingPlayer() const;

    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);

    MCNAPI void $onSynchedDataUpdate(int);

    MCNAPI bool $canAddPassenger(::Actor&) const;

    MCNAPI bool $canPickupItem(::ItemStack const&) const;

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI bool $inCaravan() const;

    MCNAPI void $sendMotionPacketIfNeeded();

    MCNAPI bool $canSynchronizeNewEntity() const;

    MCNAPI void $startSwimming();

    MCNAPI void $stopSwimming();

    MCNAPI void $buildDebugInfo(std::string&) const;

    MCNAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;

    MCNAPI int $getDeathTime() const;

    MCNAPI bool $canBeAffected(uint) const;

    MCNAPI bool $canBeAffectedByArrow(::MobEffectInstance const&) const;

    MCNAPI void $onEffectRemoved(::MobEffectInstance&);

    MCNAPI bool $canObstructSpawningAndBlockPlacement() const;

    MCNAPI ::AnimationComponent& $getAnimationComponent();

    MCNAPI void $openContainerComponent(::Player&);

    MCNAPI bool $swing(::ActorSwingSource);

    MCNAPI void $useItem(::ItemStackBase&, ::ItemUseMethod, bool);

    MCNAPI void $getDebugText(std::vector<std::string>&);

    MCNAPI float $getMapDecorationRotation() const;

    MCNAPI float $getPassengerYRotation(::Actor const&) const;

    MCNAPI bool $add(::ItemStack&);

    MCNAPI bool $drop(::ItemStack const&, bool const);

    MCNAPI ::InteractionResult $getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);

    MCNAPI bool $canDestroyBlock(::Block const&) const;

    MCNAPI void $setAuxValue(int);

    MCNAPI void $renderDebugServerState(::IOptionsReader const&);

    MCNAPI void $kill();

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI bool $shouldDropDeathLoot() const;

    MCNAPI void $applySnapshot(::EntityContext const&, ::MovementDataExtractionUtility::SnapshotAccessor const&);

    MCNAPI void $onPush(::Actor&);

    MCNAPI std::optional<BlockPos> $getLastDeathPos() const;

    MCNAPI std::optional<DimensionType> $getLastDeathDimension() const;

    MCNAPI bool $hasDiedBefore() const;

    MCNAPI void $doEnterWaterSplashEffect();

    MCNAPI void $doExitWaterSplashEffect();

    MCNAPI void $doWaterSplashEffect();

    MCNAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot, ::ItemStack const&) const;

    MCNAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&) const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
