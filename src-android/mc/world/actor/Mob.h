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
class ActorDefinitionGroup;
class ActorHurtResult;
class BaseAttributeMap;
class Block;
class BodyControl;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class GoalSelectorComponent;
class HashedString;
class ILevel;
class IOptionsReader;
class ItemStack;
class ListTag;
class Player;
class SaveContext;
class SynchedActorDataWriter;
class Vec3;
struct ActorDefinitionIdentifier;
struct CalculateAttackDamageSettings;
struct Description;
struct DimensionType;
struct HurtEffectsSettings;
struct HurtParameters;
struct InterpolationPair;
struct JumpPreventionResult;
struct KnockbackParameters;
struct LegacyGoalDefinition;
struct PushableByEntityComponent;
struct VariantParameterList;
namespace mce { class UUID; }
// clang-format on

class Mob : public ::Actor {
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
    virtual ~Mob();

    virtual void outOfWorld();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void _doInitialMove();

    virtual bool hasComponent(::HashedString const&) const;

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

    virtual void spawnAnim();

    virtual void setSprinting(bool);

    virtual float getSpeed() const;

    virtual void setSpeed(float);

    virtual void hurtEffects(::ActorDamageSource const&, float, ::HurtEffectsSettings const&);

    virtual void damageCarriedItemOnAttack(::Actor&, float);

    virtual void aiStep();

    virtual void pushActors();

    virtual bool checkSpawnRules(bool);

    virtual bool checkSpawnObstruction() const;

    virtual int getItemUseDuration() const;

    virtual float getItemUseStartupProgress() const;

    virtual float getItemUseIntervalProgress() const;

    virtual float getMaxHeadXRot();

    virtual bool isAlliedTo(::Mob*);

    virtual ::ActorHurtResult doHurtTarget(::Actor*, ::SharedTypes::Legacy::ActorDamageCause const&);

    virtual int getArmorValue() const;

    virtual void hurtArmorSlots(::ActorDamageSource const&, int, std::bitset<5> const);

    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    virtual void sendArmorDamage(std::bitset<5> const);

    virtual void sendArmor(std::bitset<5> const);

    virtual std::vector<const ItemStack*> getAllHandEquipment() const;

    virtual std::vector<const ItemStack*> getAllEquipment() const;

    virtual void dropEquipmentOnDeath();

    virtual void dropEquipmentOnDeath(::ActorDamageSource const&);

    virtual void clearVanishEnchantedItemsOnDeath();

    virtual void sendInventory(bool);

    virtual float getDamageAfterEnchantReduction(::ActorDamageSource const&, float) const;

    virtual bool createAIGoals();

    virtual void onBorn(::Actor&, ::Actor&);

    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    virtual void setTransitioningSitting(bool);

    virtual float _getWalkTargetValue(::BlockPos const&);

    virtual bool canExistWhenDisallowMob() const;

    virtual std::unique_ptr<BodyControl> initBodyControl();

    virtual void newServerAiStep();

    virtual ::AABB _getAdjustedAABBForSpawnCheck(::AABB const&, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Mob(::ILevel&, ::EntityContext&);

    MCNAPI Mob(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI ::BuiltInMobComponents _addBuiltInMobComponents();

    MCNAPI void _doSprintParticleEffect();

    MCNAPI bool _initHardCodedComponents(bool);

    MCNAPI void _initialize(::EntityContext&, bool);

    MCNAPI bool _isDoingMaceSmashAttack() const;

    MCNAPI void _logMobComponentInitializationError(std::string const&, std::string const&, char const*);

    MCNAPI void _processSoulSpeed();

    MCNAPI void addSpeedModifier(::mce::UUID const&, std::string const&, float);

    MCNAPI float calcMoveRelativeSpeed(::TravelType);

    MCNAPI float calculateAttackDamage(::Actor const&, ::CalculateAttackDamageSettings const&) const;

    MCNAPI bool canSwing() const;

    MCNAPI bool checkForPostHitDamageImmunity(float, ::ActorDamageSource const&);

    MCNAPI std::optional<float> checkTotemDeathProtection(::ActorDamageSource const&);

    MCNAPI void clearMainHandSlot();

    MCNAPI void containerChanged(int);

    MCNAPI void createAI(std::vector<LegacyGoalDefinition>);

    MCNAPI void dropContainer();

    MCNAPI void emitJumpPreventedEvent(::BlockPos const&);

    MCNAPI void frostWalk();

    MCNAPI std::vector<int> getAllArmorID() const;

    MCNAPI float getArmorCoverPercentage() const;

    MCNAPI int getArmorTypeHash();

    MCNAPI float getAttackAnim(float);

    MCNAPI int getBaseSwingDuration() const;

    MCNAPI ::BlockPos getBoundOrigin() const;

    MCNAPI ::ActorUniqueID getCaravanHead() const;

    MCNAPI int getCarriedItemKnockbackBonus() const;

    MCNAPI float getDamageAfterArmorReduction(::ActorDamageSource const&, float) const;

    MCNAPI float getDamageAfterDamageSensorComponentAdjustments(::ActorDamageSource const&, float);

    MCNAPI float getDamageAfterPostHitDamageImmunityReduction(::ActorDamageSource const&, float) const;

    MCNAPI float getDamageAfterResistanceEffect(::ActorDamageSource const&, float) const;

    MCNAPI ::SharedTypes::Legacy::ActorDamageCause getDamageCause() const;

    MCNAPI int getEatCounter() const;

    MCNAPI float getExpectedFallDamage(float, float) const;

    MCNAPI int getGlidingTicks() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent getHurtSound(::SharedTypes::Legacy::ActorDamageCause) const;

    MCNAPI int getItemIconAnimationFrame(::ItemStack const&);

    MCNAPI ::ItemStack const& getItemSlot(::SharedTypes::Legacy::EquipmentSlot) const;

    MCNAPI int getItemUseIntervalAxis() const;

    MCNAPI float getJumpEffectAmplifierValue();

    MCNAPI float getJumpMultiplier();

    MCNAPI ::JumpPreventionResult getJumpPrevention();

    MCNAPI int getModifiedSwingDuration() const;

    MCNAPI float getMovementComponentCurrentSpeed() const;

    MCNAPI int getNoActionTime() const;

    MCNAPI float getPassengerLockedBodyRot() const;

    MCNAPI float getPassengerRotLimit() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent getSpawnSound() const;

    MCNAPI float getSwimSpeedMultiplier() const;

    MCNAPI ::ActorUniqueID getTargetCaptain() const;

    MCNAPI int getToughnessValue() const;

    MCNAPI ::TravelType getTravelType();

    MCNAPI float getYBodyRotation() const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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

    MCNAPI void $_doInitialMove();

    MCNAPI bool $hasComponent(::HashedString const&) const;

    MCNAPI float $getInterpolatedBodyRot(float) const;

    MCNAPI float $getInterpolatedHeadRot(float) const;

    MCNAPI float $getInterpolatedBodyYaw(float) const;

    MCNAPI float $getYawSpeedInDegreesPerSecond() const;

    MCNAPI void $blockedByShield(::ActorDamageSource const&, ::Actor&);

    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);

    MCNAPI void $normalTick();

    MCNAPI void $baseTick();

    MCNAPI bool $startRiding(::Actor&, bool);

    MCNAPI void $addPassenger(::Actor&);

    MCNAPI bool $isImmobile() const;

    MCNAPI bool $isSleeping() const;

    MCNAPI void $setSleeping(bool);

    MCNAPI bool $isBlocking() const;

    MCNAPI bool $isAlive() const;

    MCNAPI bool $isSurfaceMob() const;

    MCNAPI void $setTarget(::Actor*);

    MCNAPI ::ActorHurtResult $attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);

    MCNAPI bool $canPowerJump() const;

    MCNAPI ::SharedTypes::Legacy::ActorDamageCause $getBlockDamageCause(::Block const&) const;

    MCNAPI ::ActorHurtResult $doFireHurt(int);

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    MCNAPI int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    MCNAPI float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const;

    MCNAPI void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    MCNAPI bool $canFreeze() const;

    MCNAPI bool $canChangeDimensionsUsingPortal() const;

    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI bool $inCaravan() const;

    MCNAPI void $buildDebugInfo(std::string&) const;

    MCNAPI int $getDeathTime() const;

    MCNAPI bool $swing(::ActorSwingSource);

    MCNAPI void $renderDebugServerState(::IOptionsReader const&);

    MCNAPI void $kill();

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI bool $shouldDropDeathLoot() const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void $knockback(::Actor*, float, float, float, ::KnockbackParameters const&);

    MCNAPI void $spawnAnim();

    MCNAPI void $setSprinting(bool);

    MCNAPI float $getSpeed() const;

    MCNAPI void $setSpeed(float);

    MCNAPI void $hurtEffects(::ActorDamageSource const&, float, ::HurtEffectsSettings const&);

    MCNAPI void $damageCarriedItemOnAttack(::Actor&, float);

    MCNAPI void $aiStep();

    MCNAPI void $pushActors();

    MCNAPI bool $checkSpawnRules(bool);

    MCNAPI bool $checkSpawnObstruction() const;

    MCNAPI int $getItemUseDuration() const;

    MCNAPI float $getItemUseStartupProgress() const;

    MCNAPI float $getItemUseIntervalProgress() const;

    MCNAPI float $getMaxHeadXRot();

    MCNAPI bool $isAlliedTo(::Mob*);

    MCNAPI ::ActorHurtResult $doHurtTarget(::Actor*, ::SharedTypes::Legacy::ActorDamageCause const&);

    MCNAPI int $getArmorValue() const;

    MCNAPI void $hurtArmorSlots(::ActorDamageSource const&, int, std::bitset<5> const);

    MCNAPI void $setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    MCNAPI void $sendArmorDamage(std::bitset<5> const);

    MCNAPI void $sendArmor(std::bitset<5> const);

    MCNAPI std::vector<const ItemStack*> $getAllHandEquipment() const;

    MCNAPI std::vector<const ItemStack*> $getAllEquipment() const;

    MCNAPI void $dropEquipmentOnDeath();

    MCNAPI void $dropEquipmentOnDeath(::ActorDamageSource const&);

    MCNAPI void $clearVanishEnchantedItemsOnDeath();

    MCNAPI void $sendInventory(bool);

    MCNAPI float $getDamageAfterEnchantReduction(::ActorDamageSource const&, float) const;

    MCNAPI bool $createAIGoals();

    MCNAPI void $onBorn(::Actor&, ::Actor&);

    MCNAPI bool $setItemSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    MCNAPI void $setTransitioningSitting(bool);

    MCNAPI float $_getWalkTargetValue(::BlockPos const&);

    MCNAPI bool $canExistWhenDisallowMob() const;

    MCNAPI std::unique_ptr<BodyControl> $initBodyControl();

    MCNAPI void $newServerAiStep();

    MCNAPI ::AABB $_getAdjustedAABBForSpawnCheck(::AABB const&, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
