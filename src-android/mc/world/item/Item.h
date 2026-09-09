#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/deps/shared_types/item/ItemCooldownType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/interactions/mining/MineBlockItemEffectType.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemAcquisitionMethod.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemCommandVisibility.h"
#include "mc/world/item/ItemTag.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/Rarity.h"
#include "mc/world/item/registry/ItemVersion.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class CameraItemComponentLegacy;
class CompoundTag;
class Container;
class Experiments;
class FoodItemComponentLegacy;
class ICameraItemComponent;
class IDataInput;
class IDataOutput;
class IFoodItemComponent;
class ILevel;
class InteractionResult;
class ItemComponent;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
class ReadOnlyBinaryStream;
class RenderParams;
class SeedItemComponentLegacy;
class SemVersion;
class SemVersionConstant;
class Vec3;
struct ActorDefinitionIdentifier;
struct Brightness;
struct CommandName;
struct ItemIconInfo;
struct ItemTintStrategy;
struct ItemUsedOnEventContext;
struct LegacyEventItemComponentData;
struct NewBlockID;
struct ResolvedItemIconInfo;
struct SoundEventIdentifier;
namespace Bedrock::Safety { class RedactableString; }
namespace SharedTypes::v1_26_30 { struct ItemDocument; }
namespace mce { class Color; }
// clang-format on

class Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemVersion>                                   mItemParseVersion;
    ::ll::TypedStorage<8, 24, std::string>                                    mTextureAtlasFile;
    ::ll::TypedStorage<4, 4, int>                                             mFrameCount;
    ::ll::TypedStorage<1, 1, bool>                                            mAnimatesInToolbar;
    ::ll::TypedStorage<1, 1, bool>                                            mIsMirroredArt;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::UseAnimation>             mUseAnim;
    ::ll::TypedStorage<8, 24, std::string>                                    mHoverTextColorFormat;
    ::ll::TypedStorage<4, 4, int>                                             mIconFrame;
    ::ll::TypedStorage<4, 4, int>                                             mAtlasFrame;
    ::ll::TypedStorage<4, 4, int>                                             mAtlasTotalFrames;
    ::ll::TypedStorage<8, 24, std::string>                                    mIconName;
    ::ll::TypedStorage<8, 24, std::string>                                    mAtlasName;
    ::ll::TypedStorage<1, 1, uchar>                                           mMaxStackSize;
    ::ll::TypedStorage<2, 2, short>                                           mId;
    ::ll::TypedStorage<8, 24, std::string>                                    mDescriptionId;
    ::ll::TypedStorage<8, 40, ::HashedString>                                 mRawNameId;
    ::ll::TypedStorage<8, 24, std::string>                                    mNamespace;
    ::ll::TypedStorage<8, 40, ::HashedString>                                 mFullName;
    ::ll::TypedStorage<2, 2, short>                                           mMaxDamage;
    bool                                                                      mIsGlint              : 1;
    bool                                                                      mHandEquipped         : 1;
    bool                                                                      mIsStackedByData      : 1;
    bool                                                                      mRequiresWorldBuilder : 1;
    bool                                                                      mExplodable           : 1;
    bool                                                                      mFireResistant        : 1;
    bool                                                                      mShouldDespawn        : 1;
    bool                                                                      mAllowOffhand         : 1;
    bool                                                                      mIgnoresPermissions   : 1;
    ::ll::TypedStorage<4, 4, int>                                             mMaxUseDuration;
    ::ll::UntypedStorage<8, 32>                                               mMinRequiredBaseGameVersion;
    ::ll::UntypedStorage<8, 8>                                                mBlockType;
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory>             mCreativeCategory;
    ::ll::TypedStorage<8, 8, ::Item*>                                         mCraftingRemainingItem;
    ::ll::TypedStorage<8, 24, std::string>                                    mCreativeGroup;
    ::ll::TypedStorage<4, 4, float>                                           mFurnaceBurnIntervalModifier;
    ::ll::TypedStorage<4, 4, float>                                           mFurnaceXPmultiplier;
    ::ll::TypedStorage<1, 1, ::ItemCommandVisibility>                         mIsHiddenInCommands;
    ::ll::TypedStorage<4, 4, ::Rarity>                                        mBaseRarity;
    ::ll::TypedStorage<4, 4, ::Interactions::Mining::MineBlockItemEffectType> mMineBlockType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FoodItemComponentLegacy>>        mFoodComponentLegacy;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SeedItemComponentLegacy>>        mSeedComponent;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CameraItemComponentLegacy>>      mCameraComponentLegacy;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void()>>>             mOnResetBAICallbacks;
    ::ll::TypedStorage<8, 24, std::vector<ItemTag>>                           mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    Item();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Item();

    virtual void initServer(::SharedTypes::v1_26_30::ItemDocument&&, ::SemVersion const&, ::Experiments const&, std::optional<LegacyEventItemComponentData>);

    virtual void tearDown();

    virtual ::Item& setDescriptionId(std::string const&);

    virtual std::string const& getDescriptionId() const;

    virtual int getMaxUseDuration(::ItemStack const*) const;

    virtual ::WeakPtr<const BlockType> const& getBlockTypeForRendering() const;

    virtual bool isMusicDisk() const;

    virtual void executeEvent(::ItemStackBase&, std::string const&, ::RenderParams&) const;

    virtual bool isComponentBased() const;

    virtual bool isHumanoidArmor() const;

    virtual bool isBlockPlanterItem() const;

    virtual bool isBucket() const;

    virtual bool isCandle() const;

    virtual bool isDamageable() const;

    virtual bool isDyeable() const;

    virtual bool isDye() const;

    virtual ::ItemColor getItemColor() const;

    virtual bool isFertilizer() const;

    virtual bool isFood() const;

    virtual bool isThrowable() const;

    virtual bool isUseable() const;

    virtual bool isTrimAllowed() const;

    virtual bool isBodyArmor() const;

    virtual ::ItemComponent* getComponent(::HashedString const&) const;

    virtual ::IFoodItemComponent* getFood() const;

    virtual ::Item& setMaxDamage(int);

    virtual ::Item& setMaxUseDuration(int);

    virtual std::unique_ptr<CompoundTag> buildNetworkTag() const;

    virtual void initializeFromNetwork(::CompoundTag const&);

    virtual std::vector<std::string> validateFromNetwork(::CompoundTag const&);

    virtual ::BlockShape getBlockShape() const;

    virtual bool canBeDepleted() const;

    virtual bool canDestroySpecial(::Block const&) const;

    virtual int getLevelDataForAuxValue(int) const;

    virtual bool isStackedByData() const;

    virtual short getMaxDamage() const;

    virtual int getAttackDamage() const;

    virtual float getAttackDamageBonus(::Actor const&) const;

    virtual bool isHandEquipped() const;

    virtual bool isGlint(::ItemStackBase const&) const;

    virtual bool isPattern() const;

    virtual int getPatternIndex() const;

    virtual ::Rarity getBaseRarity() const;

    virtual ::Rarity getRarity(::ItemStackBase const&) const;

    virtual uint getSwingDuration() const;

    virtual bool showsDurabilityInCreative() const;

    virtual bool isWearableThroughLootTable(::CompoundTag const*) const;

    virtual bool canDestroyInCreative() const;

    virtual bool isDestructive(int) const;

    virtual bool isLiquidClipItem() const;

    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const&) const;

    virtual bool requiresInteract() const;

    virtual std::string getHoverTextColor(::ItemStackBase const&) const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool) const;

    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;

    virtual int getArmorValue() const;

    virtual int getToughnessValue() const;

    virtual float getKnockbackResistanceValue() const;

    virtual std::optional<SoundEventIdentifier> getAttackMissSound() const;

    virtual std::optional<SoundEventIdentifier> getAttackHitSound() const;

    virtual std::optional<SoundEventIdentifier> getAttackCriticalHitSound() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getBreakSound() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;

    virtual bool isComplex() const;

    virtual bool isValidAuxValue(int) const;

    virtual int getDamageChance(int) const;

    virtual float getViewDamping() const;

    virtual bool uniqueAuxValues() const;

    virtual bool isActorPlacerItem() const;

    virtual ::ItemTintStrategy getTintStrategy() const;

    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    virtual bool hasCustomColor(::CompoundTag const*) const;

    virtual bool hasCustomColor(::ItemStackBase const&) const;

    virtual void clearColor(::ItemStackBase&) const;

    virtual void setColor(::ItemStackBase&, ::mce::Color const&) const;

    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const;

    virtual int buildIdAux(short, ::CompoundTag const*) const;

    virtual bool canUseOnSimTick() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual bool canUseAsAttack() const;

    virtual ::ItemStack& useAsAttack(::ItemStack&, ::Player&, ::Vec3 const&) const;

    virtual ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    virtual void releaseUsing(::ItemStack&, ::Player*, int) const;

    virtual float getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    virtual void hitActor(::ItemStack&, ::Actor&, ::Mob&) const;

    virtual void hitBlock(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&) const;

    virtual std::string buildDescriptionName(::ItemStackBase const&) const;

    virtual ::Bedrock::Safety::RedactableString const buildRedactedDescriptionName(::ItemStackBase const&) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::Bedrock::Safety::RedactableString getRedactedCustomName(::ItemStackBase const&) const;

    virtual bool hasCustomHoverName(::ItemStackBase const&) const;

    virtual std::string buildEffectDescriptionName(::ItemStackBase const&, bool) const;

    virtual void readUserData(::ItemStackBase&, ::IDataInput&, ::ReadOnlyBinaryStream&) const;

    virtual void writeUserData(::ItemStackBase const&, ::IDataOutput&) const;

    virtual uchar getMaxStackSize(::ItemDescriptor const&) const;

    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    virtual void refreshedInContainer(::ItemStackBase const&, ::Level&) const;

    virtual ::HashedString const& getCooldownCategory() const;

    virtual int getCooldownDuration() const;

    virtual ::SharedTypes::ItemCooldownType getCooldownType() const;

    virtual void fixupCommon(::ItemStackBase&, ::ILevel&) const;

    virtual void fixupCommon(::ItemStackBase&) const;

    virtual ::InHandUpdateType getInHandUpdateType(::Player const&, ::ItemStack const&, ::ItemStack const&, bool const, bool const) const;

    virtual bool validFishInteraction(int) const;

    virtual void enchantProjectile(::ItemStackBase const&, ::Actor&) const;

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;

    virtual bool shouldEmitInUseGameEvents() const;

    virtual bool useInterruptedByAttacking() const;

    virtual bool hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;

    virtual void initClient(::SharedTypes::v1_26_30::ItemDocument&&, ::SemVersion const&, ::Experiments const&, std::optional<ItemIconInfo>(*)(std::string const&, int));

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual std::string getInteractText(::Player const&) const;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    virtual bool isEmissive(int) const;

    virtual ::Brightness getLightEmission(int) const;

    virtual bool canBeCharged() const;

    virtual void playSoundIncrementally(::ItemStack const&, ::Mob&) const;

    virtual float getFurnaceXPmultiplier(::ItemStackBase const&) const;

    virtual bool calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    virtual bool _checkUseOnPermissions(::Actor&, ::ItemStackBase&, uchar const&, ::BlockPos const&) const;

    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    virtual bool _shouldAutoCalculatePlacePos() const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Item(std::string const&, short);

    MCNAPI void _helpChangeInventoryItemInPlace(::Actor&, ::ItemStack&, ::ItemStack&, ::ItemAcquisitionMethod) const;

    MCNAPI ::CoordinatorResult _sendTryPlaceBlockEvent(
        ::Block const&,
        ::BlockSource const&,
        ::Actor const&,
        ::BlockPos const&,
        uchar,
        ::Vec3 const&
    ) const;

    MCNAPI void addOnResetBAICallback(std::function<void()>);

    MCNAPI ::Item& addTag(::HashedString const&);

    MCNAPI ::Item& addTag(::ItemTag const&);

    MCNAPI ::Item& addTags(std::initializer_list<std::reference_wrapper<const ItemTag>>);

    MCNAPI bool allowOffhand() const;

    MCNAPI std::string buildCategoryDescriptionName() const;

    MCNAPI ::ItemDescriptor buildDescriptor(short, ::CompoundTag const*) const;

    MCNAPI bool canBeUsedInCommands(::BaseGameVersion const&) const;

    MCNAPI bool canUseSeed(::Actor&, ::BlockPos, uchar) const;

    MCNAPI void clearTags();

    MCNAPI float destroySpeedBonus(::ItemStackBase const&) const;

    MCNAPI void executeOnResetBAICallbacks() const;

    MCNAPI void fixupOnLoad(::ItemStackBase&) const;

    MCNAPI void fixupOnLoad(::ItemStackBase&, ::ILevel&) const;

    MCNAPI ::WeakPtr<const BlockType> const& getBlockType() const;

    MCNAPI ::ICameraItemComponent* getCamera() const;

    MCNAPI std::vector<CommandName> getCommandNames() const;

    MCNAPI ::SharedTypes::CreativeItemCategory getCreativeCategory() const;

    MCNAPI std::string const& getCreativeGroup() const;

    MCNAPI short getDamageValue(::CompoundTag const*) const;

    MCNAPI int getFrameCount() const;

    MCNAPI std::string const& getFullItemName() const;

    MCNAPI ::HashedString const& getFullNameHash() const;

    MCNAPI float getFurnaceBurnIntervalMultipler() const;

    MCNAPI short getId() const;

    MCNAPI ::Interactions::Mining::MineBlockItemEffectType getMineBlockType() const;

    MCNAPI std::string const& getNamespace() const;

    MCNAPI ::HashedString const& getRawNameHash() const;

    MCNAPI std::string const& getRawNameId() const;

    MCNAPI ::HashedString const& getRendererId() const;

    MCNAPI ::BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCNAPI std::string getSerializedName() const;

    MCNAPI ::SharedTypes::Legacy::UseAnimation getUseAnimation() const;

    MCNAPI bool hasDamageValue(::CompoundTag const*) const;

    MCNAPI bool hasTag(::HashedString const&) const;

    MCNAPI bool hasTag(::ItemTag const&) const;

    MCNAPI bool hasTag(ulong const&) const;

    MCNAPI bool isAnimatedInToolbar() const;

    MCNAPI bool isCamera() const;

    MCNAPI bool isCommandOnly() const;

    MCNAPI bool isElytra() const;

    MCNAPI bool isExplodable() const;

    MCNAPI bool isFireResistant() const;

    MCNAPI bool isMirroredArt() const;

    MCNAPI bool isNameTag() const;

    MCNAPI bool isSeed() const;

    MCNAPI bool operator==(::Item const&) const;

    MCNAPI void reloadIcon();

    MCNAPI void removeDamageValue(::ItemStackBase&) const;

    MCNAPI void resetId(short);

    MCNAPI ::Item& setAllowOffhand(bool);

    MCNAPI ::Item& setBaseRarity(::Rarity);

    MCNAPI ::Item& setCategory(::SharedTypes::CreativeItemCategory);

    MCNAPI ::Item& setCreativeGroup(std::string const&);

    MCNAPI void setDamageValue(::ItemStackBase&, short) const;

    MCNAPI ::Item& setExplodable(bool);

    MCNAPI ::Item& setFireResistant(bool);

    MCNAPI ::Item& setFurnaceBurnIntervalMultiplier(float);

    MCNAPI ::Item& setFurnaceXPmultiplier(float);

    MCNAPI ::Item& setHandEquipped();

    MCNAPI ::Item& setHoverTextColorFormat(std::string_view);

    MCNAPI ::Item& setIsGlint(bool);

    MCNAPI ::Item& setIsMirroredArt(bool);

    MCNAPI ::Item& setMaxStackSize(uchar);

    MCNAPI ::Item& setMinRequiredBaseGameVersion(::BaseGameVersion const&);

    MCNAPI ::Item& setRequiresWorldBuilder(bool);

    MCNAPI ::Item& setShouldDespawn(bool);

    MCNAPI ::Item& setStackedByData(bool);

    MCNAPI ::Item& setUseAnimation(::SharedTypes::Legacy::UseAnimation);

    MCNAPI bool shouldDespawn() const;

    MCNAPI void updateCustomBlockEntityTag(::BlockSource&, ::ItemStackBase&, ::BlockPos const&) const;

    MCNAPI ::InteractionResult
    useOn(::ItemStack&, ::Actor&, int, int, int, uchar, ::Vec3 const&, ::ItemUsedOnEventContext) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isElytra(::ItemDescriptor const&);

    MCNAPI static bool isElytraBroken(int);

    MCNAPI static bool isFlyEnabled(::ItemInstance const&);

    MCNAPI static bool isSameTypeAndItem(::ItemStackBase const&, ::ItemStackBase const&);

    MCNAPI static ::NewBlockID toBlockId(short);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& DATA_DRIVEN_NEXT_VERSION();

    MCNAPI static ::SemVersionConstant const& DATA_DRIVEN_VERSION();

    MCNAPI static std::string const& ICON_DESCRIPTION_PREFIX();

    MCNAPI static std::string const& TAG_DAMAGE();

    MCNAPI static bool const& mGenerateDenyParticleEffect();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, short);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initServer(
        ::SharedTypes::v1_26_30::ItemDocument&&,
        ::SemVersion const&,
        ::Experiments const&,
        std::optional<LegacyEventItemComponentData>
    );

    MCNAPI void $tearDown();

    MCNAPI ::Item& $setDescriptionId(std::string const&);

    MCNAPI std::string const& $getDescriptionId() const;

    MCNAPI int $getMaxUseDuration(::ItemStack const*) const;

    MCNAPI ::WeakPtr<const BlockType> const& $getBlockTypeForRendering() const;

    MCNAPI bool $isMusicDisk() const;

    MCNAPI void $executeEvent(::ItemStackBase&, std::string const&, ::RenderParams&) const;

    MCNAPI bool $isComponentBased() const;

    MCNAPI bool $isHumanoidArmor() const;

    MCNAPI bool $isBlockPlanterItem() const;

    MCNAPI bool $isBucket() const;

    MCNAPI bool $isCandle() const;

    MCNAPI bool $isDamageable() const;

    MCNAPI bool $isDyeable() const;

    MCNAPI bool $isDye() const;

    MCNAPI ::ItemColor $getItemColor() const;

    MCNAPI bool $isFertilizer() const;

    MCNAPI bool $isFood() const;

    MCNAPI bool $isThrowable() const;

    MCNAPI bool $isUseable() const;

    MCNAPI bool $isTrimAllowed() const;

    MCNAPI bool $isBodyArmor() const;

    MCNAPI ::ItemComponent* $getComponent(::HashedString const&) const;

    MCNAPI ::IFoodItemComponent* $getFood() const;

    MCNAPI ::Item& $setMaxDamage(int);

    MCNAPI ::Item& $setMaxUseDuration(int);

    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag() const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const&);

    MCNAPI std::vector<std::string> $validateFromNetwork(::CompoundTag const&);

    MCNAPI ::BlockShape $getBlockShape() const;

    MCNAPI bool $canBeDepleted() const;

    MCNAPI bool $canDestroySpecial(::Block const&) const;

    MCNAPI int $getLevelDataForAuxValue(int) const;

    MCNAPI bool $isStackedByData() const;

    MCNAPI short $getMaxDamage() const;

    MCNAPI int $getAttackDamage() const;

    MCNAPI float $getAttackDamageBonus(::Actor const&) const;

    MCNAPI bool $isHandEquipped() const;

    MCNAPI bool $isGlint(::ItemStackBase const&) const;

    MCNAPI bool $isPattern() const;

    MCNAPI int $getPatternIndex() const;

    MCNAPI ::Rarity $getBaseRarity() const;

    MCNAPI ::Rarity $getRarity(::ItemStackBase const&) const;

    MCNAPI uint $getSwingDuration() const;

    MCNAPI bool $showsDurabilityInCreative() const;

    MCNAPI bool $isWearableThroughLootTable(::CompoundTag const*) const;

    MCNAPI bool $canDestroyInCreative() const;

    MCNAPI bool $isDestructive(int) const;

    MCNAPI bool $isLiquidClipItem() const;

    MCNAPI bool $shouldInteractionWithBlockBypassLiquid(::Block const&) const;

    MCNAPI bool $requiresInteract() const;

    MCNAPI std::string $getHoverTextColor(::ItemStackBase const&) const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool) const;

    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI int $getEnchantValue() const;

    MCNAPI int $getArmorValue() const;

    MCNAPI int $getToughnessValue() const;

    MCNAPI float $getKnockbackResistanceValue() const;

    MCNAPI std::optional<SoundEventIdentifier> $getAttackMissSound() const;

    MCNAPI std::optional<SoundEventIdentifier> $getAttackHitSound() const;

    MCNAPI std::optional<SoundEventIdentifier> $getAttackCriticalHitSound() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getBreakSound() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCNAPI bool $isComplex() const;

    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI int $getDamageChance(int) const;

    MCNAPI float $getViewDamping() const;

    MCNAPI bool $uniqueAuxValues() const;

    MCNAPI bool $isActorPlacerItem() const;

    MCNAPI ::ItemTintStrategy $getTintStrategy() const;

    MCNAPI ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    MCNAPI bool $hasCustomColor(::CompoundTag const*) const;

    MCNAPI bool $hasCustomColor(::ItemStackBase const&) const;

    MCNAPI void $clearColor(::ItemStackBase&) const;

    MCNAPI void $setColor(::ItemStackBase&, ::mce::Color const&) const;

    MCNAPI ::ActorDefinitionIdentifier $getActorIdentifier(::ItemStack const&) const;

    MCNAPI int $buildIdAux(short, ::CompoundTag const*) const;

    MCNAPI bool $canUseOnSimTick() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI bool $canUseAsAttack() const;

    MCNAPI ::ItemStack& $useAsAttack(::ItemStack&, ::Player&, ::Vec3 const&) const;

    MCNAPI ::Actor* $createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    MCNAPI void $releaseUsing(::ItemStack&, ::Player*, int) const;

    MCNAPI float $getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    MCNAPI void $hitActor(::ItemStack&, ::Actor&, ::Mob&) const;

    MCNAPI void $hitBlock(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&) const;

    MCNAPI std::string $buildDescriptionName(::ItemStackBase const&) const;

    MCNAPI ::Bedrock::Safety::RedactableString const $buildRedactedDescriptionName(::ItemStackBase const&) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI ::Bedrock::Safety::RedactableString $getRedactedCustomName(::ItemStackBase const&) const;

    MCNAPI bool $hasCustomHoverName(::ItemStackBase const&) const;

    MCNAPI std::string $buildEffectDescriptionName(::ItemStackBase const&, bool) const;

    MCNAPI void $readUserData(::ItemStackBase&, ::IDataInput&, ::ReadOnlyBinaryStream&) const;

    MCNAPI void $writeUserData(::ItemStackBase const&, ::IDataOutput&) const;

    MCNAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCNAPI bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    MCNAPI void $refreshedInContainer(::ItemStackBase const&, ::Level&) const;

    MCNAPI ::HashedString const& $getCooldownCategory() const;

    MCNAPI int $getCooldownDuration() const;

    MCNAPI ::SharedTypes::ItemCooldownType $getCooldownType() const;

    MCNAPI void $fixupCommon(::ItemStackBase&, ::ILevel&) const;

    MCNAPI void $fixupCommon(::ItemStackBase&) const;

    MCNAPI ::InHandUpdateType
    $getInHandUpdateType(::Player const&, ::ItemStack const&, ::ItemStack const&, bool const, bool const) const;

    MCNAPI bool $validFishInteraction(int) const;

    MCNAPI void $enchantProjectile(::ItemStackBase const&, ::Actor&) const;

    MCNAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;

    MCNAPI bool $shouldEmitInUseGameEvents() const;

    MCNAPI bool $useInterruptedByAttacking() const;

    MCNAPI bool $hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;

    MCNAPI void $initClient(
        ::SharedTypes::v1_26_30::ItemDocument&&,
        ::SemVersion const&,
        ::Experiments const&,
        std::optional<ItemIconInfo> (*)(std::string const&, int)
    );

    MCNAPI ::Item& $setIconInfo(std::string const&, int);

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI std::string $getInteractText(::Player const&) const;

    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    MCNAPI bool $isEmissive(int) const;

    MCNAPI ::Brightness $getLightEmission(int) const;

    MCNAPI bool $canBeCharged() const;

    MCNAPI void $playSoundIncrementally(::ItemStack const&, ::Mob&) const;

    MCNAPI float $getFurnaceXPmultiplier(::ItemStackBase const&) const;

    MCNAPI bool $calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    MCNAPI bool $_checkUseOnPermissions(::Actor&, ::ItemStackBase&, uchar const&, ::BlockPos const&) const;

    MCNAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    MCNAPI bool $_shouldAutoCalculatePlacePos() const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
