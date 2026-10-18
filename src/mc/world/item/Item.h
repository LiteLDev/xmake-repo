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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemTag.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class ICameraItemComponent;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ItemTag;
#endif // @header-generator platform
struct ItemTintStrategy;
struct ItemUsedOnEventContext;
struct LegacyEventItemComponentData;
#if defined(LL_PLAT_A) // @header-generator platform
struct NewBlockID;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                    mTextureAtlasFile;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                  mTextureAtlasFile;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                             mFrameCount;
    ::ll::TypedStorage<1, 1, bool>                                            mAnimatesInToolbar;
    ::ll::TypedStorage<1, 1, bool>                                            mIsMirroredArt;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::UseAnimation>             mUseAnim;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                    mHoverTextColorFormat;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                  mHoverTextColorFormat;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                             mIconFrame;
    ::ll::TypedStorage<4, 4, int>                                             mAtlasFrame;
    ::ll::TypedStorage<4, 4, int>                                             mAtlasTotalFrames;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                    mIconName;
    ::ll::TypedStorage<8, 24, std::string>                                    mAtlasName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                  mIconName;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mAtlasName;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                                           mMaxStackSize;
    ::ll::TypedStorage<2, 2, short>                                           mId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                    mDescriptionId;
    ::ll::TypedStorage<8, 40, ::HashedString>                                 mRawNameId;
    ::ll::TypedStorage<8, 24, std::string>                                    mNamespace;
    ::ll::TypedStorage<8, 40, ::HashedString>                                 mFullName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                  mDescriptionId;
    ::ll::TypedStorage<8, 48, ::HashedString>                                 mRawNameId;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mNamespace;
    ::ll::TypedStorage<8, 48, ::HashedString>                                 mFullName;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                               mMinRequiredBaseGameVersion;
    ::ll::UntypedStorage<8, 8>                                                mBlockType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                              mMinRequiredBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockType const>>                    mBlockType;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory>             mCreativeCategory;
    ::ll::TypedStorage<8, 8, ::Item*>                                         mCraftingRemainingItem;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                    mCreativeGroup;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                  mCreativeGroup;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                           mFurnaceBurnIntervalModifier;
    ::ll::TypedStorage<4, 4, float>                                           mFurnaceXPmultiplier;
    ::ll::TypedStorage<1, 1, ::ItemCommandVisibility>                         mIsHiddenInCommands;
    ::ll::TypedStorage<4, 4, ::Rarity>                                        mBaseRarity;
    ::ll::TypedStorage<4, 4, ::Interactions::Mining::MineBlockItemEffectType> mMineBlockType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<FoodItemComponentLegacy>>        mFoodComponentLegacy;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SeedItemComponentLegacy>>        mSeedComponent;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CameraItemComponentLegacy>>      mCameraComponentLegacy;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void()>>>             mOnResetBAICallbacks;
    ::ll::TypedStorage<8, 24, std::vector<ItemTag>>                           mTags;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FoodItemComponentLegacy>>    mFoodComponentLegacy;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SeedItemComponentLegacy>>    mSeedComponent;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CameraItemComponentLegacy>>  mCameraComponentLegacy;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void()>>>         mOnResetBAICallbacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemTag>>                       mTags;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Item();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~Item();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initServer(::SharedTypes::v1_26_30::ItemDocument&&, ::SemVersion const&, ::Experiments const&, std::optional<LegacyEventItemComponentData>);
#else // @header-generator platform
    virtual void initServer(
        ::SharedTypes::v1_26_30::ItemDocument&&         data,
        ::SemVersion const&                             documentVersion,
        ::Experiments const&                            experiments,
        ::std::optional<::LegacyEventItemComponentData> legacyEventData
    );
#endif // @header-generator platform

    virtual void tearDown();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item& setDescriptionId(std::string const&);
#else // @header-generator platform
    virtual ::Item& setDescriptionId(::std::string const& description);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getDescriptionId() const;
#else // @header-generator platform
    virtual ::std::string const& getDescriptionId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxUseDuration(::ItemStack const*) const;
#else // @header-generator platform
    virtual int getMaxUseDuration(::ItemStack const* instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakPtr<const BlockType> const& getBlockTypeForRendering() const;
#else // @header-generator platform
    virtual ::WeakPtr<::BlockType const> const& getBlockTypeForRendering() const;
#endif // @header-generator platform

    virtual bool isMusicDisk() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void executeEvent(::ItemStackBase&, std::string const&, ::RenderParams&) const;
#else // @header-generator platform
    virtual void executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const;
#endif // @header-generator platform

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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemComponent* getComponent(::HashedString const&) const;
#else // @header-generator platform
    virtual ::ItemComponent* getComponent(::HashedString const& id) const;
#endif // @header-generator platform

    virtual ::IFoodItemComponent* getFood() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item& setMaxDamage(int);
#else // @header-generator platform
    virtual ::Item& setMaxDamage(int maxDamage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item& setMaxUseDuration(int);
#else // @header-generator platform
    virtual ::Item& setMaxUseDuration(int maxUseDuration);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CompoundTag> buildNetworkTag() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeFromNetwork(::CompoundTag const&);
#else // @header-generator platform
    virtual void initializeFromNetwork(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> validateFromNetwork(::CompoundTag const&);
#else // @header-generator platform
    virtual ::std::vector<::std::string> validateFromNetwork(::CompoundTag const& tag);
#endif // @header-generator platform

    virtual ::BlockShape getBlockShape() const;

    virtual bool canBeDepleted() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canDestroySpecial(::Block const&) const;
#else // @header-generator platform
    virtual bool canDestroySpecial(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getLevelDataForAuxValue(int) const;
#else // @header-generator platform
    virtual int getLevelDataForAuxValue(int auxValue) const;
#endif // @header-generator platform

    virtual bool isStackedByData() const;

    virtual short getMaxDamage() const;

    virtual int getAttackDamage() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getAttackDamageBonus(::Actor const&) const;
#else // @header-generator platform
    virtual float getAttackDamageBonus(::Actor const& attacker) const;
#endif // @header-generator platform

    virtual bool isHandEquipped() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isGlint(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool isGlint(::ItemStackBase const& stack) const;
#endif // @header-generator platform

    virtual bool isPattern() const;

    virtual int getPatternIndex() const;

    virtual ::Rarity getBaseRarity() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Rarity getRarity(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual ::Rarity getRarity(::ItemStackBase const& stack) const;
#endif // @header-generator platform

    virtual uint getSwingDuration() const;

    virtual bool showsDurabilityInCreative() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWearableThroughLootTable(::CompoundTag const*) const;
#else // @header-generator platform
    virtual bool isWearableThroughLootTable(::CompoundTag const* userData) const;
#endif // @header-generator platform

    virtual bool canDestroyInCreative() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDestructive(int) const;
#else // @header-generator platform
    virtual bool isDestructive(int auxValue) const;
#endif // @header-generator platform

    virtual bool isLiquidClipItem() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const&) const;
#else // @header-generator platform
    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const& block) const;
#endif // @header-generator platform

    virtual bool requiresInteract() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getHoverTextColor(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual ::std::string getHoverTextColor(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool) const;
#else // @header-generator platform
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;
#else // @header-generator platform
    virtual bool isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;
#endif // @header-generator platform

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;

    virtual int getArmorValue() const;

    virtual int getToughnessValue() const;

    virtual float getKnockbackResistanceValue() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<SoundEventIdentifier> getAttackMissSound() const;
#else // @header-generator platform
    virtual ::std::optional<::SoundEventIdentifier> getAttackMissSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<SoundEventIdentifier> getAttackHitSound() const;
#else // @header-generator platform
    virtual ::std::optional<::SoundEventIdentifier> getAttackHitSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<SoundEventIdentifier> getAttackCriticalHitSound() const;
#else // @header-generator platform
    virtual ::std::optional<::SoundEventIdentifier> getAttackCriticalHitSound() const;
#endif // @header-generator platform

    virtual ::SharedTypes::Legacy::LevelSoundEvent getBreakSound() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;

    virtual bool isComplex() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidAuxValue(int) const;
#else // @header-generator platform
    virtual bool isValidAuxValue(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getDamageChance(int) const;
#else // @header-generator platform
    virtual int getDamageChance(int unbreaking) const;
#endif // @header-generator platform

    virtual float getViewDamping() const;

    virtual bool uniqueAuxValues() const;

    virtual bool isActorPlacerItem() const;

    virtual ::ItemTintStrategy getTintStrategy() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;
#else // @header-generator platform
    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasCustomColor(::CompoundTag const*) const;
#else // @header-generator platform
    virtual bool hasCustomColor(::ItemStackBase const& instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasCustomColor(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool hasCustomColor(::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearColor(::ItemStackBase&) const;
#else // @header-generator platform
    virtual void clearColor(::ItemStackBase& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setColor(::ItemStackBase&, ::mce::Color const&) const;
#else // @header-generator platform
    virtual void setColor(::ItemStackBase& item, ::mce::Color const& color) const;
#endif // @header-generator platform

    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int buildIdAux(short, ::CompoundTag const*) const;
#else // @header-generator platform
    virtual int buildIdAux(short auxValue, ::CompoundTag const* userData) const;
#endif // @header-generator platform

    virtual bool canUseOnSimTick() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const;
#endif // @header-generator platform

    virtual bool canUseAsAttack() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack& useAsAttack(::ItemStack&, ::Player&, ::Vec3 const&) const;
#else // @header-generator platform
    virtual ::ItemStack& useAsAttack(::ItemStack& item, ::Player& player, ::Vec3 const& aimDirection) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;
#else // @header-generator platform
    virtual ::Actor* createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      aimDirection
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void releaseUsing(::ItemStack&, ::Player*, int) const;
#else // @header-generator platform
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getDestroySpeed(::ItemStackBase const&, ::Block const&) const;
#else // @header-generator platform
    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hitActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    virtual void hitActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hitBlock(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&) const;
#else // @header-generator platform
    virtual void hitBlock(::ItemStack& item, ::Block const& block, ::BlockPos const& blockPos, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildDescriptionName(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual ::std::string buildDescriptionName(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const buildRedactedDescriptionName(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const buildRedactedDescriptionName(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString getRedactedCustomName(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString getRedactedCustomName(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasCustomHoverName(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool hasCustomHoverName(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildEffectDescriptionName(::ItemStackBase const&, bool) const;
#else // @header-generator platform
    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack, bool playerIsCreative) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readUserData(::ItemStackBase&, ::IDataInput&, ::ReadOnlyBinaryStream&) const;
#else // @header-generator platform
    virtual void
    readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeUserData(::ItemStackBase const&, ::IDataOutput&) const;
#else // @header-generator platform
    virtual void writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;
#endif // @header-generator platform

    virtual uchar getMaxStackSize(::ItemDescriptor const&) const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;
#else // @header-generator platform
    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void refreshedInContainer(::ItemStackBase const&, ::Level&) const;
#else // @header-generator platform
    virtual void refreshedInContainer(::ItemStackBase const& stack, ::Level& level) const;
#endif // @header-generator platform

    virtual ::HashedString const& getCooldownCategory() const;

    virtual int getCooldownDuration() const;

    virtual ::SharedTypes::ItemCooldownType getCooldownType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixupCommon(::ItemStackBase&, ::ILevel&) const;
#else // @header-generator platform
    virtual void fixupCommon(::ItemStackBase& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixupCommon(::ItemStackBase&) const;
#else // @header-generator platform
    virtual void fixupCommon(::ItemStackBase& stack, ::ILevel& level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InHandUpdateType getInHandUpdateType(::Player const&, ::ItemStack const&, ::ItemStack const&, bool const, bool const) const;
#else // @header-generator platform
    virtual ::InHandUpdateType getInHandUpdateType(
        ::Player const&    player,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const         isMainHand,
        bool const         slotChanged
    ) const;
#endif // @header-generator platform

    virtual bool validFishInteraction(int) const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void enchantProjectile(::ItemStackBase const&, ::Actor&) const;
#else // @header-generator platform
    virtual void enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const;
#endif // @header-generator platform

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;

    virtual bool shouldEmitInUseGameEvents() const;

    virtual bool useInterruptedByAttacking() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initClient(::SharedTypes::v1_26_30::ItemDocument&&, ::SemVersion const&, ::Experiments const&, std::optional<ItemIconInfo>(*)(std::string const&, int));
#else // @header-generator platform
    virtual void initClient(
        ::SharedTypes::v1_26_30::ItemDocument&& data,
        ::SemVersion const&,
        ::Experiments const&,
        ::std::optional<::ItemIconInfo> (*iconFactory)(::std::string const&, int)
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item& setIconInfo(std::string const&, int);
#else // @header-generator platform
    virtual ::Item& setIconInfo(::std::string const& name, int index);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;
#else // @header-generator platform
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getInteractText(::Player const&) const;
#else // @header-generator platform
    virtual ::std::string getInteractText(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
#else // @header-generator platform
    virtual int
    getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEmissive(int) const;
#else // @header-generator platform
    virtual bool isEmissive(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Brightness getLightEmission(int) const;
#else // @header-generator platform
    virtual ::Brightness getLightEmission(int data) const;
#endif // @header-generator platform

    virtual bool canBeCharged() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playSoundIncrementally(::ItemStack const&, ::Mob&) const;
#else // @header-generator platform
    virtual void playSoundIncrementally(::ItemStack const& item, ::Mob& mob) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getFurnaceXPmultiplier(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual float getFurnaceXPmultiplier(::ItemStackBase const& instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;
#else // @header-generator platform
    virtual bool calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _checkUseOnPermissions(::Actor&, ::ItemStackBase&, uchar const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool
    _checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;
#else // @header-generator platform
    virtual bool _calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;
#endif // @header-generator platform

    virtual bool _shouldAutoCalculatePlacePos() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Item(std::string const&, short);
#else // @header-generator platform
    MCAPI Item(::std::string const& nameId, short id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _helpChangeInventoryItemInPlace(::Actor&, ::ItemStack&, ::ItemStack&, ::ItemAcquisitionMethod) const;
#else // @header-generator platform
    MCAPI bool _dispenseHoneycombItem(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CoordinatorResult _sendTryPlaceBlockEvent(
        ::Block const&,
        ::BlockSource const&,
        ::Actor const&,
        ::BlockPos const&,
        uchar,
        ::Vec3 const&
#else // @header-generator platform
    MCAPI void _helpChangeInventoryItemInPlace(
        ::Actor&                actor,
        ::ItemStack&            startingItem,
        ::ItemStack&            replacementItem,
        ::ItemAcquisitionMethod acquisitionMethod
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addOnResetBAICallback(std::function<void()>);
#else // @header-generator platform
    MCAPI ::CoordinatorResult _sendTryPlaceBlockEvent(
        ::Block const&       block,
        ::BlockSource const& region,
        ::Actor const&       actor,
        ::BlockPos const&    pos,
        uchar                face,
        ::Vec3 const&        clickPos
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& addTag(::HashedString const&);
#else // @header-generator platform
    MCAPI void addOnResetBAICallback(::std::function<void()> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& addTag(::ItemTag const&);
#else // @header-generator platform
    MCAPI ::Item& addTag(::ItemTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& addTags(std::initializer_list<std::reference_wrapper<const ItemTag>>);
#else // @header-generator platform
    MCAPI ::Item& addTag(::HashedString const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool allowOffhand() const;
#else // @header-generator platform
    MCAPI ::std::string buildCategoryDescriptionName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string buildCategoryDescriptionName() const;
#else // @header-generator platform
    MCAPI void clearTags();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemDescriptor buildDescriptor(short, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI ::std::vector<::CommandName> getCommandNames() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canBeUsedInCommands(::BaseGameVersion const&) const;
#else // @header-generator platform
    MCAPI short getDamageValue(::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canUseSeed(::Actor&, ::BlockPos, uchar) const;
#else // @header-generator platform
    MCAPI ::std::string getSerializedName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearTags();
#else // @header-generator platform
    MCAPI bool hasTag(::ItemTag const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float destroySpeedBonus(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI bool hasTag(::HashedString const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void executeOnResetBAICallbacks() const;
#else // @header-generator platform
    MCAPI void setDamageValue(::ItemStackBase& stack, short newDamage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fixupOnLoad(::ItemStackBase&) const;
#else // @header-generator platform
    MCAPI ::Item& setMinRequiredBaseGameVersion(::BaseGameVersion const& baseGameVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fixupOnLoad(::ItemStackBase&, ::ILevel&) const;
#else // @header-generator platform
    MCAPI void
    updateCustomBlockEntityTag(::BlockSource& region, ::ItemStackBase& instance, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::InteractionResult useOn(
        ::ItemStack&             item,
        ::Actor&                 entity,
        int                      x,
        int                      y,
        int                      z,
        uchar                    face,
        ::Vec3 const&            clickPos,
        ::ItemUsedOnEventContext itemUsedOnEventContext
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isElytra(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static bool isElytra(::ItemDescriptor const& itemDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isElytraBroken(int);

    MCNAPI static bool isFlyEnabled(::ItemInstance const&);

    MCNAPI static bool isSameTypeAndItem(::ItemStackBase const&, ::ItemStackBase const&);

    MCNAPI static ::NewBlockID toBlockId(short);
#else // @header-generator platform
    MCAPI static bool isFlyEnabled(::ItemInstance const& item);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& DATA_DRIVEN_NEXT_VERSION();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& DATA_DRIVEN_NEXT_VERSION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& DATA_DRIVEN_VERSION();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& DATA_DRIVEN_VERSION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ICON_DESCRIPTION_PREFIX();
#else // @header-generator platform
    MCAPI static ::std::string const& ICON_DESCRIPTION_PREFIX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_DAMAGE();

    MCNAPI static bool const& mGenerateDenyParticleEffect();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_DAMAGE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, short);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& nameId, short id);
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
    MCNAPI void $initServer(
        ::SharedTypes::v1_26_30::ItemDocument&&,
        ::SemVersion const&,
        ::Experiments const&,
        std::optional<LegacyEventItemComponentData>
#else // @header-generator platform
    MCAPI void $initServer(
        ::SharedTypes::v1_26_30::ItemDocument&&         data,
        ::SemVersion const&                             documentVersion,
        ::Experiments const&                            experiments,
        ::std::optional<::LegacyEventItemComponentData> legacyEventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tearDown();
#else // @header-generator platform
    MCFOLD void $tearDown();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& $setDescriptionId(std::string const&);
#else // @header-generator platform
    MCAPI ::Item& $setDescriptionId(::std::string const& description);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getDescriptionId() const;
#else // @header-generator platform
    MCAPI ::std::string const& $getDescriptionId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxUseDuration(::ItemStack const*) const;
#else // @header-generator platform
    MCAPI int $getMaxUseDuration(::ItemStack const* instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<const BlockType> const& $getBlockTypeForRendering() const;
#else // @header-generator platform
    MCAPI ::WeakPtr<::BlockType const> const& $getBlockTypeForRendering() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isMusicDisk() const;
#else // @header-generator platform
    MCFOLD bool $isMusicDisk() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $executeEvent(::ItemStackBase&, std::string const&, ::RenderParams&) const;
#else // @header-generator platform
    MCFOLD void $executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isComponentBased() const;
#else // @header-generator platform
    MCFOLD bool $isComponentBased() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isHumanoidArmor() const;
#else // @header-generator platform
    MCFOLD bool $isHumanoidArmor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBlockPlanterItem() const;
#else // @header-generator platform
    MCFOLD bool $isBlockPlanterItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBucket() const;
#else // @header-generator platform
    MCFOLD bool $isBucket() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isCandle() const;
#else // @header-generator platform
    MCFOLD bool $isCandle() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDamageable() const;
#else // @header-generator platform
    MCAPI bool $isDamageable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDyeable() const;
#else // @header-generator platform
    MCFOLD bool $isDyeable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDye() const;
#else // @header-generator platform
    MCFOLD bool $isDye() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemColor $getItemColor() const;
#else // @header-generator platform
    MCAPI ::ItemColor $getItemColor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFertilizer() const;
#else // @header-generator platform
    MCFOLD bool $isFertilizer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFood() const;
#else // @header-generator platform
    MCFOLD bool $isFood() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isThrowable() const;
#else // @header-generator platform
    MCFOLD bool $isThrowable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isUseable() const;
#else // @header-generator platform
    MCFOLD bool $isUseable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTrimAllowed() const;
#else // @header-generator platform
    MCFOLD bool $isTrimAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBodyArmor() const;
#else // @header-generator platform
    MCFOLD bool $isBodyArmor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemComponent* $getComponent(::HashedString const&) const;
#else // @header-generator platform
    MCFOLD ::ItemComponent* $getComponent(::HashedString const& id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IFoodItemComponent* $getFood() const;
#else // @header-generator platform
    MCAPI ::IFoodItemComponent* $getFood() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& $setMaxDamage(int);
#else // @header-generator platform
    MCAPI ::Item& $setMaxDamage(int maxDamage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& $setMaxUseDuration(int);
#else // @header-generator platform
    MCAPI ::Item& $setMaxUseDuration(int maxUseDuration);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeFromNetwork(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void $initializeFromNetwork(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $validateFromNetwork(::CompoundTag const&);
#else // @header-generator platform
    MCFOLD ::std::vector<::std::string> $validateFromNetwork(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockShape $getBlockShape() const;
#else // @header-generator platform
    MCFOLD ::BlockShape $getBlockShape() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeDepleted() const;
#else // @header-generator platform
    MCAPI bool $canBeDepleted() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canDestroySpecial(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $canDestroySpecial(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getLevelDataForAuxValue(int) const;
#else // @header-generator platform
    MCFOLD int $getLevelDataForAuxValue(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isStackedByData() const;
#else // @header-generator platform
    MCAPI bool $isStackedByData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short $getMaxDamage() const;
#else // @header-generator platform
    MCAPI short $getMaxDamage() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAttackDamage() const;
#else // @header-generator platform
    MCFOLD int $getAttackDamage() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getAttackDamageBonus(::Actor const&) const;
#else // @header-generator platform
    MCFOLD float $getAttackDamageBonus(::Actor const& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isHandEquipped() const;
#else // @header-generator platform
    MCAPI bool $isHandEquipped() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isGlint(::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPattern() const;
#else // @header-generator platform
    MCFOLD bool $isPattern() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getPatternIndex() const;
#else // @header-generator platform
    MCFOLD int $getPatternIndex() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Rarity $getBaseRarity() const;
#else // @header-generator platform
    MCAPI ::Rarity $getBaseRarity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Rarity $getRarity(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI ::Rarity $getRarity(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getSwingDuration() const;
#else // @header-generator platform
    MCFOLD uint $getSwingDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $showsDurabilityInCreative() const;
#else // @header-generator platform
    MCFOLD bool $showsDurabilityInCreative() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isWearableThroughLootTable(::CompoundTag const*) const;
#else // @header-generator platform
    MCFOLD bool $isWearableThroughLootTable(::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canDestroyInCreative() const;
#else // @header-generator platform
    MCFOLD bool $canDestroyInCreative() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDestructive(int) const;
#else // @header-generator platform
    MCFOLD bool $isDestructive(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLiquidClipItem() const;
#else // @header-generator platform
    MCFOLD bool $isLiquidClipItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldInteractionWithBlockBypassLiquid(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $shouldInteractionWithBlockBypassLiquid(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $requiresInteract() const;
#else // @header-generator platform
    MCFOLD bool $requiresInteract() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getHoverTextColor(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI ::std::string $getHoverTextColor(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool) const;
#else // @header-generator platform
    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;
#else // @header-generator platform
    MCFOLD bool $isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEnchantSlot() const;
#else // @header-generator platform
    MCFOLD int $getEnchantSlot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEnchantValue() const;
#else // @header-generator platform
    MCFOLD int $getEnchantValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getArmorValue() const;
#else // @header-generator platform
    MCFOLD int $getArmorValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getToughnessValue() const;
#else // @header-generator platform
    MCFOLD int $getToughnessValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getKnockbackResistanceValue() const;
#else // @header-generator platform
    MCFOLD float $getKnockbackResistanceValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<SoundEventIdentifier> $getAttackMissSound() const;
#else // @header-generator platform
    MCFOLD ::std::optional<::SoundEventIdentifier> $getAttackMissSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<SoundEventIdentifier> $getAttackHitSound() const;
#else // @header-generator platform
    MCFOLD ::std::optional<::SoundEventIdentifier> $getAttackHitSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<SoundEventIdentifier> $getAttackCriticalHitSound() const;
#else // @header-generator platform
    MCFOLD ::std::optional<::SoundEventIdentifier> $getAttackCriticalHitSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getBreakSound() const;
#else // @header-generator platform
    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getBreakSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isComplex() const;
#else // @header-generator platform
    MCFOLD bool $isComplex() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidAuxValue(int) const;
#else // @header-generator platform
    MCFOLD bool $isValidAuxValue(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDamageChance(int) const;
#else // @header-generator platform
    MCAPI int $getDamageChance(int unbreaking) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getViewDamping() const;
#else // @header-generator platform
    MCFOLD float $getViewDamping() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $uniqueAuxValues() const;
#else // @header-generator platform
    MCFOLD bool $uniqueAuxValues() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isActorPlacerItem() const;
#else // @header-generator platform
    MCFOLD bool $isActorPlacerItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemTintStrategy $getTintStrategy() const;
#else // @header-generator platform
    MCFOLD ::ItemTintStrategy $getTintStrategy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const&) const;
#else // @header-generator platform
    MCFOLD ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasCustomColor(::CompoundTag const*) const;
#else // @header-generator platform
    MCFOLD bool $hasCustomColor(::ItemStackBase const& instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasCustomColor(::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD bool $hasCustomColor(::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearColor(::ItemStackBase&) const;
#else // @header-generator platform
    MCFOLD void $clearColor(::ItemStackBase& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setColor(::ItemStackBase&, ::mce::Color const&) const;
#else // @header-generator platform
    MCFOLD void $setColor(::ItemStackBase& item, ::mce::Color const& color) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorDefinitionIdentifier $getActorIdentifier(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI ::ActorDefinitionIdentifier $getActorIdentifier(::ItemStack const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $buildIdAux(short, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI int $buildIdAux(short auxValue, ::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUseOnSimTick() const;
#else // @header-generator platform
    MCFOLD bool $canUseOnSimTick() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUseAsAttack() const;
#else // @header-generator platform
    MCFOLD bool $canUseAsAttack() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack& $useAsAttack(::ItemStack&, ::Player&, ::Vec3 const&) const;
#else // @header-generator platform
    MCAPI ::ItemStack& $useAsAttack(::ItemStack& item, ::Player& player, ::Vec3 const& aimDirection) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* $createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;
#else // @header-generator platform
    MCFOLD ::Actor* $createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      aimDirection
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $releaseUsing(::ItemStack&, ::Player*, int) const;
#else // @header-generator platform
    MCFOLD void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getDestroySpeed(::ItemStackBase const&, ::Block const&) const;
#else // @header-generator platform
    MCFOLD float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    MCAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hitActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    MCFOLD void $hitActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hitBlock(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&) const;
#else // @header-generator platform
    MCFOLD void $hitBlock(::ItemStack& item, ::Block const& block, ::BlockPos const& blockPos, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildDescriptionName(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI ::std::string $buildDescriptionName(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString const $buildRedactedDescriptionName(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString const $buildRedactedDescriptionName(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString $getRedactedCustomName(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString $getRedactedCustomName(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasCustomHoverName(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI bool $hasCustomHoverName(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildEffectDescriptionName(::ItemStackBase const&, bool) const;
#else // @header-generator platform
    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack, bool playerIsCreative) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readUserData(::ItemStackBase&, ::IDataInput&, ::ReadOnlyBinaryStream&) const;
#else // @header-generator platform
    MCAPI void
    $readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeUserData(::ItemStackBase const&, ::IDataOutput&) const;
#else // @header-generator platform
    MCAPI void $writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;
#else // @header-generator platform
    MCFOLD uchar $getMaxStackSize(::ItemDescriptor const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;
#else // @header-generator platform
    MCFOLD bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $refreshedInContainer(::ItemStackBase const&, ::Level&) const;
#else // @header-generator platform
    MCFOLD void $refreshedInContainer(::ItemStackBase const& stack, ::Level& level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& $getCooldownCategory() const;
#else // @header-generator platform
    MCAPI ::HashedString const& $getCooldownCategory() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getCooldownDuration() const;
#else // @header-generator platform
    MCAPI int $getCooldownDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::ItemCooldownType $getCooldownType() const;
#else // @header-generator platform
    MCFOLD ::SharedTypes::ItemCooldownType $getCooldownType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixupCommon(::ItemStackBase&, ::ILevel&) const;
#else // @header-generator platform
    MCAPI void $fixupCommon(::ItemStackBase& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixupCommon(::ItemStackBase&) const;
#else // @header-generator platform
    MCAPI void $fixupCommon(::ItemStackBase& stack, ::ILevel& level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InHandUpdateType
    $getInHandUpdateType(::Player const&, ::ItemStack const&, ::ItemStack const&, bool const, bool const) const;
#else // @header-generator platform
    MCAPI ::InHandUpdateType $getInHandUpdateType(
        ::Player const&    player,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const         isMainHand,
        bool const         slotChanged
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $validFishInteraction(int) const;
#else // @header-generator platform
    MCFOLD bool $validFishInteraction(int) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $enchantProjectile(::ItemStackBase const&, ::Actor&) const;
#else // @header-generator platform
    MCFOLD void $enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;
#else // @header-generator platform
    MCFOLD ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldEmitInUseGameEvents() const;
#else // @header-generator platform
    MCFOLD bool $shouldEmitInUseGameEvents() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useInterruptedByAttacking() const;
#else // @header-generator platform
    MCFOLD bool $useInterruptedByAttacking() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD bool $hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initClient(
        ::SharedTypes::v1_26_30::ItemDocument&&,
#else // @header-generator platform
    MCAPI void $initClient(
        ::SharedTypes::v1_26_30::ItemDocument&& data,
#endif // @header-generator platform
        ::SemVersion const&,
        ::Experiments const&,
#if defined(LL_PLAT_A) // @header-generator platform
        std::optional<ItemIconInfo> (*)(std::string const&, int)
#else // @header-generator platform
        ::std::optional<::ItemIconInfo> (*iconFactory)(::std::string const&, int)
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& $setIconInfo(std::string const&, int);
#else // @header-generator platform
    MCFOLD ::Item& $setIconInfo(::std::string const& name, int index);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
#else // @header-generator platform
    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getInteractText(::Player const&) const;
#else // @header-generator platform
    MCAPI ::std::string $getInteractText(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
#else // @header-generator platform
    MCFOLD int
    $getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isEmissive(int) const;
#else // @header-generator platform
    MCAPI bool $isEmissive(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Brightness $getLightEmission(int) const;
#else // @header-generator platform
    MCFOLD ::Brightness $getLightEmission(int data) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeCharged() const;
#else // @header-generator platform
    MCFOLD bool $canBeCharged() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playSoundIncrementally(::ItemStack const&, ::Mob&) const;
#else // @header-generator platform
    MCFOLD void $playSoundIncrementally(::ItemStack const& item, ::Mob& mob) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getFurnaceXPmultiplier(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI float $getFurnaceXPmultiplier(::ItemStackBase const& instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;
#else // @header-generator platform
    MCAPI bool $calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_checkUseOnPermissions(::Actor&, ::ItemStackBase&, uchar const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool
    $_checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;
#else // @header-generator platform
    MCFOLD bool $_calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_shouldAutoCalculatePlacePos() const;
#else // @header-generator platform
    MCFOLD bool $_shouldAutoCalculatePlacePos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
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
