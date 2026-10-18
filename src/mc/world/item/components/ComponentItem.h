#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Connector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/item/EnchantSlot.h"
#include "mc/deps/shared_types/item/ItemCooldownType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/world/item/Item.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemAcquisitionMethod.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class ListTag;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
class Player;
class SemVersion;
class Vec3;
struct ItemIconInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct ItemOnUseResult;
#else // @header-generator platform
#endif // @header-generator platform
struct LegacyEventItemComponentData;
struct ResolvedItemIconInfo;
struct SoundEventIdentifier;
namespace Bedrock::Safety { class RedactableString; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::Legacy { struct ComponentItemData; }
namespace SharedTypes::v1_21_60 { struct CustomComponentsItemComponent; }
namespace SharedTypes::v1_26_30 { struct ItemComponents; }
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_26_30 { struct ItemDocument; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class ComponentItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    bool                                                    mExcludeUserDataDiffCheck : 1;
    bool                                                    mCanDestroyInCreative     : 1;
    bool                                                    mRequiresInteract         : 1;
    bool                                                    mIsLiquidClipped          : 1;
    ::ll::TypedStorage<4, 4, float>                         mSpeed;
    ::ll::TypedStorage<4, 4, int>                           mDamage;
    ::ll::TypedStorage<4, 4, ::SharedTypes::EnchantSlot>    mEnchantSlot;
    ::ll::TypedStorage<4, 4, int>                           mEnchantValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mAlias;
    ::ll::TypedStorage<1, 1, bool>                          mIsAttachable;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::std::shared_ptr<::ItemComponent>>> mItemComponents;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IconItemComponent>>                         mIcon;
    ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockType const>>                                    mBlockTypeForRendering;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::shared_ptr<::ItemComponent>>>
                                                                                            mRegisteredCerealComponents;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>> mCtx;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItem();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ComponentItem();
#else // @header-generator platform
    virtual ~ComponentItem() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initServer(::SharedTypes::v1_26_30::ItemDocument&&, ::SemVersion const&, ::Experiments const&, std::optional<LegacyEventItemComponentData>);
#else // @header-generator platform
    virtual void initServer(
        ::SharedTypes::v1_26_30::ItemDocument&&         data,
        ::SemVersion const&                             documentVersion,
        ::Experiments const&                            experiments,
        ::std::optional<::LegacyEventItemComponentData> legacyEventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tearDown();
#else // @header-generator platform
    virtual void tearDown() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ComponentItem& setDescriptionId(std::string const&);
#else // @header-generator platform
    virtual bool isComponentBased() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getDescriptionId() const;
#else // @header-generator platform
    virtual bool isHumanoidArmor() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakPtr<const BlockType> const& getBlockTypeForRendering() const;
#else // @header-generator platform
    virtual bool isBlockPlanterItem() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isMusicDisk() const;
#else // @header-generator platform
    virtual bool isDamageable() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isComponentBased() const;
#else // @header-generator platform
    virtual bool isDyeable() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isHumanoidArmor() const;
#else // @header-generator platform
    virtual bool isFood() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isBlockPlanterItem() const;
#else // @header-generator platform
    virtual bool isThrowable() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDamageable() const;
#else // @header-generator platform
    virtual bool isUseable() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDyeable() const;
#else // @header-generator platform
    virtual bool isMusicDisk() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isFood() const;
#else // @header-generator platform
    virtual bool isTrimAllowed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isThrowable() const;
#else // @header-generator platform
    virtual ::WeakPtr<::BlockType const> const& getBlockTypeForRendering() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isUseable() const;
#else // @header-generator platform
    virtual ::ItemComponent* getComponent(::HashedString const& id) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTrimAllowed() const;
#else // @header-generator platform
    virtual ::IFoodItemComponent* getFood() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemComponent* getComponent(::HashedString const&) const;
#else // @header-generator platform
    virtual ::Item& setMaxDamage(int maxDamage) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IFoodItemComponent* getFood() const;
#else // @header-generator platform
    virtual ::std::string const& getDescriptionId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item& setMaxDamage(int);
#else // @header-generator platform
    virtual ::BlockShape getBlockShape() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CompoundTag> buildNetworkTag() const;
#else // @header-generator platform
    virtual bool canBeDepleted() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeFromNetwork(::CompoundTag const&);
#else // @header-generator platform
    virtual bool canDestroySpecial(::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> validateFromNetwork(::CompoundTag const&);
#else // @header-generator platform
    virtual int getLevelDataForAuxValue(int) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockShape getBlockShape() const;
#else // @header-generator platform
    virtual short getMaxDamage() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeDepleted() const;
#else // @header-generator platform
    virtual int getAttackDamage() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canDestroySpecial(::Block const&) const;
#else // @header-generator platform
    virtual bool isGlint(::ItemStackBase const& stack) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getLevelDataForAuxValue(int) const;
#else // @header-generator platform
    virtual bool canDestroyInCreative() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getMaxDamage() const;
#else // @header-generator platform
    virtual bool isDestructive(int) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAttackDamage() const;
#else // @header-generator platform
    virtual bool isLiquidClipItem() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isGlint(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool requiresInteract() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getSwingDuration() const;
#else // @header-generator platform
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canDestroyInCreative() const;
#else // @header-generator platform
    virtual bool
    isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDestructive(int) const;
#else // @header-generator platform
    virtual int getEnchantSlot() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLiquidClipItem() const;
#else // @header-generator platform
    virtual int getEnchantValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool requiresInteract() const;
#else // @header-generator platform
    virtual int getArmorValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    virtual int getDamageChance(int unbreaking) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;
#else // @header-generator platform
    virtual uint getSwingDuration() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getEnchantSlot() const;
#else // @header-generator platform
    virtual bool shouldEmitInUseGameEvents() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getEnchantValue() const;
#else // @header-generator platform
    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getArmorValue() const;
#else // @header-generator platform
    virtual bool hasCustomColor(::ItemStackBase const& instance) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<SoundEventIdentifier> getAttackMissSound() const;
#else // @header-generator platform
    virtual void clearColor(::ItemStackBase& instance) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<SoundEventIdentifier> getAttackHitSound() const;
#else // @header-generator platform
    virtual void setColor(::ItemStackBase& instance, ::mce::Color const& color) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<SoundEventIdentifier> getAttackCriticalHitSound() const;
#else // @header-generator platform
    virtual ::std::optional<::SoundEventIdentifier> getAttackMissSound() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;
#else // @header-generator platform
    virtual ::std::optional<::SoundEventIdentifier> getAttackHitSound() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getDamageChance(int) const;
#else // @header-generator platform
    virtual ::std::optional<::SoundEventIdentifier> getAttackCriticalHitSound() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;
#else // @header-generator platform
    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasCustomColor(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearColor(::ItemStackBase&) const;
#else // @header-generator platform
    virtual bool canUseAsAttack() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setColor(::ItemStackBase&, ::mce::Color const&) const;
#else // @header-generator platform
    virtual ::ItemStack& useAsAttack(::ItemStack& item, ::Player& player, ::Vec3 const& aimDirection) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    virtual ::Actor* createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      aimDirection
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUseAsAttack() const;
#else // @header-generator platform
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack& useAsAttack(::ItemStack&, ::Player&, ::Vec3 const&) const;
#else // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;
#else // @header-generator platform
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void releaseUsing(::ItemStack&, ::Player*, int) const;
#else // @header-generator platform
    virtual void hitActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getDestroySpeed(::ItemStackBase const&, ::Block const&) const;
#else // @header-generator platform
    virtual void hitBlock(::ItemStack& item, ::Block const& block, ::BlockPos const& blockPos, ::Mob& attacker) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hitActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack, bool playerIsCreative) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hitBlock(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&) const;
#else // @header-generator platform
    virtual uchar getMaxStackSize(::ItemDescriptor const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    virtual ::HashedString const& getCooldownCategory() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildEffectDescriptionName(::ItemStackBase const&, bool) const;
#else // @header-generator platform
    virtual int getCooldownDuration() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar getMaxStackSize(::ItemDescriptor const&) const;
#else // @header-generator platform
    virtual ::SharedTypes::ItemCooldownType getCooldownType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const /*override*/;
#endif // @header-generator platform

    virtual bool useVariant(int, int, bool) const;

    virtual int getVariant(int, int, bool) const;

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual void initClient(
        ::SharedTypes::v1_26_30::ItemDocument&& data,
        ::SemVersion const&                     documentVersion,
        ::Experiments const&                    experiments,
        ::std::optional<::ItemIconInfo> (*)(::std::string const&, int)
    ) /*override*/;

    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const /*override*/;

    virtual bool isEmissive(int auxValue) const /*override*/;

    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    virtual ::Item& setIconInfo(::std::string const& name, int frame) /*override*/;

    virtual bool canBeCharged() const /*override*/;

    virtual ::ComponentItem& setDescriptionId(::std::string const& descriptionId) /*override*/;

#endif // @header-generator platform
    virtual bool shouldUseJsonForRenderMatrix() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag() const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& tag) /*override*/;

    virtual ::std::vector<::std::string> validateFromNetwork(::CompoundTag const& tag) /*override*/;

    virtual bool
    _checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const
        /*override*/;

    virtual bool _calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const
        /*override*/;

    virtual bool _shouldAutoCalculatePlacePos() const /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ComponentItem(std::string const&, short, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI ComponentItem(::std::string const& nameId, short id, ::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _initializeLoadedComponents(
        ::std::optional<::SemVersion>  documentVersion,
        ::std::optional<::Experiments> _experiments
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(int&, ItemStack&, Actor&, Mob&)>& onBeforeDurabilityDamage();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(ItemStack&, Actor&, Mob&)>& onHitActor();
#else // @header-generator platform
    MCAPI float getMovementModifier() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void init(
        ::SharedTypes::v1_26_30::ItemDocument&&         data,
        ::SemVersion const&                             documentVersion,
        ::std::optional<::LegacyEventItemComponentData> legacyEventData,
        ::Experiments const&                            experiments
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void registerItemComponentTypes(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void registerItemComponentTypes(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::tuple<
        SemVersion,
        rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>,
#else // @header-generator platform
    MCAPI static ::std::tuple<
        ::SemVersion,
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>,
#endif // @header-generator platform
        bool>
#if defined(LL_PLAT_A) // @header-generator platform
    upgradeJson(::cereal::ReflectionCtx const&, std::string_view const, bool const, std::optional<SemVersion>);
#else // @header-generator platform
    upgradeJson(
        ::cereal::ReflectionCtx const& ctx,
        ::std::string_view             document,
        bool                           betaApis,
        ::std::optional<::SemVersion>  minVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, short, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& nameId, short id, ::cereal::ReflectionCtx const& ctx);
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
    MCNAPI ::ComponentItem& $setDescriptionId(std::string const&);
#else // @header-generator platform
    MCFOLD bool $isComponentBased() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getDescriptionId() const;
#else // @header-generator platform
    MCAPI bool $isHumanoidArmor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<const BlockType> const& $getBlockTypeForRendering() const;
#else // @header-generator platform
    MCAPI bool $isBlockPlanterItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isMusicDisk() const;
#else // @header-generator platform
    MCAPI bool $isDamageable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isComponentBased() const;
#else // @header-generator platform
    MCAPI bool $isDyeable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isHumanoidArmor() const;
#else // @header-generator platform
    MCFOLD bool $isFood() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBlockPlanterItem() const;
#else // @header-generator platform
    MCAPI bool $isThrowable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDamageable() const;
#else // @header-generator platform
    MCAPI bool $isUseable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDyeable() const;
#else // @header-generator platform
    MCAPI bool $isMusicDisk() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFood() const;
#else // @header-generator platform
    MCAPI bool $isTrimAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isThrowable() const;
#else // @header-generator platform
    MCAPI ::WeakPtr<::BlockType const> const& $getBlockTypeForRendering() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isUseable() const;
#else // @header-generator platform
    MCAPI ::ItemComponent* $getComponent(::HashedString const& id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTrimAllowed() const;
#else // @header-generator platform
    MCAPI ::IFoodItemComponent* $getFood() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemComponent* $getComponent(::HashedString const&) const;
#else // @header-generator platform
    MCAPI ::Item& $setMaxDamage(int maxDamage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IFoodItemComponent* $getFood() const;
#else // @header-generator platform
    MCAPI ::std::string const& $getDescriptionId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& $setMaxDamage(int);
#else // @header-generator platform
    MCFOLD ::BlockShape $getBlockShape() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag() const;
#else // @header-generator platform
    MCAPI bool $canBeDepleted() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeFromNetwork(::CompoundTag const&);
#else // @header-generator platform
    MCAPI bool $canDestroySpecial(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $validateFromNetwork(::CompoundTag const&);
#else // @header-generator platform
    MCFOLD int $getLevelDataForAuxValue(int) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockShape $getBlockShape() const;
#else // @header-generator platform
    MCAPI short $getMaxDamage() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeDepleted() const;
#else // @header-generator platform
    MCFOLD int $getAttackDamage() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canDestroySpecial(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getLevelDataForAuxValue(int) const;
#else // @header-generator platform
    MCAPI bool $canDestroyInCreative() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short $getMaxDamage() const;
#else // @header-generator platform
    MCFOLD bool $isDestructive(int) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAttackDamage() const;
#else // @header-generator platform
    MCAPI bool $isLiquidClipItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isGlint(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI bool $requiresInteract() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getSwingDuration() const;
#else // @header-generator platform
    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canDestroyInCreative() const;
#else // @header-generator platform
    MCAPI bool
    $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDestructive(int) const;
#else // @header-generator platform
    MCAPI int $getEnchantSlot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLiquidClipItem() const;
#else // @header-generator platform
    MCFOLD int $getEnchantValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $requiresInteract() const;
#else // @header-generator platform
    MCAPI int $getArmorValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    MCAPI int $getDamageChance(int unbreaking) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;
#else // @header-generator platform
    MCAPI uint $getSwingDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEnchantSlot() const;
#else // @header-generator platform
    MCAPI bool $shouldEmitInUseGameEvents() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEnchantValue() const;
#else // @header-generator platform
    MCAPI ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getArmorValue() const;
#else // @header-generator platform
    MCAPI bool $hasCustomColor(::ItemStackBase const& instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<SoundEventIdentifier> $getAttackMissSound() const;
#else // @header-generator platform
    MCAPI void $clearColor(::ItemStackBase& instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<SoundEventIdentifier> $getAttackHitSound() const;
#else // @header-generator platform
    MCAPI void $setColor(::ItemStackBase& instance, ::mce::Color const& color) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<SoundEventIdentifier> $getAttackCriticalHitSound() const;
#else // @header-generator platform
    MCAPI ::std::optional<::SoundEventIdentifier> $getAttackMissSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;
#else // @header-generator platform
    MCAPI ::std::optional<::SoundEventIdentifier> $getAttackHitSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDamageChance(int) const;
#else // @header-generator platform
    MCAPI ::std::optional<::SoundEventIdentifier> $getAttackCriticalHitSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasCustomColor(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearColor(::ItemStackBase&) const;
#else // @header-generator platform
    MCAPI bool $canUseAsAttack() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setColor(::ItemStackBase&, ::mce::Color const&) const;
#else // @header-generator platform
    MCAPI ::ItemStack& $useAsAttack(::ItemStack& item, ::Player& player, ::Vec3 const& aimDirection) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    MCAPI ::Actor* $createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      aimDirection
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUseAsAttack() const;
#else // @header-generator platform
    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack& $useAsAttack(::ItemStack&, ::Player&, ::Vec3 const&) const;
#else // @header-generator platform
    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* $createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;
#else // @header-generator platform
    MCAPI void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    MCAPI float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    MCAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $releaseUsing(::ItemStack&, ::Player*, int) const;
#else // @header-generator platform
    MCAPI void $hitActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getDestroySpeed(::ItemStackBase const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI void $hitBlock(::ItemStack& item, ::Block const& block, ::BlockPos const& blockPos, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hitActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack, bool playerIsCreative) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hitBlock(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&) const;
#else // @header-generator platform
    MCFOLD uchar $getMaxStackSize(::ItemDescriptor const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI ::HashedString const& $getCooldownCategory() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildEffectDescriptionName(::ItemStackBase const&, bool) const;
#else // @header-generator platform
    MCAPI int $getCooldownDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::ItemCooldownType $getCooldownType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& $getCooldownCategory() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getCooldownDuration() const;
#else // @header-generator platform
    MCFOLD bool $useVariant(int, int, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::ItemCooldownType $getCooldownType() const;
#else // @header-generator platform
    MCFOLD int $getVariant(int, int, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;

    MCNAPI bool $shouldEmitInUseGameEvents() const;

    MCNAPI void $initClient(
        ::SharedTypes::v1_26_30::ItemDocument&&,
        ::SemVersion const&,
        ::Experiments const&,
        std::optional<ItemIconInfo> (*)(std::string const&, int)
#else // @header-generator platform
    MCAPI void $initClient(
        ::SharedTypes::v1_26_30::ItemDocument&& data,
        ::SemVersion const&                     documentVersion,
        ::Experiments const&                    experiments,
        ::std::optional<::ItemIconInfo> (*)(::std::string const&, int)
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& $setIconInfo(std::string const&, int);
#else // @header-generator platform
    MCAPI ::std::string $getInteractText(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
#else // @header-generator platform
    MCFOLD int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getInteractText(::Player const&) const;
#else // @header-generator platform
    MCFOLD bool $isEmissive(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
#else // @header-generator platform
    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isEmissive(int) const;
#else // @header-generator platform
    MCAPI ::Item& $setIconInfo(::std::string const& name, int frame);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeCharged() const;
#else // @header-generator platform
    MCAPI bool $canBeCharged() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_checkUseOnPermissions(::Actor&, ::ItemStackBase&, uchar const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::ComponentItem& $setDescriptionId(::std::string const& descriptionId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;
#else // @header-generator platform
    MCAPI bool $shouldUseJsonForRenderMatrix() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_shouldAutoCalculatePlacePos() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
#else // @header-generator platform
    MCAPI void $initializeFromNetwork(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useVariant(int, int, bool) const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> $validateFromNetwork(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getVariant(int, int, bool) const;
#else // @header-generator platform
    MCFOLD bool
    $_checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldUseJsonForRenderMatrix() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $_calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI bool $_shouldAutoCalculatePlacePos() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


#endif // @header-generator platform
    // NOLINTEND
};
