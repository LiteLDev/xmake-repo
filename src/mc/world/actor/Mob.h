#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/BuiltInMobComponents.h"
#include "mc/world/actor/MobSpawnMethod.h"
#include "mc/world/actor/TravelType.h"
#include "mc/world/item/ClockSpriteCalculator.h"
#include "mc/world/item/CompassSpriteCalculator.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorDamageSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorDefinitionGroup;
#else // @header-generator platform
#endif // @header-generator platform
class ActorHurtResult;
class BaseAttributeMap;
class Block;
class BodyControl;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class GoalSelectorComponent;
#else // @header-generator platform
#endif // @header-generator platform
class HashedString;
class ILevel;
#if defined(LL_PLAT_A) // @header-generator platform
class IOptionsReader;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class ListTag;
class Player;
class SaveContext;
class SynchedActorDataWriter;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDefinitionIdentifier;
#else // @header-generator platform
#endif // @header-generator platform
struct CalculateAttackDamageSettings;
#if defined(LL_PLAT_A) // @header-generator platform
struct Description;
#else // @header-generator platform
#endif // @header-generator platform
struct DimensionType;
struct HurtEffectsSettings;
struct HurtParameters;
struct InterpolationPair;
struct JumpPreventionResult;
struct KnockbackParameters;
struct LegacyGoalDefinition;
#if defined(LL_PLAT_A) // @header-generator platform
struct PushableByEntityComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct VariantParameterList;
namespace mce { class UUID; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class IOptionsReader;
#endif // @header-generator platform
// clang-format on

class Mob : public ::Actor {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
public:
    LLAPI void refreshInventory();

    LLAPI static ::Mob* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

    LLNDAPI ItemStack const& getItemSlot(::SharedTypes::Legacy::EquipmentSlot slot) const;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                      mHurtDir;
    ::ll::TypedStorage<4, 4, float>                      mOTilt;
    ::ll::TypedStorage<4, 4, float>                      mTilt;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mCompassSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mRecoveryCompassSpriteCalc;
    ::ll::TypedStorage<4, 12, ::ClockSpriteCalculator>   mClockSpriteCalc;
    ::ll::TypedStorage<4, 4, float>                      mAttackAnim;
    ::ll::TypedStorage<4, 4, int>                        mSwingTime;
    ::ll::TypedStorage<8, 24, ::BuiltInMobComponents>    mBuiltInMobComponents;
    ::ll::TypedStorage<4, 4, float>                      mMovementComponentCurrentSpeed;
    ::ll::TypedStorage<1, 1, bool>                       mSwinging;
    ::ll::TypedStorage<1, 1, bool>                       mSurfaceMob;
    ::ll::TypedStorage<1, 1, bool>                       mNaturallySpawned;
    ::ll::TypedStorage<1, 1, bool>                       mWantsToBeJockey;
    ::ll::TypedStorage<1, 1, bool>                       mHasBoundOrigin;
    ::ll::TypedStorage<1, 1, ::MobSpawnMethod>           mSpawnMethod;
    ::ll::TypedStorage<1, 1, bool>                       mCreateAiOnReload;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mCaravanHead;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mCaravanTail;
    ::ll::TypedStorage<4, 4, float>                      mOAttackAnim;
    ::ll::TypedStorage<4, 12, ::BlockPos>                mBoundOrigin;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mTargetCaptainId;
    // NOLINTEND

public:
    // prevent constructor by default
    Mob();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Mob();
#else // @header-generator platform
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void outOfWorld();
#else // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    virtual ~Mob() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void knockback(::Actor* source, float damage, float xd, float zd, ::KnockbackParameters const& parameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _doInitialMove();
#else // @header-generator platform
    virtual void kill() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasComponent(::HashedString const&) const;
#else // @header-generator platform
    virtual void die(::ActorDamageSource const& source) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getInterpolatedBodyRot(float) const;

    virtual float getInterpolatedHeadRot(float) const;

    virtual float getInterpolatedBodyYaw(float) const;

    virtual float getYawSpeedInDegreesPerSecond() const;

    virtual void blockedByShield(::ActorDamageSource const&, ::Actor&);

    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);

    virtual void normalTick();

    virtual void baseTick();

    virtual bool startRiding(::Actor&, bool);

    virtual void addPassenger(::Actor&);

    virtual bool isImmobile() const;

    virtual bool isSleeping() const;

    virtual void setSleeping(bool);

    virtual bool isBlocking() const;

    virtual bool isAlive() const;

    virtual bool isSurfaceMob() const;

    virtual void setTarget(::Actor*);

    virtual ::ActorHurtResult attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);

    virtual bool canPowerJump() const;

    virtual ::SharedTypes::Legacy::ActorDamageCause getBlockDamageCause(::Block const&) const;

    virtual ::ActorHurtResult doFireHurt(int);

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    virtual int getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    virtual float getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const;

    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    virtual bool canFreeze() const;

    virtual bool canChangeDimensionsUsingPortal() const;

    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);

    virtual bool canBePulledIntoVehicle() const;

    virtual bool inCaravan() const;

    virtual void buildDebugInfo(std::string&) const;

    virtual int getDeathTime() const;

    virtual bool swing(::ActorSwingSource);

    virtual void renderDebugServerState(::IOptionsReader const&);

    virtual void kill();

    virtual void die(::ActorDamageSource const&);

    virtual bool shouldDropDeathLoot() const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual void knockback(::Actor*, float, float, float, ::KnockbackParameters const&);
#else // @header-generator platform
    virtual bool shouldDropDeathLoot() const /*override*/;
#endif // @header-generator platform

    virtual void spawnAnim();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSprinting(bool);
#else // @header-generator platform
    virtual bool isAlive() const /*override*/;

    virtual bool isSleeping() const /*override*/;

    virtual void setSleeping(bool val) /*override*/;

    virtual bool isBlocking() const /*override*/;

    virtual void setSprinting(bool shouldSprint);

    virtual bool canBePulledIntoVehicle() const /*override*/;
#endif // @header-generator platform

    virtual float getSpeed() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSpeed(float);
#else // @header-generator platform
    virtual void setSpeed(float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hurtEffects(::ActorDamageSource const&, float, ::HurtEffectsSettings const&);
#else // @header-generator platform
    virtual float getYawSpeedInDegreesPerSecond() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void damageCarriedItemOnAttack(::Actor&, float);
#else // @header-generator platform
    virtual void normalTick() /*override*/;

    virtual void baseTick() /*override*/;

    virtual void hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings);

    virtual void damageCarriedItemOnAttack(::Actor& target, float damageDealtToTarget);

    virtual ::ActorHurtResult doFireHurt(int amount) /*override*/;
#endif // @header-generator platform

    virtual void aiStep();

    virtual void pushActors();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkSpawnRules(bool);
#else // @header-generator platform
    virtual bool checkSpawnRules(bool fromSpawner);
#endif // @header-generator platform

    virtual bool checkSpawnObstruction() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual void addPassenger(::Actor& newPassenger) /*override*/;

    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;
#endif // @header-generator platform

    virtual int getItemUseDuration() const;

    virtual float getItemUseStartupProgress() const;

    virtual float getItemUseIntervalProgress() const;

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual bool swing(::ActorSwingSource swingSource) /*override*/;

#endif // @header-generator platform
    virtual float getMaxHeadXRot();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isAlliedTo(::Mob*);
#else // @header-generator platform
    virtual bool isImmobile() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult doHurtTarget(::Actor*, ::SharedTypes::Legacy::ActorDamageCause const&);
#else // @header-generator platform
    virtual void blockedByShield(::ActorDamageSource const& source, ::Actor& blocker) /*override*/;

    virtual void setTarget(::Actor* target) /*override*/;

    virtual ::ActorHurtResult
    attack(::Actor& target, ::SharedTypes::Legacy::ActorDamageCause const& cause) /*override*/;

    virtual bool isAlliedTo(::Mob* other);

    virtual ::ActorHurtResult doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    virtual ::SharedTypes::Legacy::ActorDamageCause getBlockDamageCause(::Block const& block) const /*override*/;

    virtual bool inCaravan() const /*override*/;
#endif // @header-generator platform

    virtual int getArmorValue() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hurtArmorSlots(::ActorDamageSource const&, int, std::bitset<5> const);
#else // @header-generator platform
    virtual void hurtArmorSlots(::ActorDamageSource const& source, int damage, ::std::bitset<5> const hurtSlots);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);
#else // @header-generator platform
    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendArmorDamage(std::bitset<5> const);
#else // @header-generator platform
    virtual void sendArmorDamage(::std::bitset<5> const damagedSlots);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendArmor(std::bitset<5> const);
#else // @header-generator platform
    virtual void sendArmor(::std::bitset<5> const armorSlots);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<const ItemStack*> getAllHandEquipment() const;
#else // @header-generator platform
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<const ItemStack*> getAllEquipment() const;
#else // @header-generator platform
    virtual int getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot slot) const /*override*/;

    virtual float getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot slot, int channelRGBA) const /*override*/;

    virtual ::std::vector<::ItemStack const*> getAllHandEquipment() const;

    virtual ::std::vector<::ItemStack const*> getAllEquipment() const;

    virtual int getDeathTime() const /*override*/;

    virtual void dropEquipmentOnDeath(::ActorDamageSource const& source);
#endif // @header-generator platform

    virtual void dropEquipmentOnDeath();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dropEquipmentOnDeath(::ActorDamageSource const&);

#else // @header-generator platform
#endif // @header-generator platform
    virtual void clearVanishEnchantedItemsOnDeath();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendInventory(bool);
#else // @header-generator platform
    virtual void sendInventory(bool shouldSelectSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getDamageAfterEnchantReduction(::ActorDamageSource const&, float) const;
#else // @header-generator platform
    virtual void buildDebugInfo(::std::string& out) const /*override*/;

    virtual float getInterpolatedBodyRot(float a) const /*override*/;

    virtual float getInterpolatedHeadRot(float a) const /*override*/;

    virtual float getInterpolatedBodyYaw(float a) const /*override*/;

    virtual bool isSurfaceMob() const /*override*/;

    virtual float getDamageAfterEnchantReduction(::ActorDamageSource const& source, float damage) const;
#endif // @header-generator platform

    virtual bool createAIGoals();

    virtual void onBorn(::Actor&, ::Actor&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);
#else // @header-generator platform
    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTransitioningSitting(bool);
#else // @header-generator platform
    virtual void setTransitioningSitting(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float _getWalkTargetValue(::BlockPos const&);
#else // @header-generator platform
    virtual bool hasComponent(::HashedString const& name) const /*override*/;

    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos);
#endif // @header-generator platform

    virtual bool canExistWhenDisallowMob() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BodyControl> initBodyControl();
#else // @header-generator platform
    virtual bool canPowerJump() const /*override*/;

    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item) /*override*/;

    virtual void renderDebugServerState(::IOptionsReader const& options) /*override*/;

    virtual bool canFreeze() const /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ::std::unique_ptr<::BodyControl> initBodyControl();

    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    virtual void outOfWorld() /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
#endif // @header-generator platform

    virtual void newServerAiStep();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB _getAdjustedAABBForSpawnCheck(::AABB const&, ::Vec3 const&) const;
#else // @header-generator platform
    virtual void _doInitialMove() /*override*/;

    virtual ::AABB _getAdjustedAABBForSpawnCheck(::AABB const& aabb, ::Vec3 const& mobPos) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Mob(::ILevel&, ::EntityContext&);
#else // @header-generator platform
    MCAPI Mob(::ILevel& level, ::EntityContext& entityContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Mob(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI ::BuiltInMobComponents _addBuiltInMobComponents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BuiltInMobComponents _addBuiltInMobComponents();
#else // @header-generator platform
    MCAPI void _doSprintParticleEffect();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _doSprintParticleEffect();
#else // @header-generator platform
    MCAPI bool _initHardCodedComponents(bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _initHardCodedComponents(bool);
#else // @header-generator platform
    MCAPI void _initialize(::EntityContext& entityContext, bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initialize(::EntityContext&, bool);
#else // @header-generator platform
    MCAPI bool _isDoingMaceSmashAttack() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isDoingMaceSmashAttack() const;
#else // @header-generator platform
    MCAPI void _processSoulSpeed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _logMobComponentInitializationError(std::string const&, std::string const&, char const*);
#else // @header-generator platform
    MCAPI void
    addSpeedModifier(::mce::UUID const& attributeID, ::std::string const& attributeName, float speedModifier);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _processSoulSpeed();
#else // @header-generator platform
    MCAPI float calcMoveRelativeSpeed(::TravelType travelType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addSpeedModifier(::mce::UUID const&, std::string const&, float);
#else // @header-generator platform
    MCAPI float calculateAttackDamage(::Actor const& target, ::CalculateAttackDamageSettings const& settings) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float calcMoveRelativeSpeed(::TravelType);
#else // @header-generator platform
    MCAPI ::std::optional<float> checkTotemDeathProtection(::ActorDamageSource const& killingDamage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float calculateAttackDamage(::Actor const&, ::CalculateAttackDamageSettings const&) const;
#else // @header-generator platform
    MCAPI void clearMainHandSlot();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canSwing() const;
#else // @header-generator platform
    MCAPI void containerChanged(int iSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool checkForPostHitDamageImmunity(float, ::ActorDamageSource const&);
#else // @header-generator platform
    MCAPI void createAI(::std::vector<::LegacyGoalDefinition> goals);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<float> checkTotemDeathProtection(::ActorDamageSource const&);
#else // @header-generator platform
    MCAPI void dropContainer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearMainHandSlot();
#else // @header-generator platform
    MCAPI void emitJumpPreventedEvent(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void containerChanged(int);
#else // @header-generator platform
    MCAPI void frostWalk();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void createAI(std::vector<LegacyGoalDefinition>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::vector<int> getAllArmorID() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void dropContainer();
#else // @header-generator platform
    MCAPI int getArmorTypeHash();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void emitJumpPreventedEvent(::BlockPos const&);
#else // @header-generator platform
    MCAPI int getCarriedItemKnockbackBonus() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void frostWalk();
#else // @header-generator platform
    MCAPI float getDamageAfterArmorReduction(::ActorDamageSource const& source, float damage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<int> getAllArmorID() const;
#else // @header-generator platform
    MCAPI float getDamageAfterDamageSensorComponentAdjustments(::ActorDamageSource const& source, float damage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getArmorCoverPercentage() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent getHurtSound(::SharedTypes::Legacy::ActorDamageCause cause) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getArmorTypeHash();
#else // @header-generator platform
    MCAPI float getJumpEffectAmplifierValue();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getAttackAnim(float);
#else // @header-generator platform
    MCAPI float getJumpMultiplier();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getBaseSwingDuration() const;
#else // @header-generator platform
    MCAPI ::JumpPreventionResult getJumpPrevention();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos getBoundOrigin() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI int getJumpTicks() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID getCaravanHead() const;
#else // @header-generator platform
    MCAPI int getModifiedSwingDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getCarriedItemKnockbackBonus() const;
#else // @header-generator platform
    MCAPI int getNoActionTime() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getDamageAfterArmorReduction(::ActorDamageSource const&, float) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI float getPassengerLockedBodyRot() const;

    MCAPI float getPassengerRotLimit() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getDamageAfterDamageSensorComponentAdjustments(::ActorDamageSource const&, float);
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent getSpawnSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getDamageAfterPostHitDamageImmunityReduction(::ActorDamageSource const&, float) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI float getSwimSpeedMultiplier() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getDamageAfterResistanceEffect(::ActorDamageSource const&, float) const;
#else // @header-generator platform
    MCAPI int getToughnessValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ActorDamageCause getDamageCause() const;
#else // @header-generator platform
    MCAPI ::TravelType getTravelType();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getEatCounter() const;
#else // @header-generator platform
    MCAPI float getYBodyRotation() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getExpectedFallDamage(float, float) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::InterpolationPair getYBodyRotationsNewOld() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getGlidingTicks() const;
#else // @header-generator platform
    MCAPI void hurtArmor(::ActorDamageSource const& source, int damage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent getHurtSound(::SharedTypes::Legacy::ActorDamageCause) const;
#else // @header-generator platform
    MCAPI bool isAbleToMove() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getItemIconAnimationFrame(::ItemStack const&);
#else // @header-generator platform
    MCAPI bool isTransitioningSitting() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& getItemSlot(::SharedTypes::Legacy::EquipmentSlot) const;
#else // @header-generator platform
    MCAPI void joinCaravan(::Mob* head);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getItemUseIntervalAxis() const;
#else // @header-generator platform
    MCAPI void jumpFromGround();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getJumpEffectAmplifierValue();
#else // @header-generator platform
    MCAPI void leaveCaravan();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getJumpMultiplier();
#else // @header-generator platform
    MCAPI void lookAt(::Actor* lookAt, float yMax, float xMax);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::JumpPreventionResult getJumpPrevention();
#else // @header-generator platform
    MCAPI void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getModifiedSwingDuration() const;
#else // @header-generator platform
    MCAPI void removeSpeedModifier(::mce::UUID const& attributeID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getMovementComponentCurrentSpeed() const;
#else // @header-generator platform
    MCAPI void resetAttributes();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getNoActionTime() const;
#else // @header-generator platform
    MCAPI void resetNoActionTime();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getPassengerLockedBodyRot() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ListTag> saveOffhand(::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getPassengerRotLimit() const;
#else // @header-generator platform
    MCAPI void setJumpTicks(int ticks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent getSpawnSound() const;
#else // @header-generator platform
    MCAPI void setSpeedModifier(float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getSwimSpeedMultiplier() const;
#else // @header-generator platform
    MCAPI void setYBodyRotation(float rotation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID getTargetCaptain() const;
#else // @header-generator platform
    MCAPI void setYBodyRotations(float rotation, float oldRotation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getToughnessValue() const;
#else // @header-generator platform
    MCAPI bool shouldApplyWaterGravity();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TravelType getTravelType();
#else // @header-generator platform
    MCAPI void snapToYBodyRot(float yBodyRot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getYBodyRotation() const;
#else // @header-generator platform
    MCAPI void updateEquipment();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InterpolationPair getYBodyRotationsNewOld() const;

    MCNAPI bool hasBoundOrigin() const;

    MCNAPI bool hasCaravanTail() const;

    MCNAPI void hurtArmor(::ActorDamageSource const&, int);

    MCNAPI bool isAbleToMove() const;

    MCNAPI bool isEating() const;

    MCNAPI bool isGliding() const;

    MCNAPI bool isLayingEgg() const;

    MCNAPI bool isPregnant() const;

    MCNAPI bool isSprinting() const;

    MCNAPI bool isTransitioningSitting() const;

    MCNAPI void joinCaravan(::Mob*);

    MCNAPI void jumpFromGround();

    MCNAPI void leaveCaravan();

    MCNAPI void lookAt(::Actor*, float, float);

    MCNAPI void onPlayerDimensionChanged(::Player*, ::DimensionType, ::DimensionType);

    MCNAPI void removeSpeedModifier(::mce::UUID const&);

    MCNAPI void resetAttributes();

    MCNAPI void resetNoActionTime();

    MCNAPI std::unique_ptr<ListTag> saveOffhand(::SaveContext const&) const;

    MCNAPI void sendArmorDamageSlot(::SharedTypes::Legacy::ArmorSlot);

    MCNAPI void sendArmorSlot(::SharedTypes::Legacy::ArmorSlot);

    MCNAPI void setDeathTime(int);

    MCNAPI void setEatCounter(int);

    MCNAPI void setEating(bool);

    MCNAPI void setIsLayingEgg(bool);

    MCNAPI void setIsPregnant(bool);

    MCNAPI void setJumpTicks(int);

    MCNAPI void setMovementComponentCurrentSpeed(float);

    MCNAPI void setNaturallySpawned(bool);

    MCNAPI void setSpawnMethod(::MobSpawnMethod const);

    MCNAPI void setSpeedModifier(float);

    MCNAPI void setSurfaceMob(bool);

    MCNAPI void setTargetCaptain(::ActorUniqueID);

    MCNAPI void setYBodyRotation(float);

    MCNAPI void setYBodyRotations(float, float);

    MCNAPI bool shouldApplyWaterGravity();

    MCNAPI void snapToYBodyRot(float);

    MCNAPI void snapToYHeadRot(float);

    MCNAPI void tryFrostWalk();

    MCNAPI void tryProcessSoulSpeed();

    MCNAPI void tryUpdateAI();

    MCNAPI void updateAttackAnim();

    MCNAPI void updateEquipment();

    MCNAPI void updateGlidingDurability();
#else // @header-generator platform
    MCAPI void updateGlidingDurability();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const* _getDescriptionJsonName(::Description const*);

    MCNAPI static void setSprinting(::BaseAttributeMap&, ::SynchedActorDataWriter, bool);

    MCNAPI static ::Mob* tryGetFromEntity(::EntityContext&, bool const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& ARMOR_DAMAGE_DIVISOR();

    MCNAPI static float const& ASCEND_BLOCK_BY_JUMPING_SPEED();

    MCNAPI static float const& GLIDING_FALL_RESET_DELTA();

    MCNAPI static int const& MAX_INACTIVITY_TIMER();

    MCNAPI static float const& PLAYER_SWIMMING_SURFACE_OFFSET();

    MCNAPI static int const& REMOVE_PASSENGERS_DELAY();

    MCNAPI static int const& SPAWN_XP_DELAY();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void setSprinting(::BaseAttributeMap& attributes, ::SynchedActorDataWriter data, bool shouldSprint);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ILevel&, ::EntityContext&);

    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI void* $ctor(::ILevel& level, ::EntityContext& entityContext);
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
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $knockback(::Actor* source, float damage, float xd, float zd, ::KnockbackParameters const& parameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_doInitialMove();
#else // @header-generator platform
    MCAPI void $kill();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasComponent(::HashedString const&) const;
#else // @header-generator platform
    MCAPI void $die(::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getInterpolatedBodyRot(float) const;
#else // @header-generator platform
    MCAPI bool $shouldDropDeathLoot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getInterpolatedHeadRot(float) const;
#else // @header-generator platform
    MCFOLD void $spawnAnim();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getInterpolatedBodyYaw(float) const;
#else // @header-generator platform
    MCAPI bool $isAlive() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getYawSpeedInDegreesPerSecond() const;
#else // @header-generator platform
    MCAPI bool $isSleeping() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $blockedByShield(::ActorDamageSource const&, ::Actor&);
#else // @header-generator platform
    MCAPI void $setSleeping(bool val);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);
#else // @header-generator platform
    MCAPI bool $isBlocking() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $normalTick();
#else // @header-generator platform
    MCAPI void $setSprinting(bool shouldSprint);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $baseTick();
#else // @header-generator platform
    MCFOLD bool $canBePulledIntoVehicle() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $startRiding(::Actor&, bool);
#else // @header-generator platform
    MCAPI float $getSpeed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addPassenger(::Actor&);
#else // @header-generator platform
    MCAPI void $setSpeed(float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isImmobile() const;
#else // @header-generator platform
    MCAPI float $getYawSpeedInDegreesPerSecond() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSleeping() const;
#else // @header-generator platform
    MCAPI void $normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSleeping(bool);
#else // @header-generator platform
    MCAPI void $baseTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBlocking() const;
#else // @header-generator platform
    MCAPI void $hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isAlive() const;
#else // @header-generator platform
    MCAPI void $damageCarriedItemOnAttack(::Actor& target, float damageDealtToTarget);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSurfaceMob() const;
#else // @header-generator platform
    MCAPI ::ActorHurtResult $doFireHurt(int amount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setTarget(::Actor*);
#else // @header-generator platform
    MCAPI void $aiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);
#else // @header-generator platform
    MCAPI void $pushActors();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPowerJump() const;
#else // @header-generator platform
    MCAPI bool $checkSpawnRules(bool fromSpawner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ActorDamageCause $getBlockDamageCause(::Block const&) const;
#else // @header-generator platform
    MCAPI bool $checkSpawnObstruction() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $doFireHurt(int);
#else // @header-generator platform
    MCAPI void $addPassenger(::Actor& newPassenger);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const;
#else // @header-generator platform
    MCAPI void $handleEntityEvent(::ActorEvent id, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const;
#else // @header-generator platform
    MCFOLD int $getItemUseDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const;
#else // @header-generator platform
    MCFOLD float $getItemUseStartupProgress() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);
#else // @header-generator platform
    MCFOLD float $getItemUseIntervalProgress() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canFreeze() const;
#else // @header-generator platform
    MCAPI bool $swing(::ActorSwingSource swingSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canChangeDimensionsUsingPortal() const;
#else // @header-generator platform
    MCAPI float $getMaxHeadXRot();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);
#else // @header-generator platform
    MCAPI bool $isImmobile() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBePulledIntoVehicle() const;
#else // @header-generator platform
    MCAPI void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $inCaravan() const;
#else // @header-generator platform
    MCAPI void $setTarget(::Actor* target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $buildDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI ::ActorHurtResult $attack(::Actor& target, ::SharedTypes::Legacy::ActorDamageCause const& cause);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDeathTime() const;
#else // @header-generator platform
    MCFOLD bool $isAlliedTo(::Mob* other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $swing(::ActorSwingSource);
#else // @header-generator platform
    MCAPI ::ActorHurtResult $doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $renderDebugServerState(::IOptionsReader const&);
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::ActorDamageCause $getBlockDamageCause(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $kill();
#else // @header-generator platform
    MCAPI bool $inCaravan() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $die(::ActorDamageSource const&);
#else // @header-generator platform
    MCAPI int $getArmorValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldDropDeathLoot() const;
#else // @header-generator platform
    MCAPI void $hurtArmorSlots(::ActorDamageSource const& source, int damage, ::std::bitset<5> const hurtSlots);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI void $setDamagedArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCFOLD void $sendArmorDamage(::std::bitset<5> const damagedSlots);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void $sendArmor(::std::bitset<5> const armorSlots);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $knockback(::Actor*, float, float, float, ::KnockbackParameters const&);
#else // @header-generator platform
    MCAPI ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $spawnAnim();
#else // @header-generator platform
    MCAPI int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSprinting(bool);
#else // @header-generator platform
    MCAPI float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot slot, int channelRGBA) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getSpeed() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack const*> $getAllHandEquipment() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSpeed(float);
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack const*> $getAllEquipment() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hurtEffects(::ActorDamageSource const&, float, ::HurtEffectsSettings const&);
#else // @header-generator platform
    MCAPI int $getDeathTime() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $damageCarriedItemOnAttack(::Actor&, float);
#else // @header-generator platform
    MCAPI void $dropEquipmentOnDeath(::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $aiStep();
#else // @header-generator platform
    MCAPI void $dropEquipmentOnDeath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $pushActors();
#else // @header-generator platform
    MCAPI void $clearVanishEnchantedItemsOnDeath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkSpawnRules(bool);
#else // @header-generator platform
    MCAPI void $sendInventory(bool shouldSelectSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkSpawnObstruction() const;
#else // @header-generator platform
    MCAPI void $buildDebugInfo(::std::string& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getItemUseDuration() const;
#else // @header-generator platform
    MCAPI float $getInterpolatedBodyRot(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getItemUseStartupProgress() const;
#else // @header-generator platform
    MCAPI float $getInterpolatedHeadRot(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getItemUseIntervalProgress() const;
#else // @header-generator platform
    MCAPI float $getInterpolatedBodyYaw(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getMaxHeadXRot();
#else // @header-generator platform
    MCAPI bool $isSurfaceMob() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isAlliedTo(::Mob*);
#else // @header-generator platform
    MCAPI float $getDamageAfterEnchantReduction(::ActorDamageSource const& source, float damage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $doHurtTarget(::Actor*, ::SharedTypes::Legacy::ActorDamageCause const&);
#else // @header-generator platform
    MCAPI bool $createAIGoals();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getArmorValue() const;
#else // @header-generator platform
    MCFOLD void $onBorn(::Actor&, ::Actor&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hurtArmorSlots(::ActorDamageSource const&, int, std::bitset<5> const);
#else // @header-generator platform
    MCAPI bool $setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void $setTransitioningSitting(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendArmorDamage(std::bitset<5> const);
#else // @header-generator platform
    MCAPI bool $hasComponent(::HashedString const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendArmor(std::bitset<5> const);
#else // @header-generator platform
    MCAPI bool $canChangeDimensionsUsingPortal() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<const ItemStack*> $getAllHandEquipment() const;
#else // @header-generator platform
    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<const ItemStack*> $getAllEquipment() const;
#else // @header-generator platform
    MCFOLD float $_getWalkTargetValue(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dropEquipmentOnDeath();
#else // @header-generator platform
    MCAPI bool $canExistWhenDisallowMob() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dropEquipmentOnDeath(::ActorDamageSource const&);
#else // @header-generator platform
    MCAPI bool $canPowerJump() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearVanishEnchantedItemsOnDeath();
#else // @header-generator platform
    MCAPI void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendInventory(bool);
#else // @header-generator platform
    MCFOLD void $renderDebugServerState(::IOptionsReader const& options);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getDamageAfterEnchantReduction(::ActorDamageSource const&, float) const;
#else // @header-generator platform
    MCAPI bool $canFreeze() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $createAIGoals();
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBorn(::Actor&, ::Actor&);
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $setItemSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setTransitioningSitting(bool);
#else // @header-generator platform
    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $_getWalkTargetValue(::BlockPos const&);
#else // @header-generator platform
    MCAPI void $outOfWorld();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canExistWhenDisallowMob() const;
#else // @header-generator platform
    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BodyControl> $initBodyControl();
#else // @header-generator platform
    MCAPI void $newServerAiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $newServerAiStep();
#else // @header-generator platform
    MCAPI void $_doInitialMove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB $_getAdjustedAABBForSpawnCheck(::AABB const&, ::Vec3 const&) const;
#else // @header-generator platform
    MCAPI ::AABB $_getAdjustedAABBForSpawnCheck(::AABB const& aabb, ::Vec3 const& mobPos) const;


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
