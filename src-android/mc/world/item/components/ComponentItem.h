#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/shared_types/item/EnchantSlot.h"
#include "mc/deps/shared_types/item/ItemCooldownType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemAcquisitionMethod.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class CompoundTag;
class Container;
class Experiments;
class IFoodItemComponent;
class IconItemComponent;
class InteractionResult;
class ItemComponent;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class ListTag;
class Mob;
class Player;
class SemVersion;
class Vec3;
struct ItemIconInfo;
struct ItemOnUseResult;
struct LegacyEventItemComponentData;
struct ResolvedItemIconInfo;
struct SoundEventIdentifier;
namespace Bedrock::Safety { class RedactableString; }
namespace SharedTypes::Legacy { struct ComponentItemData; }
namespace SharedTypes::v1_21_60 { struct CustomComponentsItemComponent; }
namespace SharedTypes::v1_26_30 { struct ItemComponents; }
namespace SharedTypes::v1_26_30 { struct ItemDocument; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class ComponentItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    bool                                                                              mExcludeUserDataDiffCheck : 1;
    bool                                                                              mCanDestroyInCreative     : 1;
    bool                                                                              mRequiresInteract         : 1;
    bool                                                                              mIsLiquidClipped          : 1;
    ::ll::TypedStorage<4, 4, float>                                                   mSpeed;
    ::ll::TypedStorage<4, 4, int>                                                     mDamage;
    ::ll::TypedStorage<4, 4, ::SharedTypes::EnchantSlot>                              mEnchantSlot;
    ::ll::TypedStorage<4, 4, int>                                                     mEnchantValue;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                               mAlias;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsAttachable;
    ::ll::TypedStorage<8, 24, std::map<HashedString, std::shared_ptr<ItemComponent>>> mItemComponents;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IconItemComponent>>                     mIcon;
    ::ll::UntypedStorage<8, 8>                                                        mBlockTypeForRendering;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::shared_ptr<ItemComponent>>>  mRegisteredCerealComponents;
    ::ll::UntypedStorage<8, 24>                                                       mCtx;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ComponentItem();

    virtual void initServer(::SharedTypes::v1_26_30::ItemDocument&&, ::SemVersion const&, ::Experiments const&, std::optional<LegacyEventItemComponentData>);

    virtual void tearDown();

    virtual ::ComponentItem& setDescriptionId(std::string const&);

    virtual std::string const& getDescriptionId() const;

    virtual ::WeakPtr<const BlockType> const& getBlockTypeForRendering() const;

    virtual bool isMusicDisk() const;

    virtual bool isComponentBased() const;

    virtual bool isHumanoidArmor() const;

    virtual bool isBlockPlanterItem() const;

    virtual bool isDamageable() const;

    virtual bool isDyeable() const;

    virtual bool isFood() const;

    virtual bool isThrowable() const;

    virtual bool isUseable() const;

    virtual bool isTrimAllowed() const;

    virtual ::ItemComponent* getComponent(::HashedString const&) const;

    virtual ::IFoodItemComponent* getFood() const;

    virtual ::Item& setMaxDamage(int);

    virtual std::unique_ptr<CompoundTag> buildNetworkTag() const;

    virtual void initializeFromNetwork(::CompoundTag const&);

    virtual std::vector<std::string> validateFromNetwork(::CompoundTag const&);

    virtual ::BlockShape getBlockShape() const;

    virtual bool canBeDepleted() const;

    virtual bool canDestroySpecial(::Block const&) const;

    virtual int getLevelDataForAuxValue(int) const;

    virtual short getMaxDamage() const;

    virtual int getAttackDamage() const;

    virtual bool isGlint(::ItemStackBase const&) const;

    virtual uint getSwingDuration() const;

    virtual bool canDestroyInCreative() const;

    virtual bool isDestructive(int) const;

    virtual bool isLiquidClipItem() const;

    virtual bool requiresInteract() const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;

    virtual int getArmorValue() const;

    virtual std::optional<SoundEventIdentifier> getAttackMissSound() const;

    virtual std::optional<SoundEventIdentifier> getAttackHitSound() const;

    virtual std::optional<SoundEventIdentifier> getAttackCriticalHitSound() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;

    virtual int getDamageChance(int) const;

    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    virtual bool hasCustomColor(::ItemStackBase const&) const;

    virtual void clearColor(::ItemStackBase&) const;

    virtual void setColor(::ItemStackBase&, ::mce::Color const&) const;

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

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual std::string buildEffectDescriptionName(::ItemStackBase const&, bool) const;

    virtual uchar getMaxStackSize(::ItemDescriptor const&) const;

    virtual ::HashedString const& getCooldownCategory() const;

    virtual int getCooldownDuration() const;

    virtual ::SharedTypes::ItemCooldownType getCooldownType() const;

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;

    virtual bool shouldEmitInUseGameEvents() const;

    virtual void initClient(::SharedTypes::v1_26_30::ItemDocument&&, ::SemVersion const&, ::Experiments const&, std::optional<ItemIconInfo>(*)(std::string const&, int));

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual std::string getInteractText(::Player const&) const;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    virtual bool isEmissive(int) const;

    virtual bool canBeCharged() const;

    virtual bool _checkUseOnPermissions(::Actor&, ::ItemStackBase&, uchar const&, ::BlockPos const&) const;

    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    virtual bool _shouldAutoCalculatePlacePos() const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;

    virtual bool useVariant(int, int, bool) const;

    virtual int getVariant(int, int, bool) const;

    virtual bool shouldUseJsonForRenderMatrix() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItem(std::string const&, short, ::cereal::ReflectionCtx const&);

    MCNAPI void _initializeLoadedComponents(std::optional<SemVersion>, std::optional<Experiments>);

    MCNAPI std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCNAPI bool checkComponentDataForContentErrors() const;

    MCNAPI ::IconItemComponent const* getIconComponent() const;

    MCNAPI float getMovementModifier() const;

    MCNAPI void init(
        ::SharedTypes::v1_26_30::ItemDocument&&,
        ::SemVersion const&,
        std::optional<LegacyEventItemComponentData>,
        ::Experiments const&
    );

    MCNAPI ::Bedrock::PubSub::Connector<void(int&, ItemStack&, Actor&, Mob&)>& onBeforeDurabilityDamage();

    MCNAPI ::Bedrock::PubSub::Connector<void(ItemStack&, Actor&, Mob&)>& onHitActor();

    MCNAPI ::Bedrock::PubSub::Connector<void(ItemStack&, const Block&, const BlockPos&, Mob&)>& onHitBlock();

    MCNAPI ::Bedrock::PubSub::Connector<void(ItemStack&, Actor&, Mob&)>& onHurtActor();

    MCNAPI ::Bedrock::PubSub::Connector<void(bool&, ItemStack&, const Block&, int, int, int, Actor&)>& onMiningBlock();

    MCNAPI ::Bedrock::PubSub::Connector<void(ItemOnUseResult&, ItemStack&, Player&)>& onUse();

    MCNAPI ::Bedrock::PubSub::Connector<void(ItemStack&, Player&, const Vec3&)>& onUseAsAttack();

    MCNAPI ::Bedrock::PubSub::Connector<
        void(bool&, const ItemStack&, ItemStack&, Actor&, BlockPos, uchar, const Vec3&)>&
    onUseOn();

    MCNAPI ::Bedrock::PubSub::Connector<void(ItemUseMethod&, const ItemStack&, ItemStack&, Player&, Level&)>&
    onUseTimeDepleted();

    MCNAPI void setAttackDamage(int const);

    MCNAPI void setBlockTypeForRendering(::WeakPtr<const BlockType> const&);

    MCNAPI void setEnchantSlot(::SharedTypes::EnchantSlot const);

    MCNAPI void setEnchantValue(int const);

    MCNAPI void setIsAttachable(bool);

    MCNAPI void setIsLiquidClipped(bool const);

    MCNAPI void setRequiresInteract(bool const);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void registerItemComponentTypes(::cereal::ReflectionCtx&);

    MCNAPI static std::tuple<
        SemVersion,
        rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>,
        bool>
    upgradeJson(::cereal::ReflectionCtx const&, std::string_view const, bool const, std::optional<SemVersion>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, short, ::cereal::ReflectionCtx const&);
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

    MCNAPI ::ComponentItem& $setDescriptionId(std::string const&);

    MCNAPI std::string const& $getDescriptionId() const;

    MCNAPI ::WeakPtr<const BlockType> const& $getBlockTypeForRendering() const;

    MCNAPI bool $isMusicDisk() const;

    MCNAPI bool $isComponentBased() const;

    MCNAPI bool $isHumanoidArmor() const;

    MCNAPI bool $isBlockPlanterItem() const;

    MCNAPI bool $isDamageable() const;

    MCNAPI bool $isDyeable() const;

    MCNAPI bool $isFood() const;

    MCNAPI bool $isThrowable() const;

    MCNAPI bool $isUseable() const;

    MCNAPI bool $isTrimAllowed() const;

    MCNAPI ::ItemComponent* $getComponent(::HashedString const&) const;

    MCNAPI ::IFoodItemComponent* $getFood() const;

    MCNAPI ::Item& $setMaxDamage(int);

    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag() const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const&);

    MCNAPI std::vector<std::string> $validateFromNetwork(::CompoundTag const&);

    MCNAPI ::BlockShape $getBlockShape() const;

    MCNAPI bool $canBeDepleted() const;

    MCNAPI bool $canDestroySpecial(::Block const&) const;

    MCNAPI int $getLevelDataForAuxValue(int) const;

    MCNAPI short $getMaxDamage() const;

    MCNAPI int $getAttackDamage() const;

    MCNAPI bool $isGlint(::ItemStackBase const&) const;

    MCNAPI uint $getSwingDuration() const;

    MCNAPI bool $canDestroyInCreative() const;

    MCNAPI bool $isDestructive(int) const;

    MCNAPI bool $isLiquidClipItem() const;

    MCNAPI bool $requiresInteract() const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI int $getEnchantValue() const;

    MCNAPI int $getArmorValue() const;

    MCNAPI std::optional<SoundEventIdentifier> $getAttackMissSound() const;

    MCNAPI std::optional<SoundEventIdentifier> $getAttackHitSound() const;

    MCNAPI std::optional<SoundEventIdentifier> $getAttackCriticalHitSound() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCNAPI int $getDamageChance(int) const;

    MCNAPI ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    MCNAPI bool $hasCustomColor(::ItemStackBase const&) const;

    MCNAPI void $clearColor(::ItemStackBase&) const;

    MCNAPI void $setColor(::ItemStackBase&, ::mce::Color const&) const;

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

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI std::string $buildEffectDescriptionName(::ItemStackBase const&, bool) const;

    MCNAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCNAPI ::HashedString const& $getCooldownCategory() const;

    MCNAPI int $getCooldownDuration() const;

    MCNAPI ::SharedTypes::ItemCooldownType $getCooldownType() const;

    MCNAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;

    MCNAPI bool $shouldEmitInUseGameEvents() const;

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

    MCNAPI bool $canBeCharged() const;

    MCNAPI bool $_checkUseOnPermissions(::Actor&, ::ItemStackBase&, uchar const&, ::BlockPos const&) const;

    MCNAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    MCNAPI bool $_shouldAutoCalculatePlacePos() const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;

    MCNAPI bool $useVariant(int, int, bool) const;

    MCNAPI int $getVariant(int, int, bool) const;

    MCNAPI bool $shouldUseJsonForRenderMatrix() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
