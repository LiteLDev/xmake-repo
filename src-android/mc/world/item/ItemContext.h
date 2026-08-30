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
    ::ll::UntypedStorage<4, 16>                                    mBlockPos;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                     mEntityRef;
    ::ll::TypedStorage<8, 160, std::optional<ItemStack>>           mItemStackContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemContext(::ItemStack const&, int);

    MCNAPI ItemContext(::WeakEntityRef const&, int);

    MCNAPI ItemContext(::WeakEntityRef const&, ::SharedTypes::Legacy::EquipmentSlot);

    MCNAPI ItemContext(::BlockSource&, ::BlockPos const&, int);

    MCNAPI ::Container* _tryGetContainerFromEntity() const;

    MCNAPI ::Container* _tryGetContainerFromItem() const;

    MCNAPI bool clearAllDynamicProperties(std::string const&);

    MCNAPI std::optional<int> getAmount() const;

    MCNAPI std::optional<std::vector<std::string>> getCanDestroy() const;

    MCNAPI std::optional<std::vector<std::string>> getCanPlaceOn() const;

    MCNAPI ::Container const* getContainer() const;

    MCNAPI std::optional<std::variant<double, float, bool, std::string, Vec3>>
           getDynamicProperty(std::string const&, std::string const&) const;

    MCNAPI std::optional<std::vector<std::string>> getDynamicPropertyIds(std::string const&) const;

    MCNAPI std::optional<ulong> getDynamicPropertyTotalByteCount(std::string const&) const;

    MCNAPI std::optional<std::string> getId() const;

    MCNAPI std::optional<ItemStack> getItem() const;

    MCNAPI std::optional<bool> getKeepOnDeath() const;

    MCNAPI std::optional<ItemLockMode> getLockMode() const;

    MCNAPI std::optional<std::vector<std::string>> getLore() const;

    MCNAPI std::optional<int> getMaxAmount() const;

    MCNAPI std::optional<std::string> getNameTag() const;

    MCNAPI int getSlot() const;

    MCNAPI std::optional<std::vector<ItemTag>> getTags() const;

    MCNAPI std::optional<bool> hasItem() const;

    MCNAPI std::optional<bool> hasTag(::ItemTag const&) const;

    MCNAPI std::optional<bool> isStackable() const;

    MCNAPI std::optional<bool> isStackableWith(::ItemStackBase const&) const;

    MCNAPI bool isValid() const;

    MCNAPI ::ItemContext& operator=(::ItemContext&&);

    MCNAPI bool setAmount(int);

    MCNAPI std::optional<bool> setCanDestroy(std::vector<std::string> const&);

    MCNAPI std::optional<bool> setCanPlaceOn(std::vector<std::string> const&);

    MCNAPI bool setDynamicProperty(
        std::string const&,
        std::string const&,
        std::optional<std::variant<double, float, bool, std::string, Vec3>> const&
    );

    MCNAPI bool setItem(::ItemStack const&);

    MCNAPI bool setKeepOnDeath(bool);

    MCNAPI bool setLockMode(::ItemLockMode);

    MCNAPI bool setLore(std::optional<std::vector<std::string>> const&);

    MCNAPI bool setNameTag(std::optional<std::string>);

    MCNAPI ~ItemContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemContext createPlayerEnderInventoryContext(::WeakEntityRef const&, int);

    MCNAPI static bool setEquipment(::ItemStack const&, ::SharedTypes::Legacy::EquipmentSlot, ::Mob&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStack const&, int);

    MCNAPI void* $ctor(::WeakEntityRef const&, int);

    MCNAPI void* $ctor(::WeakEntityRef const&, ::SharedTypes::Legacy::EquipmentSlot);

    MCNAPI void* $ctor(::BlockSource&, ::BlockPos const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
