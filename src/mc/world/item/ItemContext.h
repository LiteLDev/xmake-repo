#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/world/item/ItemContextType.h"
#include "mc/world/item/ItemLockMode.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Container;
class ItemStackBase;
class Mob;
class Vec3;
struct ItemTag;
// clang-format on

class ItemContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemContextType>                    mItemContextType;
    ::ll::TypedStorage<8, 8, ::Container*>                         mContainer;
    ::ll::TypedStorage<4, 4, int>                                  mSlot;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                       mBlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 16>                                    mBlockPos;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                     mEntityRef;
    ::ll::TypedStorage<8, 160, std::optional<ItemStack>>           mItemStackContainer;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mBlockPos;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                     mEntityRef;
    ::ll::TypedStorage<8, 160, ::std::optional<::ItemStack>>       mItemStackContainer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ItemContext(ItemContext const&);
#endif // @header-generator platform
    ItemContext();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemContext(::ItemStack const&, int);
#else // @header-generator platform
    MCAPI ItemContext(::ItemStack const& item, int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemContext(::WeakEntityRef const&, int);
#else // @header-generator platform
    MCAPI ItemContext(::BlockSource& region, ::BlockPos const& containerPos, int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemContext(::WeakEntityRef const&, ::SharedTypes::Legacy::EquipmentSlot);
#else // @header-generator platform
    MCAPI ::Container* _tryGetContainerFromEntity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemContext(::BlockSource&, ::BlockPos const&, int);
#else // @header-generator platform
    MCAPI ::Container* _tryGetContainerFromItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* _tryGetContainerFromEntity() const;
#else // @header-generator platform
    MCAPI bool clearAllDynamicProperties(::std::string const& collection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* _tryGetContainerFromItem() const;
#else // @header-generator platform
    MCAPI ::std::optional<int> getAmount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool clearAllDynamicProperties(std::string const&);
#else // @header-generator platform
    MCAPI ::std::optional<::std::vector<::std::string>> getCanDestroy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<int> getAmount() const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::vector<::std::string>> getCanPlaceOn() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<std::string>> getCanDestroy() const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>
    getDynamicProperty(::std::string const& collection, ::std::string const& key) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<std::string>> getCanPlaceOn() const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::vector<::std::string>> getDynamicPropertyIds(::std::string const& collection) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container const* getContainer() const;
#else // @header-generator platform
    MCAPI ::std::optional<uint64> getDynamicPropertyTotalByteCount(::std::string const& collection) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::variant<double, float, bool, std::string, Vec3>>
           getDynamicProperty(std::string const&, std::string const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::string> getId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<std::string>> getDynamicPropertyIds(std::string const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::ItemStack> getItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ulong> getDynamicPropertyTotalByteCount(std::string const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<bool> getKeepOnDeath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> getId() const;
#else // @header-generator platform
    MCAPI ::std::optional<::ItemLockMode> getLockMode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ItemStack> getItem() const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::vector<::std::string>> getLore() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<bool> getKeepOnDeath() const;
#else // @header-generator platform
    MCAPI ::std::optional<int> getMaxAmount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ItemLockMode> getLockMode() const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::string> getNameTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<std::string>> getLore() const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::vector<::ItemTag>> getTags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<int> getMaxAmount() const;
#else // @header-generator platform
    MCAPI ::std::optional<bool> hasItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> getNameTag() const;
#else // @header-generator platform
    MCAPI ::std::optional<bool> hasTag(::ItemTag const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getSlot() const;
#else // @header-generator platform
    MCAPI ::std::optional<bool> isStackable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<ItemTag>> getTags() const;
#else // @header-generator platform
    MCAPI ::std::optional<bool> isStackableWith(::ItemStackBase const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<bool> hasItem() const;
#else // @header-generator platform
    MCAPI bool isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<bool> hasTag(::ItemTag const&) const;
#else // @header-generator platform
    MCAPI ::ItemContext& operator=(::ItemContext&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<bool> isStackable() const;
#else // @header-generator platform
    MCAPI ::ItemContext& operator=(::ItemContext const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<bool> isStackableWith(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI bool setAmount(int amount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isValid() const;
#else // @header-generator platform
    MCAPI ::std::optional<bool> setCanDestroy(::std::vector<::std::string> const& blockIdentifiers);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemContext& operator=(::ItemContext&&);
#else // @header-generator platform
    MCAPI ::std::optional<bool> setCanPlaceOn(::std::vector<::std::string> const& blockIdentifiers);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setAmount(int);

    MCNAPI std::optional<bool> setCanDestroy(std::vector<std::string> const&);

    MCNAPI std::optional<bool> setCanPlaceOn(std::vector<std::string> const&);

    MCNAPI bool setDynamicProperty(
        std::string const&,
        std::string const&,
        std::optional<std::variant<double, float, bool, std::string, Vec3>> const&
#else // @header-generator platform
    MCAPI bool setDynamicProperty(
        ::std::string const&                                                               collection,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setItem(::ItemStack const&);
#else // @header-generator platform
    MCAPI bool setKeepOnDeath(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setKeepOnDeath(bool);
#else // @header-generator platform
    MCAPI bool setLockMode(::ItemLockMode lockMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setLockMode(::ItemLockMode);
#else // @header-generator platform
    MCAPI bool setLore(::std::optional<::std::vector<::std::string>> const& loreList);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setLore(std::optional<std::vector<std::string>> const&);
#else // @header-generator platform
    MCAPI bool setNameTag(::std::optional<::std::string> nameTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setNameTag(std::optional<std::string>);

    MCNAPI ~ItemContext();
#else // @header-generator platform
    MCAPI ~ItemContext();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemContext createPlayerEnderInventoryContext(::WeakEntityRef const&, int);

    MCNAPI static bool setEquipment(::ItemStack const&, ::SharedTypes::Legacy::EquipmentSlot, ::Mob&);
#else // @header-generator platform
    MCAPI static bool
    setEquipment(::ItemStack const& item, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, ::Mob& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemStack const&, int);
#else // @header-generator platform
    MCAPI void* $ctor(::ItemStack const& item, int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WeakEntityRef const&, int);

    MCNAPI void* $ctor(::WeakEntityRef const&, ::SharedTypes::Legacy::EquipmentSlot);

    MCNAPI void* $ctor(::BlockSource&, ::BlockPos const&, int);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockSource& region, ::BlockPos const& containerPos, int slot);
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
};
