#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/Tick.h"

class IDataInput;
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/shared_types/item/ItemCooldownType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/world/item/Rarity.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class BaseGameVersion;
#else // @header-generator platform
#endif // @header-generator platform
class Block;
class BlockActor;
class BlockPalette;
class BlockSource;
class BlockType;
#if defined(LL_PLAT_A) // @header-generator platform
class ComponentItem;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class ContainerComponent;
class DynamicProperties;
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
class IDataInput;
#else // @header-generator platform
#endif // @header-generator platform
class IDataOutput;
#if defined(LL_PLAT_A) // @header-generator platform
class ILevel;
#else // @header-generator platform
#endif // @header-generator platform
class Item;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemComponent;
#else // @header-generator platform
#endif // @header-generator platform
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class Level;
class NetworkItemStackDescriptor;
class Player;
class RecipeIngredient;
#if defined(LL_PLAT_A) // @header-generator platform
class RenderParams;
#else // @header-generator platform
#endif // @header-generator platform
class SaveContext;
class Vec3;
struct ItemTag;
#if defined(LL_PLAT_A) // @header-generator platform
struct ResolvedItemIconInfo;
struct SoundEventIdentifier;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLNDAPI std::string getTypeName() const;
    LLNDAPI std::string getDescriptionName() const;
    LLNDAPI bool        isEnchanted() const;
    LLNDAPI bool        removeEnchants() const;
    LLAPI void          deserializeComponents(IDataInput& input);
    LLAPI bool          operator==(ItemStackBase const& other) const;
    LLNDAPI short       getId() const;
    LLNDAPI short       getAuxValue() const;
    LLAPI void          setDamageValue(short newDamage);
    inline void         add(int count) { set(mCount + count); }
    inline void         remove(int count) { set(mCount - count); }


public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::WeakPtr<::Item>                       mItem;
    ::std::unique_ptr<::CompoundTag>        mUserData;
    ::Block const*                          mBlock;
    short                                   mAuxValue;
    uchar                                   mCount;
    bool                                    mValid_DeprecatedSeeComment;
    bool                                    mShowPickUp;
    bool                                    mWasPickedUp;
    ::std::chrono::steady_clock::time_point mPickupTime;
    ::std::vector<::BlockType const*>       mCanPlaceOn;
    uint64                                  mCanPlaceOnHash;
    ::std::vector<::BlockType const*>       mCanDestroy;
    uint64                                  mCanDestroyHash;
    ::Tick                                  mBlockingTick;
    ::std::unique_ptr<::ItemInstance>       mChargedItem;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemStackBase();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackBase();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reinit(std::string_view const, int, int);
#else // @header-generator platform
    virtual void reinit(::Item const& item, int count, int auxValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reinit(::Block const&, int);
#else // @header-generator platform
    virtual void reinit(::Block const& block, int count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reinit(::Item const&, int, int);
#else // @header-generator platform
    virtual void reinit(::std::string_view const name, int count, int auxValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setNull(std::optional<std::string>);
#else // @header-generator platform
    virtual void setNull(::std::optional<::std::string> reason);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toString() const;
#else // @header-generator platform
    virtual ::std::string toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toDebugString() const;
#else // @header-generator platform
    virtual ::std::string toDebugString() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackBase();
#else // @header-generator platform
    MCAPI explicit ItemStackBase(::RecipeIngredient const& ingredient);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackBase(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI ItemStackBase(::ItemStackBase const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemStackBase(::RecipeIngredient const&);
#else // @header-generator platform
    MCAPI ItemStackBase(::Block const& block, int count = 1, ::CompoundTag const* _userData = nullptr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackBase(::Block const&, int, ::CompoundTag const*);
#else // @header-generator platform
    MCAPI ItemStackBase(::Item const& item, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackBase(std::string_view, int, int, ::CompoundTag const*);
#else // @header-generator platform
    MCAPI
    ItemStackBase(::std::string_view name, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackBase(::Item const&, int, int, ::CompoundTag const*);
#else // @header-generator platform
    MCAPI void _addCustomUserDataCommon(::std::unique_ptr<::CompoundTag>&& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addCustomUserDataCommon(std::unique_ptr<CompoundTag>&&);
#else // @header-generator platform
    MCAPI void _checkForItemWorldCompatibility();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _checkForItemWorldCompatibility();
#else // @header-generator platform
    MCAPI void _cloneComponents(::ItemStackBase const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _getHoverFormattingPrefix() const;
#else // @header-generator platform
    MCAPI ::std::string _getHoverFormattingPrefix() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _hasFullOrPartialTag(::HashedString const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _hasFullOrPartialTag(::HashedString const& string) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isInstance(std::string_view const) const;
#else // @header-generator platform
    MCAPI bool _isInstance(::std::string_view itemName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _loadItem(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void _loadItem(::CompoundTag const& compoundTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setChargedItem(::ItemInstance const&);
#else // @header-generator platform
    MCAPI void _setChargedItem(::ItemInstance const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _setItem(int, bool);
#else // @header-generator platform
    MCAPI bool _setItem(int id, bool doRemap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateCompareHashes();
#else // @header-generator platform
    MCAPI void _updateCompareHashes();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(int const);
#else // @header-generator platform
    MCAPI bool addComponents(::Json::Value const& root, ::std::string& errorMsg);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addComponents(::Json::Value const&, std::string&);
#else // @header-generator platform
    MCAPI void addCustomUserData(::ContainerComponent const& containerComponent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCustomUserData(::ContainerComponent const&);
#else // @header-generator platform
    MCAPI void addCustomUserData(::BlockActor& blockEntity, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCustomUserData(::BlockActor&, ::BlockSource&);
#else // @header-generator platform
    MCAPI void clearCustomLore();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canBeCharged() const;
#else // @header-generator platform
    MCAPI ::ItemEnchants constructItemEnchantsFromUserData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canDestroy(::Block const*) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::ArmorSlot getArmorSlot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canDestroySpecial(::Block const&) const;
#else // @header-generator platform
    MCAPI int getBaseRepairCost() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canPlaceOn(::Block const*) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Block const* getBlockForRendering() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool clearAllDynamicProperties(std::string const&);
#else // @header-generator platform
    MCAPI ::WeakPtr<::BlockType const> const& getBlockType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearChargedItem();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::WeakPtr<::BlockType const> const& getBlockTypeForRendering() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearCustomLore();
#else // @header-generator platform
    MCAPI ::mce::Color getColor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool componentsMatch(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> getCustomLore() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemEnchants constructItemEnchantsFromUserData() const;
#else // @header-generator platform
    MCAPI ::std::string getCustomName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void deserializeComponents(::IDataInput&);
#else // @header-generator platform
    MCAPI short getDamageValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ArmorSlot getArmorSlot() const;
#else // @header-generator platform
    MCAPI ::std::string getDescriptionId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<SoundEventIdentifier> getAttackCriticalHitSound() const;
#else // @header-generator platform
    MCAPI ::ItemDescriptor getDescriptor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getAttackDamage() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::DynamicProperties> getDynamicProperties() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getAttackDamageBonus(::Actor const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>
    getDynamicProperty(::std::string const& key, ::std::string const& collectionName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<SoundEventIdentifier> getAttackHitSound() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Safety::RedactableString getFormattedHovertext(::Level& level, bool showCategory) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<SoundEventIdentifier> getAttackMissSound() const;
#else // @header-generator platform
    MCAPI ::HashedString const& getFullNameHash() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short getAuxValue() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getHoverName() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getBaseRepairCost() const;
#else // @header-generator platform
    MCAPI int getIdAux() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* getBlock() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI int getIdAuxEnchanted() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* getBlockForRendering() const;
#else // @header-generator platform
    MCAPI uchar getMaxStackSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<const BlockType> const& getBlockType() const;
#else // @header-generator platform
    MCAPI ::std::string getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<const BlockType> const& getBlockTypeForRendering() const;
#else // @header-generator platform
    MCAPI float getPickupPopPercentage() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Tick const& getBlockingTick() const;
#else // @header-generator platform
    MCAPI ::HashedString const& getRawNameHash() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<const BlockType*> const& getCanDestroy() const;
#else // @header-generator platform
    MCAPI ::std::string getRawNameId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<const BlockType*> const& getCanPlaceOn() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString getRedactedCustomName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getCategoryName() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString getRedactedHoverName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance const& getChargedItem() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString getRedactedName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color getColor() const;
#else // @header-generator platform
    MCAPI bool hasChargedItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemComponent const* getComponent(::HashedString const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool hasComponent(::std::string const& name) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ComponentItem const* getComponentItem() const;
#else // @header-generator platform
    MCAPI bool hasSameAuxValue(::ItemStackBase const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getCustomLore() const;
#else // @header-generator platform
    MCAPI bool hasSameUserData(::ItemStackBase const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getCustomName() const;
#else // @header-generator platform
    MCAPI bool hasTag(::ItemTag const& string) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short getDamageValue() const;
#else // @header-generator platform
    MCAPI bool hurtAndBreak(int deltaDamage, ::Actor* owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getDescriptionId() const;
#else // @header-generator platform
    MCAPI void init(int id, int count_, int aux_, bool doRemap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemDescriptor getDescriptor() const;
#else // @header-generator platform
    MCAPI void init(::Item const& item, int count, int auxValue, ::CompoundTag const* userData, bool doRemap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<DynamicProperties> getDynamicProperties() const;
#else // @header-generator platform
    MCAPI bool isArmorItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::variant<double, float, bool, std::string, Vec3>>
           getDynamicProperty(std::string const&, std::string const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool isAttachableEquipment() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getEffectName(bool const) const;
#else // @header-generator platform
    MCAPI bool isDamageableItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getEnchantSlot() const;
#else // @header-generator platform
    MCAPI bool isDamaged() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getEnchantValue() const;
#else // @header-generator platform
    MCAPI bool isEnchantingBook() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString getFormattedHovertext(::Level&, bool const) const;
#else // @header-generator platform
    MCAPI bool isFullStack() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& getFullNameHash() const;
#else // @header-generator platform
    MCAPI bool isHorseArmorItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getHoverName() const;
#else // @header-generator platform
    MCAPI bool isHumanoidWearableBlockItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResolvedItemIconInfo getIconInfo(int, bool) const;
#else // @header-generator platform
    MCAPI bool isInstance(::HashedString const& itemName, bool useItemLookup) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short getId() const;
#else // @header-generator platform
    MCAPI bool isNull() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getIdAux() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool isOnCooldown(::Player& player, ::SharedTypes::ItemCooldownType type) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getIdAuxEnchanted() const;
#else // @header-generator platform
    MCAPI bool
    isOneOfBlockInstances(::std::vector<::std::reference_wrapper<::HashedString const>> const& blockTypeIds) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIsValidPickupTime() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool
    isOneOfBlockInstances(::std::initializer_list<::std::reference_wrapper<::HashedString const>> blocks) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item const* getItem() const;
#else // @header-generator platform
    MCAPI bool isOneOfInstances(
        ::std::initializer_list<::std::reference_wrapper<::HashedString const>> items,
        bool                                                                    useItemLookup
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short getMaxDamage() const;
#else // @header-generator platform
    MCAPI bool isPotionItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar getMaxStackSize() const;
#else // @header-generator platform
    MCAPI bool isStackable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getName() const;
#else // @header-generator platform
    MCAPI bool isStackable(::ItemStackBase const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getPickupPopPercentage() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool isTransparentAttachable() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        getPickupTime() const;
#else // @header-generator platform
    MCAPI bool matchesEitherWearableCase(::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& getRawNameHash() const;
#else // @header-generator platform
    MCAPI bool matchesItem(::ItemStackBase const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getRawNameId() const;
#else // @header-generator platform
    MCAPI explicit operator bool() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString getRedactedCustomName() const;
#else // @header-generator platform
    MCAPI ::ItemStackBase& operator=(::ItemStackBase const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString getRedactedHoverName() const;
#else // @header-generator platform
    MCAPI void resetHoverName();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString getRedactedName() const;
#else // @header-generator platform
    MCAPI bool sameItem(::ItemStackBase const& other, ::ItemStackBase::ComparisonOptions const& options) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& getRendererId() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> save(::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseGameVersion const& getRequiredBaseGameVersion() const;
#else // @header-generator platform
    MCAPI void saveEnchantsToUserData(::ItemEnchants const& enchant);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getSwingDuration() const;
#else // @header-generator platform
    MCAPI void serializeComponents(::IDataOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::UseAnimation getUseAnimation() const;
#else // @header-generator platform
    MCAPI void set(int inCount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag const* getUserData() const;
#else // @header-generator platform
    MCAPI void setChargedItem(::ItemInstance const& instance, bool isSwapping);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag* getUserData();
#else // @header-generator platform
    MCAPI void setCustomLore(::std::vector<::std::string> const& lore);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getWasPickedUp() const;
#else // @header-generator platform
    MCAPI void setCustomName(::Bedrock::Safety::RedactableString const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void setDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value,
        ::std::string const&                                              collectionName
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setJustBrewed(bool);
#else // @header-generator platform
    MCAPI void setJustBrewed(bool justBrewed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPickupTime();
#else // @header-generator platform
    MCAPI void setPickupTime();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPickupTime(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );
#else // @header-generator platform
    MCAPI void setRepairCost(int cost);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRepairCost(int);
#else // @header-generator platform
    MCAPI void setUnbreakable(bool isUnbreakable);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setShowPickUp(bool);
#else // @header-generator platform
    MCAPI void setUserData(::std::unique_ptr<::CompoundTag> tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setUnbreakable(bool);
#else // @header-generator platform
    MCAPI bool shouldVanish() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setUserData(std::unique_ptr<CompoundTag>);

    MCNAPI void setWasPickedUp(bool);

    MCNAPI bool shouldInteractionWithBlockBypassLiquid(::Block const&) const;

    MCNAPI bool shouldVanish() const;

    MCNAPI bool showPickUp() const;

    MCNAPI bool showsDurabilityInCreative() const;

    MCNAPI void startCooldown(::Player&, ::SharedTypes::ItemCooldownType) const;

    MCNAPI bool wasJustBrewed() const;
#else // @header-generator platform
    MCAPI void startCooldown(::Player& player, ::SharedTypes::ItemCooldownType type) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _loadBlocksForCanPlaceOnCanDestroy(std::vector<const BlockType*>&, std::string const&);
#else // @header-generator platform
    MCAPI static bool
    _loadBlocksForCanPlaceOnCanDestroy(::std::vector<::BlockType const*>& blockList, ::std::string const& blockName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void loadItemStacksFromDescriptor(
        std::vector<ItemStack>&,
        std::vector<NetworkItemStackDescriptor> const&,
        ::BlockPalette&,
        bool
    );

    MCNAPI static int retrieveAuxValFromIDAux(int);

    MCNAPI static bool retrieveEnchantFromIDAux(int);

    MCNAPI static short retrieveIDFromIDAux(int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void loadItemStacksFromDescriptor(
        ::std::vector<::ItemStack>&                        outItems,
        ::std::vector<::NetworkItemStackDescriptor> const& descriptors,
        ::BlockPalette&                                    blockPalette,
        bool                                               isClientSide
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemStackBase::ComparisonOptions const& COMPARISONOPTIONS_AUXANDRELEVANTUSERDATA();
#else // @header-generator platform
    MCAPI static ::ItemStackBase::ComparisonOptions const& COMPARISONOPTIONS_AUXANDRELEVANTUSERDATA();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemStackBase::ComparisonOptions const& COMPARISONOPTIONS_RELEVANTUSERDATA();
#else // @header-generator platform
    MCAPI static ::ItemStackBase::ComparisonOptions const& COMPARISONOPTIONS_RELEVANTUSERDATA();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_CAN_DESTROY();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_CAN_DESTROY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_CAN_PLACE_ON();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_CAN_PLACE_ON();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_CHARGED_ITEM();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_CHARGED_ITEM();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_DISPLAY();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_DISPLAY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_DISPLAY_FILTERED_NAME();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_DISPLAY_FILTERED_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_DISPLAY_NAME();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_DISPLAY_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_ENCHANTS();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_ENCHANTS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_LORE();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_LORE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_REPAIR_COST();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_REPAIR_COST();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_STORE_CAN_DESTROY();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_STORE_CAN_DESTROY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_STORE_CAN_PLACE_ON();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_STORE_CAN_PLACE_ON();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_UNBREAKABLE();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000>> const& sPickupPopDuration();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_UNBREAKABLE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::RecipeIngredient const& ingredient);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ItemStackBase const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::RecipeIngredient const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Block const& block, int count, ::CompoundTag const* _userData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Block const&, int, ::CompoundTag const*);
#else // @header-generator platform
    MCAPI void* $ctor(::Item const& item, int count, int auxValue, ::CompoundTag const* _userData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string_view, int, int, ::CompoundTag const*);

    MCNAPI void* $ctor(::Item const&, int, int, ::CompoundTag const*);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string_view name, int count, int auxValue, ::CompoundTag const* _userData);
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
    MCNAPI void $reinit(std::string_view const, int, int);
#else // @header-generator platform
    MCFOLD void $reinit(::Item const& item, int count, int auxValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reinit(::Block const&, int);
#else // @header-generator platform
    MCFOLD void $reinit(::Block const& block, int count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reinit(::Item const&, int, int);
#else // @header-generator platform
    MCFOLD void $reinit(::std::string_view const name, int count, int auxValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setNull(std::optional<std::string>);
#else // @header-generator platform
    MCAPI void $setNull(::std::optional<::std::string> reason);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $toString() const;
#else // @header-generator platform
    MCAPI ::std::string $toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $toDebugString() const;
#else // @header-generator platform
    MCAPI ::std::string $toDebugString() const;


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
