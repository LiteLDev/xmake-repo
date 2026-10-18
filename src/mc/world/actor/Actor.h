#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/level/dimension/DimensionType.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/MobEffectIds.h"
#include "mc/common/SubClientId.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/bitset.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/util/VariantParameterList.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDefinitionPtr.h"
#include "mc/world/actor/ActorEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorFlags.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/attribute/AttributeBuffType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class ActorDefinitionEvent;
#else // @header-generator platform
#endif // @header-generator platform
class ActorDefinitionGroup;
class ActorHurtResult;
class ActorInteraction;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorOwnerComponent;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class GameEvent;
#else // @header-generator platform
#endif // @header-generator platform
class GetCollisionShapeInterface;
class IConstBlockSource;
class ILevel;
#if defined(LL_PLAT_A) // @header-generator platform
class IOptionsReader;
class ITickingArea;
#else // @header-generator platform
#endif // @header-generator platform
class InteractionResult;
class ItemActor;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
class ListTag;
#else // @header-generator platform
#endif // @header-generator platform
class LootTable;
class Matrix;
class MerchantRecipeList;
class Mob;
class MobEffect;
class MobEffectInstance;
#if defined(LL_PLAT_A) // @header-generator platform
class ModelPartLocator;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
struct AABBShapeComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorDefinitionIdentifier;
struct ActorLink;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorRotationComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct DimensionType;
struct DistanceSortedActor;
struct DynamicRenderOffsetComponent;
struct EquipmentTable;
struct HurtParameters;
struct InterpolationPair;
struct MutableAttributeWithContext;
struct SoundEventIdentifier;
struct StateVectorComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct ValidMutableAttributeWithContext;
struct VariantParameterListConst;
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Safety { class RedactableString; }
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace VehicleUtils { struct VehicleRootInfo; }
#else // @header-generator platform
class IOptionsReader;
#endif // @header-generator platform
// clang-format on
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

class Level;
#endif // @header-generator platform

class Actor {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // Actor inner types define
    using EntityBlockCollisionCallback =
        ::std::function<void(::BlockSource&, ::Block const&, ::BlockPos const&, ::Actor&)>;

public:
    LLNDAPI class EntityContext&       getEntityContext() { return mEntityContext; }
    LLNDAPI class EntityContext const& getEntityContext() const { return mEntityContext; }

    LLAPI void refresh();

    LLAPI optional_ref<Actor> clone(Vec3 const& pos, std::optional<DimensionType> dimId = std::nullopt) const;

    LLNDAPI std::string const& getTypeName() const;

    LLNDAPI class Vec3 getFeetPos() const;

    LLNDAPI class Vec3 getHeadPos() const;

    LLNDAPI class BlockPos getFeetBlockPos() const;

    LLNDAPI bool isSimulatedPlayer() const;

    LLNDAPI bool isOnGround() const;

    LLAPI void setOnFire(int time, bool hasEffect = true);
    LLAPI void stopFire();

    LLNDAPI Vec3  getVelocity() const;
    LLNDAPI float getPosDeltaPerSecLength() const;

    LLAPI bool hurtByCause(
        float                                   damage,
        ::SharedTypes::Legacy::ActorDamageCause cause    = ::SharedTypes::Legacy::ActorDamageCause::Override,
        optional_ref<Actor>                     attacker = std::nullopt
    );

    LLNDAPI class HitResult traceRay(
        float                                                                          tMax         = 5.5f,
        bool                                                                           includeActor = true,
        bool                                                                           includeBlock = true,
        std::function<bool(class BlockSource const&, class Block const&, bool)> const& blockCheckFunction =
            [](auto&&...) -> bool { return true; }
    ) const;

    LLAPI void teleport(class Vec3 const& pos, DimensionType dimId, class Vec2 const& rotation);
    LLAPI void teleport(class Vec3 const& pos, DimensionType dimId);

    LLAPI void setName(std::string const& name);

    LLNDAPI float evalMolang(std::string const& expression);

    LLNDAPI AABB const& getAABB() const { return mBuiltInComponents->mAABBShapeComponent->mAABB; }

    LLAPI static ::Actor* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

    [[nodiscard]] Level& getLevel() const { return *reinterpret_cast<Level*>(mLevel); }

    [[nodiscard]] Vec3 const& getPosition() const { return mBuiltInComponents->mStateVectorComponent->mPos; }

    [[nodiscard]] Vec3 const& getPosDelta() const { return mBuiltInComponents->mStateVectorComponent->mPosDelta; }

    [[nodiscard]] Vec2 const& getRotation() const { return mBuiltInComponents->mActorRotationComponent->mRot; }

    [[nodiscard]] bool hasCategory(ActorCategory category) const { return (mCategories & category) == category; }

    LLNDAPI ::DimensionType getDimensionId() const;

    [[nodiscard]] inline bool isType(::ActorType type) const { return getEntityTypeId() == type; }

    LLNDAPI bool isPlayer() const;

    [[nodiscard]] inline bool isClientSide() const { return !mLevel; }

    LLNDAPI bool isTouchingDamageBlock() const;

    LLNDAPI int getHealth() const;

    LLNDAPI int getMaxHealth() const;

    LLNDAPI bool isInWorld() const;

    LLNDAPI ItemStack const& getArmor(::SharedTypes::Legacy::ArmorSlot slot) const;

    LLNDAPI bool getStatusFlag(::ActorFlags flag) const;

    LLNDAPI bool isOnHotBlock() const;

    [[nodiscard]] bool isSwimming() const { return getStatusFlag(::ActorFlags::Swimming); }
    [[nodiscard]] bool isMoving() const { return getStatusFlag(::ActorFlags::Moving); }
    [[nodiscard]] bool isSprinting() const { return getStatusFlag(::ActorFlags::Sprinting); }
    [[nodiscard]] bool isSneaking() const { return getStatusFlag(::ActorFlags::Sneaking); }
    [[nodiscard]] bool isCrawling() const { return getStatusFlag(::ActorFlags::Crawling); }
    [[nodiscard]] bool isGliding() const { return getStatusFlag(::ActorFlags::Gliding); }
    [[nodiscard]] bool isDancing() const { return getStatusFlag(::ActorFlags::Dancing); }
    [[nodiscard]] bool isHurt() const {
        if (auto health = getHealth(); health > 0 && health < getMaxHealth()) {
            return true;
        } else {
            return false;
        }
    }

    LLNDAPI ::ItemStack const& getOffhandSlot() const;

    LLNDAPI bool isDead() const;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::EntityContext>                               mEntityContext;
    ::ll::TypedStorage<8, 72, ::VariantParameterList>                        mInitParams;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mCustomInitEventName;
    ::ll::TypedStorage<1, 1, ::ActorInitializationMethod>                    mInitMethod;
    ::ll::TypedStorage<1, 1, bool>                                           mForceInitMethodToSpawnOnReload;
    ::ll::TypedStorage<1, 1, bool>                                           mAdded;
    ::ll::TypedStorage<8, 8, ::ActorDefinitionGroup*>                        mDefinitions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionDescriptor>> mCurrentDescription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RopeSystem>>               mLeashRopeSystem;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mAlias;
    ::ll::TypedStorage<4, 68, ::std::optional<::glm::mat4x4>>                mPreviousRenderTransform;
    ::ll::TypedStorage<4, 4, int>                                            mLastHurtByPlayerTime;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::std::vector<::std::vector<::glm::mat4x4>>>>
                                                                           mPreviousBoneMatrices;
    ::ll::TypedStorage<8, 48, ::SynchedActorDataEntityWrapper>             mEntityData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpatialActorNetworkData>> mNetworkData;
    ::ll::TypedStorage<4, 12, ::Vec3>                                      mSentDelta;
    ::ll::TypedStorage<4, 4, float>                                        mScale;
    ::ll::TypedStorage<4, 4, float>                                        mScalePrev;
    ::ll::TypedStorage<1, 1, bool>                                         mIgnoreLighting;
    ::ll::TypedStorage<1, 1, bool>                                         mFilterLighting;
    ::ll::TypedStorage<4, 4, float>                                        mStepSoundVolume;
    ::ll::TypedStorage<4, 4, float>                                        mStepSoundPitch;
    ::ll::TypedStorage<8, 8, ::AABB*>                                      mLastHitBB;
    ::ll::TypedStorage<8, 8, uint64>                                       mNameTagHash;
    ::ll::TypedStorage<4, 4, float>                                        mShadowOffset;
    ::ll::TypedStorage<4, 4, float>                                        mPushThrough;
    ::ll::TypedStorage<4, 4, int>                                          mTickCount;
    ::ll::TypedStorage<4, 4, int>                                          mInvulnerableTime;
    ::ll::TypedStorage<4, 4, int>                                          mLastHealth;
    ::ll::TypedStorage<1, 1, bool>                                         mInvulnerable;
    ::ll::TypedStorage<4, 4, int>                                          mFlameTexFrameIndex;
    ::ll::TypedStorage<4, 4, float>                                        mFlameFrameIncrementTime;
    ::ll::TypedStorage<1, 1, bool>                                         mAlwaysFireImmune;
    ::ll::TypedStorage<1, 1, bool>                                         mInheritRotationWhenRiding;
    ::ll::TypedStorage<1, 1, bool>                                         mForcedLoading;
    ::ll::TypedStorage<1, 1, bool>                                         mHighlightedThisFrame;
    ::ll::TypedStorage<1, 1, bool>                                         mInitialized;
    ::ll::TypedStorage<1, 1, bool>                                         mProcessedOnChunkDiscard;
    ::ll::TypedStorage<4, 4, float>                                        mSoundVolume;
    ::ll::TypedStorage<4, 4, int>                                          mShakeTime;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLegacyUniqueID;
    ::ll::TypedStorage<8, 16, ::WeakRef<::Dimension>>                      mDimension;
    ::ll::TypedStorage<8, 8, ::ILevel*>                                    mLevel;
    ::ll::TypedStorage<8, 48, ::HashedString>                              mActorRendererId;
    ::ll::TypedStorage<4, 4, ::ActorCategory>                              mCategories;
    ::ll::TypedStorage<4, 4, ::ActorVersion>                               mVersion;
    ::ll::TypedStorage<8, 32, ::BuiltInActorComponents>                    mBuiltInComponents;
    ::ll::TypedStorage<8, 48, ::HashedString> mActorRendererIdThatAnimationComponentWasInitializedWith;
    ::ll::TypedStorage<1, 1, bool>            mChanged;
    ::ll::TypedStorage<1, 1, bool>            mRemoved;
    ::ll::TypedStorage<1, 1, bool>            mMovedToLimbo;
    ::ll::TypedStorage<1, 1, bool>            mMovedToUnloadedChunk;
    ::ll::TypedStorage<1, 1, bool>            mBlocksBuilding;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>     mAnimationComponent;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>     mUIAnimationComponent;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mTargetId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mInLovePartner;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>>             mPersistingTradeOffers;
    ::ll::TypedStorage<4, 4, int>                                          mPersistingTradeRiches;
    ::ll::TypedStorage<1, 1, bool>                                         mPersistingTrade;
    ::ll::TypedStorage<1, 1, bool>                                         mEffectsDirty;
    ::ll::TypedStorage<1, 1, bool>                                         mLootDropped;
    ::ll::TypedStorage<1, 1, bool>                                         mLoadedFromNBTThisFrame;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                mHurtColor;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionDiffList>> mDefinitionList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>>             mLoadedActorPropertyTag;
    ::ll::TypedStorage<8, 16, ::ActorDefinitionPtr>                        mActorDefinitionPtr;
    ::ll::TypedStorage<8, 32, ::std::string>                               mFilteredNameTag;
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData>                 mTerrainInterlockData;
    ::ll::TypedStorage<1, 1, bool>                                         mWasHurtThisTick;
    ::ll::TypedStorage<1, 1, bool>                                         mWasHurtLastTick;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtMobId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtByMobId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtByPlayerId;
    ::ll::TypedStorage<8, 8, uint64>                                       mLastHurtTimestamp;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>      mLastHurtCause;
    ::ll::TypedStorage<4, 4, float>                                        mLastHurt;
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtMobTimestamp;
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtByMobTime;
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtByMobTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                         mIsPredictableProjectile;
    ::ll::TypedStorage<1, 1, bool>                                         mIsRenderingInUI;
#ifdef LL_PLAT_C
    ::ll::TypedStorage<1, 1, bool> mIsOnScreen;
    ::ll::TypedStorage<1, 1, bool> mUpdateBonesAndEffects;
#endif
    ::ll::TypedStorage<1, 1, bool>                             mUpdateEffects;
    ::ll::TypedStorage<1, 1, bool>                             mCanPickupItems;
    ::ll::TypedStorage<1, 1, bool>                             mHasSetCanPickupItems;
    ::ll::TypedStorage<1, 1, bool>                             mChainedDamageEffects;
    ::ll::TypedStorage<4, 4, int>                              mAffectedByWaterBottleTicksToEffect;
    ::ll::TypedStorage<4, 4, ::SpawnRuleEnum>                  mSpawnRulesEnum;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActionQueue>> mActionQueue;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>             mMolangVariables;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                  mFishingHookID;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Actor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual bool hasComponent(::HashedString const& name) const;

#endif // @header-generator platform
    virtual void outOfWorld();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Actor();
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod method);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

    virtual void reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void _serverInitItemStackIds();

    virtual void _doInitialMove();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasComponent(::HashedString const&) const;
#else // @header-generator platform
    virtual ~Actor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resetUserPos(::ActorResetRule);
#else // @header-generator platform
    virtual void resetUserPos(::ActorResetRule resetRule);
#endif // @header-generator platform

    virtual ::ActorType getOwnerEntityType();

    virtual void remove();

    virtual ::Vec3 getFiringPos() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getInterpolatedBodyRot(float) const;
#else // @header-generator platform
    virtual float getInterpolatedBodyRot(float a = 0.0f) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getInterpolatedHeadRot(float) const;
#else // @header-generator platform
    virtual float getInterpolatedHeadRot(float a = 0.0f) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getInterpolatedBodyYaw(float) const;
#else // @header-generator platform
    virtual float getInterpolatedBodyYaw(float a = 0.0f) const;
#endif // @header-generator platform

    virtual float getYawSpeedInDegreesPerSecond() const;

    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const;

    virtual bool isFireImmune() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void blockedByShield(::ActorDamageSource const&, ::Actor&);
#else // @header-generator platform
    virtual void blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);
#endif // @header-generator platform

    virtual bool canDisableShield();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);
#else // @header-generator platform
    virtual void
    teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void lerpMotion(::Vec3 const&);
#else // @header-generator platform
    virtual void lerpMotion(::Vec3 const& delta);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Packet> tryCreateAddActorPacket();
#else // @header-generator platform
    virtual ::std::unique_ptr<::Packet> tryCreateAddActorPacket();
#endif // @header-generator platform

    virtual void normalTick();

    virtual void baseTick();

    virtual void passengerTick();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool startRiding(::Actor&, bool);
#else // @header-generator platform
    virtual bool startRiding(::Actor& vehicle, bool forceRiding);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addPassenger(::Actor&);
#else // @header-generator platform
    virtual void addPassenger(::Actor& passenger);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;
#else // @header-generator platform
    virtual ::std::string getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getEntityLocNameString() const;
#else // @header-generator platform
    virtual ::std::string getEntityLocNameString() const;
#endif // @header-generator platform

    virtual bool isInvisible() const;

    virtual bool canShowNameTag() const;

    virtual ::mce::Color getNameTagTextColor() const;

    virtual float getShadowRadius() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getHeadLookVector(float) const;
#else // @header-generator platform
    virtual ::Vec3 getHeadLookVector(float a = 0.0f) const;
#endif // @header-generator platform

    virtual bool canInteractWithOtherEntitiesInGame() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getBrightness(float, ::IConstBlockSource const&) const;
#else // @header-generator platform
    virtual float getBrightness(float a, ::IConstBlockSource const& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerTouch(::Player&);
#else // @header-generator platform
    virtual void playerTouch(::Player& player);
#endif // @header-generator platform

    virtual bool isImmobile() const;

    virtual bool isSilentObserver() const;

    virtual bool isSleeping() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSleeping(bool);
#else // @header-generator platform
    virtual void setSleeping(bool val);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSneaking(bool);
#else // @header-generator platform
    virtual void setSneaking(bool value);
#endif // @header-generator platform

    virtual bool isBlocking() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDamageBlocked(::ActorDamageSource const&) const;
#else // @header-generator platform
    virtual bool isDamageBlocked(::ActorDamageSource const& source) const;
#endif // @header-generator platform

    virtual bool isAlive() const;

    virtual bool isOnFire() const;

    virtual bool isSurfaceMob() const;

    virtual bool isTargetable() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTarget(::Actor*);
#else // @header-generator platform
    virtual void setTarget(::Actor* entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidTarget(::Actor*) const;
#else // @header-generator platform
    virtual bool isValidTarget(::Actor* attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);
#else // @header-generator platform
    virtual ::ActorHurtResult attack(::Actor& target, ::SharedTypes::Legacy::ActorDamageCause const& cause);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void performRangedAttack(::Actor&, float);
#else // @header-generator platform
    virtual void performRangedAttack(::Actor& target, float);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setOwner(::ActorUniqueID const);
#else // @header-generator platform
    virtual void setOwner(::ActorUniqueID const ownerId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSitting(bool);
#else // @header-generator platform
    virtual void setSitting(bool value);
#endif // @header-generator platform

    virtual void onTame();

    virtual void onFailedTame();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setStanding(bool);
#else // @header-generator platform
    virtual void setStanding(bool value);
#endif // @header-generator platform

    virtual bool canPowerJump() const;

    virtual bool isEnchanted() const;

    virtual void playAmbientSound();

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SharedTypes::Legacy::ActorDamageCause getBlockDamageCause(::Block const&) const;
#else // @header-generator platform
    virtual ::SharedTypes::Legacy::ActorDamageCause getBlockDamageCause(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult doFireHurt(int);
#else // @header-generator platform
    virtual ::ActorHurtResult doFireHurt(int amount);
#endif // @header-generator platform

    virtual void onLightningHit();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void feed(int);
#else // @header-generator platform
    virtual void feed(int itemId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent eventId, int data);
#endif // @header-generator platform

    virtual ::HashedString const& getActorRendererId() const;

    virtual void despawn();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);
#else // @header-generator platform
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const;
#else // @header-generator platform
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const;
#else // @header-generator platform
    virtual int getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const;
#else // @header-generator platform
    virtual float getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot slot, int channelRGBA) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);
#else // @header-generator platform
    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCarriedItem(::ItemStack const&);
#else // @header-generator platform
    virtual void setCarriedItem(::ItemStack const& item);
#endif // @header-generator platform

    virtual ::ItemStack const& getCarriedItem() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setOffhandSlot(::ItemStack const&);
#else // @header-generator platform
    virtual void setOffhandSlot(::ItemStack const& item);
#endif // @header-generator platform

    virtual ::ItemStack const& getEquippedTotem() const;

    virtual bool consumeTotem();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool load(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

    virtual ::HashedString const& queryEntityRenderer() const;

    virtual ::ActorUniqueID getSourceUniqueID() const;

    virtual bool canFreeze() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB getLiquidAABB(::SharedTypes::v1_26_20::MaterialType const) const;
#else // @header-generator platform
    virtual ::AABB getLiquidAABB(::SharedTypes::v1_26_20::MaterialType const liquidType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleInsidePortal(::BlockPos const&);
#else // @header-generator platform
    virtual void handleInsidePortal(::BlockPos const& portalPos);
#endif // @header-generator platform

    virtual bool canChangeDimensionsUsingPortal() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void changeDimension(::ChangeDimensionPacket const&);
#else // @header-generator platform
    virtual void changeDimension(::DimensionType toId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void changeDimension(::DimensionType);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void changeDimension(::ChangeDimensionPacket const&);
#else // LL_PLAT_C
    virtual void changeDimension(::ChangeDimensionPacket const& packet);
#endif
#endif // @header-generator platform

    virtual ::ActorUniqueID getControllingPlayer() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);
#else // @header-generator platform
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSynchedDataUpdate(int);
#else // @header-generator platform
    virtual void onSynchedDataUpdate(int dataId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canAddPassenger(::Actor&) const;
#else // @header-generator platform
    virtual bool canAddPassenger(::Actor& passenger) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPickupItem(::ItemStack const&) const;
#else // @header-generator platform
    virtual bool canPickupItem(::ItemStack const& item) const;
#endif // @header-generator platform

    virtual bool canBePulledIntoVehicle() const;

    virtual bool inCaravan() const;

    virtual void sendMotionPacketIfNeeded();

    virtual bool canSynchronizeNewEntity() const;

    virtual void startSwimming();

    virtual void stopSwimming();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void buildDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void buildDebugInfo(::std::string& out) const;
#endif // @header-generator platform

    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    virtual int getDeathTime() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeAffected(uint) const;
#else // @header-generator platform
    virtual bool canBeAffected(uint id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeAffectedByArrow(::MobEffectInstance const&) const;
#else // @header-generator platform
    virtual bool canBeAffectedByArrow(::MobEffectInstance const& effect) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onEffectRemoved(::MobEffectInstance&);
#else // @header-generator platform
    virtual void onEffectRemoved(::MobEffectInstance& effect);
#endif // @header-generator platform

    virtual bool canObstructSpawningAndBlockPlacement() const;

    virtual ::AnimationComponent& getAnimationComponent();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openContainerComponent(::Player&);
#else // @header-generator platform
    virtual void openContainerComponent(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool swing(::ActorSwingSource);
#else // @header-generator platform
    virtual bool swing(::ActorSwingSource swingSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void useItem(::ItemStackBase&, ::ItemUseMethod, bool);
#else // @header-generator platform
    virtual void useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getDebugText(std::vector<std::string>&);
#else // @header-generator platform
    virtual void getDebugText(::std::vector<::std::string>& outputInfo);
#endif // @header-generator platform

    virtual float getMapDecorationRotation() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getPassengerYRotation(::Actor const&) const;
#else // @header-generator platform
    virtual float getPassengerYRotation(::Actor const& passenger) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool add(::ItemStack&);
#else // @header-generator platform
    virtual bool add(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool drop(::ItemStack const&, bool const);
#else // @header-generator platform
    virtual bool drop(::ItemStack const& item, bool const randomly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InteractionResult getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);
#else // @header-generator platform
    virtual ::InteractionResult
    getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canDestroyBlock(::Block const&) const;
#else // @header-generator platform
    virtual bool canDestroyBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setAuxValue(int);
#else // @header-generator platform
    virtual void setAuxValue(int aux);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void renderDebugServerState(::IOptionsReader const&);
#else // @header-generator platform
    virtual void renderDebugServerState(::IOptionsReader const& options);
#endif // @header-generator platform

    virtual void kill();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void die(::ActorDamageSource const&);
#else // @header-generator platform
    virtual void die(::ActorDamageSource const& source);
#endif // @header-generator platform

    virtual bool shouldDropDeathLoot() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applySnapshot(::EntityContext const&, ::MovementDataExtractionUtility::SnapshotAccessor const&);
#else // @header-generator platform
    virtual void applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPush(::Actor&);
#else // @header-generator platform
    virtual void onPush(::Actor& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> getLastDeathPos() const;
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> getLastDeathPos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<DimensionType> getLastDeathDimension() const;
#else // @header-generator platform
    virtual ::std::optional<::DimensionType> getLastDeathDimension() const;
#endif // @header-generator platform

    virtual bool hasDiedBefore() const;

    virtual void doEnterWaterSplashEffect();

    virtual void doExitWaterSplashEffect();

    virtual void doWaterSplashEffect();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot, ::ItemStack const&) const;
#else // @header-generator platform
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&) const;
#else // @header-generator platform
    virtual bool _shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Actor(::ILevel&, ::EntityContext&);
#else // @header-generator platform
    MCAPI Actor(::ILevel& level, ::EntityContext& entityContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI Actor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    playSynchronizedSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, bool, std::optional<Vec3> const&);
#else // @header-generator platform
    MCAPI ::BuiltInActorComponents _addActorBuiltInComponents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void playSynchronizedSound(::SoundEventIdentifier const&, ::Vec3 const&, int, bool, ::Player*);
#else // @header-generator platform
    MCAPI void _addActorNonBuiltInComponents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void positionAllPassengers();
#else // @header-generator platform
    MCAPI bool _applyPendingPropertyChanges();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void positionPassenger(::Actor&);
#else // @header-generator platform
    MCAPI ::ItemActor const* _drop(::ItemStack const& item, bool randomly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void postGameEvent(::GameEvent const&, ::Vec3 const&, ::Block const*);
#else // @header-generator platform
    MCFOLD ::std::vector<::MobEffectInstance>& _getAllEffectsNonConst();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void postSplashGameEvent();
#else // @header-generator platform
    MCAPI ::AnimationComponent& _getAnimationComponent(
        ::std::shared_ptr<::AnimationComponent>& animationComponent,
        ::AnimationComponentGroupType            group
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool pullInEntity(::Actor&);
#else // @header-generator platform
    MCAPI void _initializeMaxAutoStep(float maxAutoStep);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void pushBackActionEventToActionQueue(::ActionEvent);
#else // @header-generator platform
    MCAPI bool _isDeathLootAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void pushOutOfBlocks(::Vec3 const&);
#else // @header-generator platform
    MCAPI void _notifyMobEffectsOnHurt(::ActorDamageSource const& source, float damage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void queueBBUpdateFromDefinition();
#else // @header-generator platform
    MCAPI void _refreshAABB();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void queueBBUpdateFromValue(::Vec2 const&);
#else // @header-generator platform
    MCAPI void _sendDirtyActorData();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void refreshComponents();
#else // @header-generator platform
    MCAPI void _setActorTypeId(::ActorType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void reload();
#else // @header-generator platform
    MCAPI void _setDimensionTransitionComponent(::DimensionType fromId, ::DimensionType toId, int portalCooldown);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeAllEffects();
#else // @header-generator platform
    MCAPI void _setHandContainerItem(::ItemStack const& item, ::HandSlot handSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeAllPassengers(bool, bool);
#else // @header-generator platform
    MCAPI void _setPos(::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeCategory(::ActorCategory const&);
#else // @header-generator platform
    MCAPI void _setupServerAnimationComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeEffect(int);
#else // @header-generator platform
    MCAPI void _updateComposition(bool reload);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removePersistingTrade();
#else // @header-generator platform
    MCAPI void addEffect(::MobEffectInstance const& effect);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool removeTag(std::string const&);
#else // @header-generator platform
    MCAPI bool addTag(::std::string const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool save(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void applyOnBornPropertyChanges();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void savePersistingTrade(std::unique_ptr<CompoundTag>, int);
#else // @header-generator platform
    MCAPI void buildDebugGroupInfo(::std::string& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void serializationSetHealth(int);
#else // @header-generator platform
    MCAPI void burn(int damage, bool inFire);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setAABB(::AABB const&);
#else // @header-generator platform
    MCAPI bool canAttack(::Actor const& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setAABBDim(::Vec2 const&);
#else // @header-generator platform
    MCAPI bool canBeginOrContinueClimbingLadder() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setActorRendererId(::HashedString);
#else // @header-generator platform
    MCAPI bool canFly() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setAutonomous(bool);
#else // @header-generator platform
    MCAPI bool canMate(::Actor const& partner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setBaseDefinition(::ActorDefinitionIdentifier const&, bool, bool);
#else // @header-generator platform
    MCAPI bool canReceiveMobEffectsFromGameplay() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setBlockTarget(::BlockPos const&);
#else // @header-generator platform
    MCAPI bool canSee(::Vec3 const& targetPos, ::ShapeType obstructionType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setBreakingObstruction(bool);
#else // @header-generator platform
    MCAPI bool canSeeDaylight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCameraDistance(float);
#else // @header-generator platform
    MCAPI void celebrateHunt(int duration, bool special);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCanFly(bool);
#else // @header-generator platform
    MCAPI void checkFallDamage(float ya, bool onGround, bool recheckLiquid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setChainedDamageEffects(bool);
#else // @header-generator platform
    MCAPI void chorusFruitTeleport(::Vec3 const& range);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setChanged();
#else // @header-generator platform
    MCAPI bool closerThan(::Actor const& e, float distance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCharged(bool);
#else // @header-generator platform
    MCAPI bool closerThan(::Actor const& e, float distanceXZ, float distanceY) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setClimbing(bool);
#else // @header-generator platform
    MCAPI void consumeItem(::ItemActor& itemActor, int count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDancing(bool);
#else // @header-generator platform
    MCAPI ::UpdateEquipPacket createUpdateEquipPacket(int containerID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDead(bool);
#else // @header-generator platform
    MCAPI ::UpdateTradePacket createUpdateTradePacket(int containerID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDimension(::WeakRef<Dimension>);
#else // @header-generator platform
    MCAPI void deregisterTagsFromLevelCache();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDoorBreaker(bool);
#else // @header-generator platform
    MCAPI float distanceSqrToBlockPosCenter(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDoorOpener(bool);
#else // @header-generator platform
    MCAPI float distanceTo(::Actor const& e) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setEnchanted(bool);
#else // @header-generator platform
    MCAPI void dropTowards(::ItemStack const& item, ::Vec3 towards);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setEquipFromPacket(::UpdateEquipPacket const&);
#else // @header-generator platform
    MCAPI void equip(::EquipmentTable const& equipmentTable);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setFallDistance(float);
#else // @header-generator platform
    MCAPI void equip(::std::string const& lootTableFilePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setFilteredNameTag(std::string const&);
#else // @header-generator platform
    MCAPI void equipFromEquipmentDefinition();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setFishingHookID(::ActorUniqueID);
#else // @header-generator platform
    MCAPI float evaluateSeatRotation(::RideableComponent const& rideable, bool useVehicleRenderParams);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setGlobal(bool);
#else // @header-generator platform
    MCAPI bool executeEvent(::std::string const& name, ::VariantParameterList const& list);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setHurtDir(int);
#else // @header-generator platform
    MCAPI void exitVehicle(bool exitFromPassenger, bool actorIsBeingDestroyed, bool wasEjectedByActivatorRail);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setHurtTime(int);
#else // @header-generator platform
    MCAPI ::FishingHook* fetchFishingHook();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setInLove(::Actor*);
#else // @header-generator platform
    MCAPI ::std::vector<::DistanceSortedActor> fetchNearbyActorsSorted(::Vec3 const& distance, ::ActorType actorTypeId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setInterpolation();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI int getActiveEffectCount() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setInvisible(bool);
#else // @header-generator platform
    MCAPI ::ActorDefinitionIdentifier const& getActorIdentifier() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setIsExperienceDropEnabled(bool const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Matrix getActorToWorldTransform(float frameAlpha, bool useActorRotation, ::Vec3 const& offset) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setIsOnScreen(bool);
#else // @header-generator platform
    MCFOLD ::std::vector<::MobEffectInstance> const& getAllEffects() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setJumping(bool);
#else // @header-generator platform
    MCAPI ::Vec3 getAttachPos(::SharedTypes::Legacy::ActorLocation location, float alpha = 0.0f) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setLastHitBB(::Vec3 const&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI ::AttributeInstanceConstRef getAttribute(::Attribute const& attribute) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setLastHurtByMob(::Mob*);
#else // @header-generator platform
    MCAPI ::gsl::not_null<::BaseAttributeMap const*> getAttributes() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setLastHurtByPlayer(::Player*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::gsl::not_null<::BaseAttributeMap*> getAttributes();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setLastHurtMob(::Mob const&);
#else // @header-generator platform
    MCAPI ::BlockPos getBlockPosCurrentlyStandingOn(::Actor const* actor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setLayingDown(bool);
#else // @header-generator platform
    MCAPI ::ItemStack const& getCarriedItemInSlotPreferredBy(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setLeashHolder(::ActorUniqueID);
#else // @header-generator platform
    MCAPI int getChestSlots() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setLimitedLifetimeTicks(int);
#else // @header-generator platform
    MCAPI float getCurrentSwimAmount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setMarkVariant(int);
#else // @header-generator platform
    MCAPI ::Dimension& getDimension() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setMovedToLimbo(bool);
#else // @header-generator platform
    MCFOLD ::BlockSource& getDimensionBlockSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setMovedToUnloadedChunk(bool);
#else // @header-generator platform
    MCFOLD ::BlockSource const& getDimensionBlockSourceConst() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setMoving(bool);
#else // @header-generator platform
    MCAPI ::MobEffectInstance const* getEffect(::MobEffect const& effect) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setNameTag(std::string const&);
#else // @header-generator platform
    MCAPI ::MobEffectInstance const* getEffect(uint effectId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setNameTagVisible(bool);
#else // @header-generator platform
    MCAPI ::StackRefResult<::EntityRegistry> getEntityRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setNameplateDepthTested(bool);
#else // @header-generator platform
    MCAPI ::ActorType getEntityTypeId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setNameplateRenderDistanceMax(float);
#else // @header-generator platform
    MCAPI int getEquipSlots() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setOffersFromPacket(::UpdateTradePacket const&);
#else // @header-generator platform
    MCAPI int getEquipmentCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPersistent();
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::EquipmentSlot getEquipmentSlotForItem(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPos(::Vec3 const&);
#else // @header-generator platform
    MCAPI ::Vec3 getEyePos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPosDelta(::Vec3 const&);
#else // @header-generator platform
    MCAPI float getFallDistance() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPosDirectLegacy(::Vec3 const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getFilteredNameTag() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPosPrev(::Vec3 const&);
#else // @header-generator platform
    MCAPI bool getFirstAvailableSeatPos(::Actor& potentialPassenger, ::Vec3& result) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPrevPosRotSetThisTick(bool);
#else // @header-generator platform
    MCAPI ::Actor* getFirstPassenger() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPreviousPosRot();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Block const* getInsideBlock() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRedactableNameTag(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    MCAPI ::Vec3 getInterpolatedPosition(float a = 0.0f) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setResting(bool);
#else // @header-generator platform
    MCAPI ::Vec3 getInterpolatedRidingPosition(float a = 0.0f) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRotationDirectly(::Vec2 const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Vec2 getInterpolatedRotation(float a) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRotationPrev(::Vec2 const&);
#else // @header-generator platform
    MCAPI int getInventorySize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRotationPrevX(float);
#else // @header-generator platform
    MCAPI ::ActorUniqueID getLeashHolder() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRotationPrevY(float);
#else // @header-generator platform
    MCAPI uint64 getLevelTimeStamp() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRotationWrapped(::Vec2 const&);
#else // @header-generator platform
    MCAPI ::std::vector<::ActorLink> getLinks() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRotationX(float);
#else // @header-generator platform
    MCAPI ::LootTable* getLootTable();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRotationY(float);
#else // @header-generator platform
    MCAPI int getMarkVariant() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRuntimeID(::ActorRuntimeID);
#else // @header-generator platform
    MCAPI float getMaxAutoStep() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSaddle(bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI int64 getMetadataId() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setScared(bool);
#else // @header-generator platform
    MCAPI ::MutableAttributeWithContext getMutableAttribute(::Attribute const& attribute);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setScoreTag(std::string const&);
#else // @header-generator platform
    MCAPI ::std::string const& getNameTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setShakeTime(int);
#else // @header-generator platform
    MCAPI int getOnDeathExperience();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSkinID(int);
#else // @header-generator platform
    MCAPI ::DynamicProperties& getOrAddDynamicProperties();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setStatusFlag(::ActorFlags, bool);
#else // @header-generator platform
    MCAPI ::ActorUniqueID const& getOrCreateUniqueID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setStrength(int);
#else // @header-generator platform
    MCAPI ::Mob* getOwner() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setStrengthMax(int);
#else // @header-generator platform
    MCAPI ::ActorUniqueID const getOwnerId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setStructuralIntegrity(int);
#else // @header-generator platform
    MCAPI int getPassengerIndex(::Actor const& passenger) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSwimmer(bool);
#else // @header-generator platform
    MCAPI ::Player* getPlayerOwner() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setTempted(bool);
#else // @header-generator platform
    MCAPI ::Random& getRandom() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setTradeInterest(bool);
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString getRedactableNameTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setTradingPlayer(::Player*);
#else // @header-generator platform
    MCAPI float getRidingHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setUIRendering(bool);
#else // @header-generator platform
    MCAPI ::ActorRuntimeID getRuntimeID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setUniqueID(::ActorUniqueID);
#else // @header-generator platform
    MCAPI int getStrength() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setUpdateBonesAndEffects(bool);
#else // @header-generator platform
    MCAPI float getSwimAmount(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setUpdateEffects(bool);
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> const getTags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setVariant(int);
#else // @header-generator platform
    MCAPI ::MerchantRecipeList* getTradeOffers();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setVelocity(::Vec3 const&);
#else // @header-generator platform
    MCAPI int getVariant() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setWalker(bool);
#else // @header-generator platform
    MCAPI ::Actor* getVehicle() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setYHeadRot(float);
#else // @header-generator platform
    MCAPI ::ActorRuntimeID getVehicleRuntimeID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setYHeadRotations(float, float);
#else // @header-generator platform
    MCAPI ::Vec3 getViewVector(float a = 0.0f) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldAddEntityToRenderQueue() const;
#else // @header-generator platform
    MCFOLD float getYHeadRot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldOrphan(::BlockSource&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::InterpolationPair getYHeadRotationsNewOld() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldRender() const;
#else // @header-generator platform
    MCAPI void handleFallDamage(float fallDistance, float multiplier, ::ActorDamageSource source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldTick() const;
#else // @header-generator platform
    MCAPI void handleLeftoverFallDamage(float damage, ::ActorDamageSource source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldUpdateBonesAndEffects() const;
#else // @header-generator platform
    MCAPI bool hasAnyEffects() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldUpdateEffects() const;
#else // @header-generator platform
    MCAPI bool hasDimension() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemActor* spawnAtLocation(::ItemStack const&, float);
#else // @header-generator platform
    MCAPI bool hasFamily(::HashedString const& family) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void spawnTrailBubbles();
#else // @header-generator platform
    MCAPI bool hasPassenger() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void stopRiding(bool, bool, bool, bool);
#else // @header-generator platform
    MCAPI bool hasPlayerPassenger() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void synchronousSetSize(float, float);
#else // @header-generator platform
    MCAPI bool hasPriorityAmmunition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void teleportPassengersTo(::Vec3 const&, int, int);
#else // @header-generator platform
    MCAPI bool hasRuntimeID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void thawFreezeEffect();
#else // @header-generator platform
    MCAPI bool hasSaddle() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool tick(::BlockSource&);
#else // @header-generator platform
    MCAPI bool hasTag(::std::string const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void transferTickingArea(::Dimension const&);
#else // @header-generator platform
    MCAPI bool hasTags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void triggerActorRemovedEvent();
#else // @header-generator platform
    MCAPI bool hasType(::ActorType types) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int) const;
#else // @header-generator platform
    MCAPI bool hasUniqueID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<int> tryGetEquippableSlotForItem(::ItemDescriptor) const;
#else // @header-generator platform
    MCAPI void heal(int heal);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool tryTeleportTo(::Vec3 const&, bool, bool, int, int);
#else // @header-generator platform
    MCAPI ::ActorHurtResult
    hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateAnimationComponentOnServer();
#else // @header-generator platform
    MCAPI bool inDownwardFlowingLiquid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateDescription();
#else // @header-generator platform
    MCAPI void initParams(::RenderParams& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateDimensionChunkMove();
#else // @header-generator platform
    MCAPI bool isActorLocationInMaterial(
        ::SharedTypes::Legacy::ActorLocation  actorLocation,
        ::SharedTypes::v1_26_20::MaterialType type
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateInsideBlock();
#else // @header-generator platform
    MCAPI bool isAdventure() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateInvisibilityStatus();
#else // @header-generator platform
    MCAPI bool isBaby() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateMolangVariables(::RenderParams&);
#else // @header-generator platform
    MCAPI bool isCreative() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateWaterState();
#else // @header-generator platform
    MCAPI bool isDoorOpener() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool wasHurt();
#else // @header-generator platform
    MCAPI bool isImmersedInWater() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool wasLastHitByPlayer();
#else // @header-generator platform
    MCAPI bool isInClouds() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void wobble();
#else // @header-generator platform
    MCAPI bool isInPrecipitation() const;

    MCAPI bool isInRain() const;

    MCAPI bool isInSnow() const;

    MCAPI bool isInThunderstorm() const;

    MCAPI bool isInWater() const;

    MCAPI bool isInWaterOrRain() const;

    MCAPI bool isInsidePortal() const;

    MCAPI bool isInvertedHealAndHarm() const;

    MCAPI bool isJumping() const;

    MCAPI bool isLayingDown() const;

    MCAPI bool isLeashed() const;

    MCAPI bool isLocalPlayer() const;

    MCAPI bool isOrphan() const;

    MCAPI bool isOverWater() const;

    MCAPI bool isPassenger(::Actor const& passenger) const;

    MCAPI bool isRiding(::Actor* targetVehicle) const;

    MCAPI bool isSilent() const;

    MCAPI bool isSitting() const;

    MCAPI bool isSpectator() const;

    MCAPI bool isStanding() const;

    MCAPI bool isSurvival() const;

    MCAPI bool isSwimmer() const;

    MCAPI bool isTame() const;

    MCAPI bool isTrading() const;

    MCAPI bool isUnderLiquid(::SharedTypes::v1_26_20::MaterialType type) const;

    MCAPI bool isUseNewTradeScreen() const;

    MCAPI bool isWalker() const;

    MCAPI bool isWearingLeatherArmor() const;

    MCAPI bool isWorldBuilder() const;

    MCAPI void killed(::Actor& entity);

    MCAPI void lerpTo(::Vec3 const& pos, ::Vec2 const& rot, int steps);

    MCAPI void lerpTo(::Vec3 const& pos, ::Vec2 const& rot, float headYaw, int steps);

    MCAPI void
    loadLinks(::CompoundTag const& entityTag, ::std::vector<::ActorLink>& links, ::DataLoadHelper& dataLoadHelper);

    MCFOLD void migrateUniqueID(::ActorUniqueID id);

    MCAPI void move(::Vec3 const& posDelta);

    MCAPI void moveTo(::Vec3 const& pos, ::Vec2 const& rot);

    MCAPI bool onClimbableBlock() const;

    MCAPI void pickUpItem(::ItemActor& itemActor, int count);

    MCAPI void playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data
    );

    MCAPI void playSynchronizedSound(
        ::SoundEventIdentifier const& soundEvent,
        ::Vec3 const&                 pos,
        int                           data,
        bool                          isGlobal,
        ::Player*                     primaryLocalPlayer
    );

    MCAPI void playSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&
    );

#ifdef LL_PLAT_C
    MCAPI void positionAllPassengers();
#endif

    MCAPI void positionPassenger(::Actor& passenger);

    MCAPI void postSplashGameEvent();

    MCAPI bool pullInEntity(::Actor& e);

    MCAPI void pushBackActionEventToActionQueue(::ActionEvent actionEvent);

    MCAPI void pushOutOfBlocks(::Vec3 const& vec);

    MCAPI void reload();

    MCAPI void removeAllEffects();

    MCAPI void removeAllPassengers(bool actorIsBeingDestroyed, bool exitFromPassenger);

    MCAPI void removeEffect(int effectId);

    MCAPI bool removeTag(::std::string const& tag);

    MCAPI bool save(::CompoundTag& entityTag) const;

    MCAPI void setActorRendererId(::HashedString actorRendererId);

    MCAPI void setBaseDefinition(::ActorDefinitionIdentifier const& sourceId, bool clearDefs, bool update);

    MCAPI void setDead(bool isDead);

    MCAPI void setDimension(::WeakRef<::Dimension> weakDimension);

#ifdef LL_PLAT_C
    MCAPI void setEquipFromPacket(::UpdateEquipPacket const& packet);
#endif

    MCAPI void setFallDistance(float distance);

    MCAPI void setInLove(::Actor* lovePartner);

    MCAPI void setInvisible(bool value);

    MCAPI void setLastHurtByMob(::Mob* mob);

    MCAPI void setLastHurtByPlayer(::Player* player);

    MCAPI void setLeashHolder(::ActorUniqueID leashHolder);

    MCAPI void setLimitedLifetimeTicks(int lifetimeTicks);

    MCAPI void setNameTag(::std::string const& name);

#ifdef LL_PLAT_C
    MCAPI void setOffersFromPacket(::UpdateTradePacket const& packet);
#endif

    MCAPI void setPersistent();

    MCAPI void setRedactableNameTag(::Bedrock::Safety::RedactableString const& name);

#ifdef LL_PLAT_C
    MCAPI void setRotationWrapped(::Vec2 const& rot);
#endif

    MCAPI void setRuntimeID(::ActorRuntimeID id);

    MCAPI void setStrength(int strength);

#ifdef LL_PLAT_C
    MCAPI void setTradingPlayer(::Player* player);
#endif

    MCFOLD void setUniqueID(::ActorUniqueID id);

    MCAPI void setYHeadRot(float yHeadRot);

    MCAPI void setYHeadRotations(float yHeadRot, float oldYHeadRot);

    MCAPI bool shouldOrphan(::BlockSource& source);

    MCAPI bool shouldTick() const;

    MCAPI ::ItemActor* spawnAtLocation(::ItemStack const& item, float yOffs);

    MCAPI void spawnTrailBubbles();

    MCAPI void
    stopRiding(bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles, bool isBeingTeleported);

    MCAPI void synchronousSetSize(float w, float h);

    MCAPI void teleportPassengersTo(::Vec3 const& pos, int cause, int entityType);

    MCAPI void thawFreezeEffect();

    MCAPI bool tick(::BlockSource& region);

    MCAPI void transferTickingArea(::Dimension const& toDimension);

    MCAPI void triggerActorRemovedEvent();

    MCAPI ::std::vector<::ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int slotNumber) const;

    MCAPI ::std::optional<int> tryGetEquippableSlotForItem(::ItemDescriptor item) const;

    MCAPI bool tryTeleportTo(::Vec3 const& pos, bool landOnBlock, bool avoidLiquid, int cause, int entityType);

    MCAPI void updateDescription();

    MCAPI void updateDimensionChunkMove();

    MCAPI void updateInsideBlock();

    MCAPI void updateInvisibilityStatus();

    MCAPI void updateWaterState();

    MCAPI void wobble();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _moveRelative(::Vec3&, float, float, float, float, float);

    MCNAPI static ::Vec3 buildForward(::Vec2);

    MCNAPI static int getActiveEffectCount(std::vector<MobEffectInstance> const&);

    MCNAPI static ::BlockPos getBlockPosCurrentlyStandingOn(
        ::Vec3 const&,
        ::AABB const&,
        ::IConstBlockSource const&,
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
    MCAPI static ::std::vector<::BlockPos> getBlocksCurrentlyStandingOn(
        ::AABB const&                                      aabb,
        ::IConstBlockSource const&                         region,
        float                                              ignoreGapBelow,
        ::optional_ref<::GetCollisionShapeInterface const> other
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos getBlockPosCurrentlyStandingOn(
        ::Vec3 const&,
        ::AABB const&,
        ::IConstBlockSource const&,
        float const,
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Vec3 getInterpolatedPosition(
        float                                 a,
        ::StateVectorComponent const&         stateVectorComponent,
        ::DynamicRenderOffsetComponent const* dynamicRenderOffsets
    );
#endif

    MCAPI static bool isInLiquid(
        ::SharedTypes::v1_26_20::MaterialType liquidType,
        ::IConstBlockSource const&            region,
        ::AABB const&                         mainAABB,
        ::std::vector<::AABB> const&          subAABBs
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<BlockPos> getBlocksCurrentlyStandingOn(
        ::AABB const&,
        ::IConstBlockSource const&,
        float const,
        ::optional_ref<const GetCollisionShapeInterface>
    );
#else // @header-generator platform
    MCAPI static ::Actor* tryGetFromEntity(::StackRefResult<::EntityContext> entity, bool includeRemoved);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Actor*
    tryGetFromEntity(::StrictEntityContext const& entity, ::EntityRegistry& registry, bool includeRemoved);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ILevel&, ::EntityContext&);
#else // @header-generator platform
    MCAPI void* $ctor(::ILevel& level, ::EntityContext& entityContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $outOfWorld();
#else // @header-generator platform
    MCAPI bool $hasComponent(::HashedString const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $outOfWorld();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    MCFOLD void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCFOLD void $reloadHardcodedClient(::ActorInitializationMethod method);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_serverInitItemStackIds();
#else // @header-generator platform
    MCAPI void $reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_doInitialMove();
#else // @header-generator platform
    MCAPI void $_serverInitItemStackIds();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasComponent(::HashedString const&) const;
#else // @header-generator platform
    MCAPI void $_doInitialMove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resetUserPos(::ActorResetRule);
#else // @header-generator platform
    MCFOLD void $resetUserPos(::ActorResetRule resetRule);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorType $getOwnerEntityType();
#else // @header-generator platform
    MCAPI ::ActorType $getOwnerEntityType();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $remove();
#else // @header-generator platform
    MCAPI void $remove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getFiringPos() const;
#else // @header-generator platform
    MCAPI ::Vec3 $getFiringPos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getInterpolatedBodyRot(float) const;
#else // @header-generator platform
    MCAPI float $getInterpolatedBodyRot(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getInterpolatedHeadRot(float) const;
#else // @header-generator platform
    MCFOLD float $getInterpolatedHeadRot(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getInterpolatedBodyYaw(float) const;
#else // @header-generator platform
    MCFOLD float $getInterpolatedBodyYaw(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getYawSpeedInDegreesPerSecond() const;
#else // @header-generator platform
    MCAPI float $getYawSpeedInDegreesPerSecond() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;
#else // @header-generator platform
    MCFOLD ::Vec3 $getInterpolatedRidingOffset(float, int const) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFireImmune() const;
#else // @header-generator platform
    MCAPI bool $isFireImmune() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $blockedByShield(::ActorDamageSource const&, ::Actor&);
#else // @header-generator platform
    MCFOLD void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canDisableShield();
#else // @header-generator platform
    MCAPI bool $canDisableShield();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);
#else // @header-generator platform
    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $lerpMotion(::Vec3 const&);
#else // @header-generator platform
    MCAPI void $lerpMotion(::Vec3 const& delta);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Packet> $tryCreateAddActorPacket();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $normalTick();
#else // @header-generator platform
    MCAPI void $normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $baseTick();
#else // @header-generator platform
    MCAPI void $baseTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $passengerTick();
#else // @header-generator platform
    MCAPI void $passengerTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $startRiding(::Actor&, bool);
#else // @header-generator platform
    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addPassenger(::Actor&);
#else // @header-generator platform
    MCAPI void $addPassenger(::Actor& passenger);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;
#else // @header-generator platform
    MCAPI ::std::string $getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getEntityLocNameString() const;
#else // @header-generator platform
    MCAPI ::std::string $getEntityLocNameString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvisible() const;
#else // @header-generator platform
    MCAPI bool $isInvisible() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canShowNameTag() const;
#else // @header-generator platform
    MCAPI bool $canShowNameTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getNameTagTextColor() const;
#else // @header-generator platform
    MCFOLD ::mce::Color $getNameTagTextColor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCAPI float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getHeadLookVector(float) const;
#else // @header-generator platform
    MCAPI ::Vec3 $getHeadLookVector(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canInteractWithOtherEntitiesInGame() const;
#else // @header-generator platform
    MCFOLD bool $canInteractWithOtherEntitiesInGame() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getBrightness(float, ::IConstBlockSource const&) const;
#else // @header-generator platform
    MCAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playerTouch(::Player&);
#else // @header-generator platform
    MCFOLD void $playerTouch(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isImmobile() const;
#else // @header-generator platform
    MCAPI bool $isImmobile() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSilentObserver() const;
#else // @header-generator platform
    MCAPI bool $isSilentObserver() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSleeping() const;
#else // @header-generator platform
    MCFOLD bool $isSleeping() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSleeping(bool);
#else // @header-generator platform
    MCFOLD void $setSleeping(bool val);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSneaking(bool);
#else // @header-generator platform
    MCAPI void $setSneaking(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBlocking() const;
#else // @header-generator platform
    MCFOLD bool $isBlocking() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDamageBlocked(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCFOLD bool $isDamageBlocked(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isAlive() const;
#else // @header-generator platform
    MCAPI bool $isAlive() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isOnFire() const;
#else // @header-generator platform
    MCAPI bool $isOnFire() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSurfaceMob() const;
#else // @header-generator platform
    MCFOLD bool $isSurfaceMob() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTargetable() const;
#else // @header-generator platform
    MCFOLD bool $isTargetable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setTarget(::Actor*);
#else // @header-generator platform
    MCAPI void $setTarget(::Actor* entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidTarget(::Actor*) const;
#else // @header-generator platform
    MCFOLD bool $isValidTarget(::Actor* attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);
#else // @header-generator platform
    MCAPI ::ActorHurtResult $attack(::Actor& target, ::SharedTypes::Legacy::ActorDamageCause const& cause);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $performRangedAttack(::Actor&, float);
#else // @header-generator platform
    MCAPI void $performRangedAttack(::Actor& target, float);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setOwner(::ActorUniqueID const);
#else // @header-generator platform
    MCAPI void $setOwner(::ActorUniqueID const ownerId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSitting(bool);
#else // @header-generator platform
    MCFOLD void $setSitting(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTame();
#else // @header-generator platform
    MCFOLD void $onTame();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFailedTame();
#else // @header-generator platform
    MCFOLD void $onFailedTame();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setStanding(bool);
#else // @header-generator platform
    MCAPI void $setStanding(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPowerJump() const;
#else // @header-generator platform
    MCAPI bool $canPowerJump() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isEnchanted() const;
#else // @header-generator platform
    MCAPI bool $isEnchanted() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playAmbientSound();
#else // @header-generator platform
    MCAPI void $playAmbientSound();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ActorDamageCause $getBlockDamageCause(::Block const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::ActorDamageCause $getBlockDamageCause(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $doFireHurt(int);
#else // @header-generator platform
    MCAPI ::ActorHurtResult $doFireHurt(int amount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLightningHit();
#else // @header-generator platform
    MCAPI void $onLightningHit();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $feed(int);
#else // @header-generator platform
    MCAPI void $feed(int itemId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& $getActorRendererId() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD ::HashedString const& $getActorRendererId() const;
#else // LL_PLAT_C
    MCAPI ::HashedString const& $getActorRendererId() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $despawn();
#else // @header-generator platform
    MCAPI void $despawn();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const;
#else // @header-generator platform
    MCFOLD ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const;
#else // @header-generator platform
    MCFOLD int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const;
#else // @header-generator platform
    MCFOLD float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot slot, int channelRGBA) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);
#else // @header-generator platform
    MCFOLD void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setCarriedItem(::ItemStack const&);
#else // @header-generator platform
    MCAPI void $setCarriedItem(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getCarriedItem() const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getCarriedItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setOffhandSlot(::ItemStack const&);
#else // @header-generator platform
    MCAPI void $setOffhandSlot(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getEquippedTotem() const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getEquippedTotem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $consumeTotem();
#else // @header-generator platform
    MCAPI bool $consumeTotem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $load(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& $queryEntityRenderer() const;
#else // @header-generator platform
    MCAPI ::HashedString const& $queryEntityRenderer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;
#else // @header-generator platform
    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canFreeze() const;
#else // @header-generator platform
    MCFOLD bool $canFreeze() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB $getLiquidAABB(::SharedTypes::v1_26_20::MaterialType const) const;
#else // @header-generator platform
    MCAPI ::AABB $getLiquidAABB(::SharedTypes::v1_26_20::MaterialType const liquidType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleInsidePortal(::BlockPos const&);
#else // @header-generator platform
    MCAPI void $handleInsidePortal(::BlockPos const& portalPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canChangeDimensionsUsingPortal() const;
#else // @header-generator platform
    MCAPI bool $canChangeDimensionsUsingPortal() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $changeDimension(::ChangeDimensionPacket const&);
#else // @header-generator platform
    MCAPI void $changeDimension(::DimensionType toId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $changeDimension(::DimensionType);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $changeDimension(::ChangeDimensionPacket const&);
#else // LL_PLAT_C
    MCFOLD void $changeDimension(::ChangeDimensionPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $getControllingPlayer() const;
#else // @header-generator platform
    MCFOLD ::ActorUniqueID $getControllingPlayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);
#else // @header-generator platform
    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSynchedDataUpdate(int);
#else // @header-generator platform
    MCAPI void $onSynchedDataUpdate(int dataId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canAddPassenger(::Actor&) const;
#else // @header-generator platform
    MCAPI bool $canAddPassenger(::Actor& passenger) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPickupItem(::ItemStack const&) const;
#else // @header-generator platform
    MCFOLD bool $canPickupItem(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBePulledIntoVehicle() const;
#else // @header-generator platform
    MCFOLD bool $canBePulledIntoVehicle() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $inCaravan() const;
#else // @header-generator platform
    MCFOLD bool $inCaravan() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendMotionPacketIfNeeded();
#else // @header-generator platform
    MCAPI void $sendMotionPacketIfNeeded();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSynchronizeNewEntity() const;
#else // @header-generator platform
    MCFOLD bool $canSynchronizeNewEntity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startSwimming();
#else // @header-generator platform
    MCAPI void $startSwimming();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopSwimming();
#else // @header-generator platform
    MCAPI void $stopSwimming();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $buildDebugInfo(std::string&) const;
#else // @header-generator platform
    MCFOLD void $buildDebugInfo(::std::string& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;
#else // @header-generator platform
    MCAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDeathTime() const;
#else // @header-generator platform
    MCFOLD int $getDeathTime() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeAffected(uint) const;
#else // @header-generator platform
    MCAPI bool $canBeAffected(uint id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeAffectedByArrow(::MobEffectInstance const&) const;
#else // @header-generator platform
    MCAPI bool $canBeAffectedByArrow(::MobEffectInstance const& effect) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onEffectRemoved(::MobEffectInstance&);
#else // @header-generator platform
    MCAPI void $onEffectRemoved(::MobEffectInstance& effect);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canObstructSpawningAndBlockPlacement() const;
#else // @header-generator platform
    MCAPI bool $canObstructSpawningAndBlockPlacement() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AnimationComponent& $getAnimationComponent();
#else // @header-generator platform
    MCAPI ::AnimationComponent& $getAnimationComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $openContainerComponent(::Player&);
#else // @header-generator platform
    MCAPI void $openContainerComponent(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $swing(::ActorSwingSource);
#else // @header-generator platform
    MCFOLD bool $swing(::ActorSwingSource swingSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $useItem(::ItemStackBase&, ::ItemUseMethod, bool);
#else // @header-generator platform
    MCAPI void $useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $getDebugText(std::vector<std::string>&);
#else // @header-generator platform
    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getMapDecorationRotation() const;
#else // @header-generator platform
    MCAPI float $getMapDecorationRotation() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getPassengerYRotation(::Actor const&) const;
#else // @header-generator platform
    MCAPI float $getPassengerYRotation(::Actor const& passenger) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $add(::ItemStack&);
#else // @header-generator platform
    MCAPI bool $add(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $drop(::ItemStack const&, bool const);
#else // @header-generator platform
    MCAPI bool $drop(::ItemStack const& item, bool const randomly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult $getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI ::InteractionResult
    $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canDestroyBlock(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $canDestroyBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setAuxValue(int);
#else // @header-generator platform
    MCFOLD void $setAuxValue(int aux);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $renderDebugServerState(::IOptionsReader const&);
#else // @header-generator platform
    MCFOLD void $renderDebugServerState(::IOptionsReader const& options);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $kill();
#else // @header-generator platform
    MCAPI void $kill();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $die(::ActorDamageSource const&);
#else // @header-generator platform
    MCAPI void $die(::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldDropDeathLoot() const;
#else // @header-generator platform
    MCAPI bool $shouldDropDeathLoot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applySnapshot(::EntityContext const&, ::MovementDataExtractionUtility::SnapshotAccessor const&);
#else // @header-generator platform
    MCAPI void $applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPush(::Actor&);
#else // @header-generator platform
    MCFOLD void $onPush(::Actor& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $getLastDeathPos() const;
#else // @header-generator platform
    MCFOLD ::std::optional<::BlockPos> $getLastDeathPos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<DimensionType> $getLastDeathDimension() const;
#else // @header-generator platform
    MCFOLD ::std::optional<::DimensionType> $getLastDeathDimension() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasDiedBefore() const;
#else // @header-generator platform
    MCFOLD bool $hasDiedBefore() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doEnterWaterSplashEffect();
#else // @header-generator platform
    MCFOLD void $doEnterWaterSplashEffect();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doExitWaterSplashEffect();
#else // @header-generator platform
    MCFOLD void $doExitWaterSplashEffect();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doWaterSplashEffect();
#else // @header-generator platform
    MCAPI void $doWaterSplashEffect();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot, ::ItemStack const&) const;
#else // @header-generator platform
    MCAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&) const;
#else // @header-generator platform
    MCAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
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
