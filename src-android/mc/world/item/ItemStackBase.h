#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/shared_types/item/ItemCooldownType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/world/item/Rarity.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPalette;
class BlockSource;
class BlockType;
class ComponentItem;
class CompoundTag;
class ContainerComponent;
class DynamicProperties;
class HashedString;
class IDataInput;
class IDataOutput;
class ILevel;
class Item;
class ItemComponent;
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class Level;
class NetworkItemStackDescriptor;
class Player;
class RecipeIngredient;
class RenderParams;
class SaveContext;
class Vec3;
struct ItemTag;
struct ResolvedItemIconInfo;
struct SoundEventIdentifier;
namespace Bedrock::Safety { class RedactableString; }
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ItemStackBase {
public:
    // ItemStackBase inner types declare
    // clang-format off
    struct ComparisonOptions;
    // clang-format on

    // ItemStackBase inner types define
    struct ComparisonOptions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mCompareAux;
        ::ll::TypedStorage<1, 1, bool> mCompareRelevantUserData;
        ::ll::TypedStorage<1, 1, bool> mCompareDamage;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 8> mItem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mUserData;
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    ::ll::TypedStorage<2, 2, short> mAuxValue;
    ::ll::TypedStorage<1, 1, uchar> mCount;
    ::ll::TypedStorage<1, 1, bool> mValid_DeprecatedSeeComment;
    ::ll::TypedStorage<1, 1, bool> mShowPickUp;
    ::ll::TypedStorage<1, 1, bool> mWasPickedUp;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mPickupTime;
    ::ll::TypedStorage<8, 24, std::vector<const BlockType*>> mCanPlaceOn;
    ::ll::TypedStorage<8, 8, ulong> mCanPlaceOnHash;
    ::ll::TypedStorage<8, 24, std::vector<const BlockType*>> mCanDestroy;
    ::ll::TypedStorage<8, 8, ulong> mCanDestroyHash;
    ::ll::TypedStorage<8, 8, ::Tick> mBlockingTick;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemInstance>> mChargedItem;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackBase();

    virtual void reinit(std::string_view const, int, int);

    virtual void reinit(::Block const&, int);

    virtual void reinit(::Item const&, int, int);

    virtual void setNull(std::optional<std::string>);

    virtual std::string toString() const;

    virtual std::string toDebugString() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackBase();

    MCNAPI ItemStackBase(::ItemStackBase const&);

    MCNAPI explicit ItemStackBase(::RecipeIngredient const&);

    MCNAPI ItemStackBase(::Block const&, int, ::CompoundTag const*);

    MCNAPI ItemStackBase(std::string_view, int, int, ::CompoundTag const*);

    MCNAPI ItemStackBase(::Item const&, int, int, ::CompoundTag const*);

    MCNAPI void _addCustomUserDataCommon(std::unique_ptr<CompoundTag>&&);

    MCNAPI void _checkForItemWorldCompatibility();

    MCNAPI std::string _getHoverFormattingPrefix() const;

    MCNAPI bool _hasFullOrPartialTag(::HashedString const&) const;

    MCNAPI bool _isInstance(std::string_view const) const;

    MCNAPI void _loadItem(::CompoundTag const&);

    MCNAPI void _setChargedItem(::ItemInstance const&);

    MCNAPI bool _setItem(int, bool);

    MCNAPI void _updateCompareHashes();

    MCNAPI void add(int const);

    MCNAPI bool addComponents(::Json::Value const&, std::string&);

    MCNAPI void addCustomUserData(::ContainerComponent const&);

    MCNAPI void addCustomUserData(::BlockActor&, ::BlockSource&);

    MCNAPI bool canBeCharged() const;

    MCNAPI bool canDestroy(::Block const*) const;

    MCNAPI bool canDestroySpecial(::Block const&) const;

    MCNAPI bool canPlaceOn(::Block const*) const;

    MCNAPI bool clearAllDynamicProperties(std::string const&);

    MCNAPI void clearChargedItem();

    MCNAPI void clearCustomLore();

    MCNAPI bool componentsMatch(::ItemStackBase const&) const;

    MCNAPI ::ItemEnchants constructItemEnchantsFromUserData() const;

    MCNAPI void deserializeComponents(::IDataInput&);

    MCNAPI ::SharedTypes::Legacy::ArmorSlot getArmorSlot() const;

    MCNAPI std::optional<SoundEventIdentifier> getAttackCriticalHitSound() const;

    MCNAPI int getAttackDamage() const;

    MCNAPI float getAttackDamageBonus(::Actor const&) const;

    MCNAPI std::optional<SoundEventIdentifier> getAttackHitSound() const;

    MCNAPI std::optional<SoundEventIdentifier> getAttackMissSound() const;

    MCNAPI short getAuxValue() const;

    MCNAPI int getBaseRepairCost() const;

    MCNAPI ::Block const* getBlock() const;

    MCNAPI ::Block const* getBlockForRendering() const;

    MCNAPI ::WeakPtr<const BlockType> const& getBlockType() const;

    MCNAPI ::WeakPtr<const BlockType> const& getBlockTypeForRendering() const;

    MCNAPI ::Tick const& getBlockingTick() const;

    MCNAPI std::vector<const BlockType*> const& getCanDestroy() const;

    MCNAPI std::vector<const BlockType*> const& getCanPlaceOn() const;

    MCNAPI std::string getCategoryName() const;

    MCNAPI ::ItemInstance const& getChargedItem() const;

    MCNAPI ::mce::Color getColor() const;

    MCNAPI ::ItemComponent const* getComponent(::HashedString const&) const;

    MCNAPI ::ComponentItem const* getComponentItem() const;

    MCNAPI std::vector<std::string> getCustomLore() const;

    MCNAPI std::string getCustomName() const;

    MCNAPI short getDamageValue() const;

    MCNAPI std::string getDescriptionId() const;

    MCNAPI ::ItemDescriptor getDescriptor() const;

    MCNAPI std::unique_ptr<DynamicProperties> getDynamicProperties() const;

    MCNAPI std::optional<std::variant<double, float, bool, std::string, Vec3>>
           getDynamicProperty(std::string const&, std::string const&) const;

    MCNAPI std::string getEffectName(bool const) const;

    MCNAPI int getEnchantSlot() const;

    MCNAPI int getEnchantValue() const;

    MCNAPI ::Bedrock::Safety::RedactableString getFormattedHovertext(::Level&, bool const) const;

    MCNAPI ::HashedString const& getFullNameHash() const;

    MCNAPI std::string getHoverName() const;

    MCNAPI ::ResolvedItemIconInfo getIconInfo(int, bool) const;

    MCNAPI short getId() const;

    MCNAPI int getIdAux() const;

    MCNAPI int getIdAuxEnchanted() const;

    MCNAPI bool getIsValidPickupTime() const;

    MCNAPI ::Item const* getItem() const;

    MCNAPI short getMaxDamage() const;

    MCNAPI uchar getMaxStackSize() const;

    MCNAPI std::string getName() const;

    MCNAPI float getPickupPopPercentage() const;

    MCNAPI
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        getPickupTime() const;

    MCNAPI ::HashedString const& getRawNameHash() const;

    MCNAPI std::string getRawNameId() const;

    MCNAPI ::Bedrock::Safety::RedactableString getRedactedCustomName() const;

    MCNAPI ::Bedrock::Safety::RedactableString getRedactedHoverName() const;

    MCNAPI ::Bedrock::Safety::RedactableString getRedactedName() const;

    MCNAPI ::HashedString const& getRendererId() const;

    MCNAPI ::BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCNAPI uint getSwingDuration() const;

    MCNAPI ::SharedTypes::Legacy::UseAnimation getUseAnimation() const;

    MCNAPI ::CompoundTag const* getUserData() const;

    MCNAPI ::CompoundTag* getUserData();

    MCNAPI bool getWasPickedUp() const;

    MCNAPI bool hasChargedItem() const;

    MCNAPI bool hasComponent(std::string const&) const;

    MCNAPI bool hasCompoundTextUserData() const;

    MCNAPI bool hasContainerData() const;

    MCNAPI bool hasCooldown() const;

    MCNAPI bool hasCustomHoverName() const;

    MCNAPI bool hasDamageValue() const;

    MCNAPI bool hasDurability() const;

    MCNAPI bool hasSameAuxValue(::ItemStackBase const&) const;

    MCNAPI bool hasSameUserData(::ItemStackBase const&) const;

    MCNAPI bool hasTag(::ItemTag const&) const;

    MCNAPI bool hasTag(ulong const&) const;

    MCNAPI bool hasUserData() const;

    MCNAPI bool hurtAndBreak(int, ::Actor*);

    MCNAPI void init(::BlockType const&, int);

    MCNAPI void init(int, int, int, bool);

    MCNAPI void init(::Item const&, int, int, ::CompoundTag const*, bool);

    MCNAPI bool isArmorItem() const;

    MCNAPI bool isAttachableEquipment() const;

    MCNAPI bool isBlock() const;

    MCNAPI bool isBlockInstance(::HashedString const&) const;

    MCNAPI bool isDamageableItem() const;

    MCNAPI bool isDamaged() const;

    MCNAPI bool isEnchanted() const;

    MCNAPI bool isEnchantingBook() const;

    MCNAPI bool isExplodable() const;

    MCNAPI bool isFireResistant() const;

    MCNAPI bool isFullStack() const;

    MCNAPI bool isGlint() const;

    MCNAPI bool isHorseArmorItem() const;

    MCNAPI bool isHumanoidArmorItem() const;

    MCNAPI bool isHumanoidWearableBlockItem() const;

    MCNAPI bool isHumanoidWearableItem() const;

    MCNAPI bool isInstance(::HashedString const&, bool) const;

    MCNAPI bool isLiquidClipItem() const;

    MCNAPI bool isMusicDiscItem() const;

    MCNAPI bool isNull() const;

    MCNAPI bool isOffhandItem() const;

    MCNAPI bool isOnCooldown(::Player&, ::SharedTypes::ItemCooldownType) const;

    MCNAPI bool isOneOfBlockInstances(std::initializer_list<std::reference_wrapper<const HashedString>>) const;

    MCNAPI bool isOneOfBlockInstances(std::vector<std::reference_wrapper<const HashedString>> const&) const;

    MCNAPI bool isOneOfInstances(std::initializer_list<std::reference_wrapper<const HashedString>>, bool) const;

    MCNAPI bool isPattern() const;

    MCNAPI bool isPotionItem() const;

    MCNAPI bool isStackable() const;

    MCNAPI bool isStackable(::ItemStackBase const&) const;

    MCNAPI bool isStackedByData() const;

    MCNAPI bool isThrowable() const;

    MCNAPI bool isTransparentAttachable() const;

    MCNAPI bool isUnbreakable() const;

    MCNAPI bool isUseable() const;

    MCNAPI bool isValidAuxValue(int) const;

    MCNAPI void load(::CompoundTag const&);

    MCNAPI void load(::CompoundTag const&, ::ILevel&);

    MCNAPI bool matches(::ItemStackBase const&) const;

    MCNAPI bool matchesEitherWearableCase(::CompoundTag const*) const;

    MCNAPI bool matchesItem(::ItemStackBase const&) const;

    MCNAPI explicit operator bool() const;

    MCNAPI bool operator!=(::ItemStackBase const&) const;

    MCNAPI ::ItemStackBase& operator=(::ItemStackBase const&);

    MCNAPI bool operator==(::ItemStackBase const&) const;

    MCNAPI void refreshedInContainer(::Level&) const;

    MCNAPI void remove(int const);

    MCNAPI void removeDamageValue();

    MCNAPI bool removeDynamicProperty(std::string const&, std::string const&);

    MCNAPI void removeEnchants();

    MCNAPI void resetHoverName();

    MCNAPI bool sameItem(::ItemStackBase const&, ::ItemStackBase::ComparisonOptions const&) const;

    MCNAPI bool sameItemAndAux(::ItemStackBase const&) const;

    MCNAPI std::unique_ptr<CompoundTag> save(::SaveContext const&) const;

    MCNAPI void saveEnchantsToUserData(::ItemEnchants const&);

    MCNAPI void serializeComponents(::IDataOutput&) const;

    MCNAPI void set(int const);

    MCNAPI void setAuxValue(short);

    MCNAPI void setBlock(::Block const*);

    MCNAPI void setBlockingTick(::Tick);

    MCNAPI bool setCanDestroy(std::vector<std::string> const&);

    MCNAPI bool setCanPlaceOn(std::vector<std::string> const&);

    MCNAPI void setChargedItem(::ItemInstance const&, bool);

    MCNAPI void setCustomLore(std::vector<std::string> const&);

    MCNAPI void setCustomName(::Bedrock::Safety::RedactableString const&);

    MCNAPI void setDamageValue(short);

    MCNAPI void setDynamicProperty(
        std::string const&,
        std::variant<double, float, bool, std::string, Vec3> const&,
        std::string const&
    );

    MCNAPI void setJustBrewed(bool);

    MCNAPI void setPickupTime();

    MCNAPI void setPickupTime(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void setRepairCost(int);

    MCNAPI void setShowPickUp(bool);

    MCNAPI void setUnbreakable(bool);

    MCNAPI void setUserData(std::unique_ptr<CompoundTag>);

    MCNAPI void setWasPickedUp(bool);

    MCNAPI bool shouldInteractionWithBlockBypassLiquid(::Block const&) const;

    MCNAPI bool shouldVanish() const;

    MCNAPI bool showPickUp() const;

    MCNAPI bool showsDurabilityInCreative() const;

    MCNAPI void startCooldown(::Player&, ::SharedTypes::ItemCooldownType) const;

    MCNAPI bool wasJustBrewed() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _loadBlocksForCanPlaceOnCanDestroy(std::vector<const BlockType*>&, std::string const&);

    MCNAPI static void loadItemStacksFromDescriptor(
        std::vector<ItemStack>&,
        std::vector<NetworkItemStackDescriptor> const&,
        ::BlockPalette&,
        bool
    );

    MCNAPI static int retrieveAuxValFromIDAux(int);

    MCNAPI static bool retrieveEnchantFromIDAux(int);

    MCNAPI static short retrieveIDFromIDAux(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ItemStackBase::ComparisonOptions const& COMPARISONOPTIONS_AUXANDRELEVANTUSERDATA();

    MCNAPI static ::ItemStackBase::ComparisonOptions const& COMPARISONOPTIONS_RELEVANTUSERDATA();

    MCNAPI static std::string const& TAG_CAN_DESTROY();

    MCNAPI static std::string const& TAG_CAN_PLACE_ON();

    MCNAPI static std::string const& TAG_CHARGED_ITEM();

    MCNAPI static std::string const& TAG_DISPLAY();

    MCNAPI static std::string const& TAG_DISPLAY_FILTERED_NAME();

    MCNAPI static std::string const& TAG_DISPLAY_NAME();

    MCNAPI static std::string const& TAG_ENCHANTS();

    MCNAPI static std::string const& TAG_LORE();

    MCNAPI static std::string const& TAG_REPAIR_COST();

    MCNAPI static std::string const& TAG_STORE_CAN_DESTROY();

    MCNAPI static std::string const& TAG_STORE_CAN_PLACE_ON();

    MCNAPI static std::string const& TAG_UNBREAKABLE();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000>> const& sPickupPopDuration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ItemStackBase const&);

    MCNAPI void* $ctor(::RecipeIngredient const&);

    MCNAPI void* $ctor(::Block const&, int, ::CompoundTag const*);

    MCNAPI void* $ctor(std::string_view, int, int, ::CompoundTag const*);

    MCNAPI void* $ctor(::Item const&, int, int, ::CompoundTag const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reinit(std::string_view const, int, int);

    MCNAPI void $reinit(::Block const&, int);

    MCNAPI void $reinit(::Item const&, int, int);

    MCNAPI void $setNull(std::optional<std::string>);

    MCNAPI std::string $toString() const;

    MCNAPI std::string $toDebugString() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
