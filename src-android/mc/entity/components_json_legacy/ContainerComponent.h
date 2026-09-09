#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerCloseListener.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ItemActor;
class ItemStack;
class Level;
class Player;
class Vec3;
struct ContainerDescription;
struct DimensionType;
// clang-format on

class ContainerComponent : public ::ContainerContentChangeListener, public ::ContainerCloseListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 352, ::FillingContainer> mContainer;
    ::ll::TypedStorage<8, 8, ::Actor*>             mListenerShim;
    ::ll::TypedStorage<1, 1, bool>                 mCanBeSiphonedFrom;
    ::ll::TypedStorage<1, 1, bool>                 mPrivate;
    ::ll::TypedStorage<1, 1, bool>                 mRestrictToOwner;
    ::ll::TypedStorage<8, 24, std::string>         mLootTable;
    ::ll::TypedStorage<4, 4, int>                  mLootTableSeed;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void containerContentChanged(int);

    virtual ~ContainerComponent();

    virtual void containerClosed(::Actor&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerComponent();

    MCNAPI ContainerComponent(::ContainerComponent&&);

    MCNAPI ::FillingContainer* _getRawContainerPtr();

    MCNAPI bool _tryMoveInItem(::ItemStack&, int, int, int);

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool addItem(::ItemActor&);

    MCNAPI bool addItem(::ItemStack&);

    MCNAPI bool addItem(::ItemStack&, int, int);

    MCNAPI bool canBeSiphonedFrom() const;

    MCNAPI bool canOpenContainer(::Actor const&, ::Player&) const;

    MCNAPI int countItemsOfType(::ItemStack const&) const;

    MCNAPI void dropContents(::BlockSource&, ::Vec3 const&, bool);

    MCNAPI void dropSlotContent(::BlockSource&, ::Vec3 const&, bool, int);

    MCNAPI int findFirstSlotForItem(::ItemStack const&) const;

    MCNAPI int getContainerSize() const;

    MCNAPI int getEmptySlotsCount() const;

    MCNAPI ::ItemStack const& getItem(int) const;

    MCNAPI std::vector<const ItemStack*> const getSlots() const;

    MCNAPI bool hasRoomForItem(::ItemActor const&) const;

    MCNAPI bool hasRoomForItem(::ItemStack const&) const;

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI void initFromDefinition(::Actor&, ::ContainerDescription const&);

    MCNAPI bool isEmpty() const;

    MCNAPI bool isPrivate() const;

    MCNAPI bool openContainer(::Actor&, ::Player&);

    MCNAPI ::ContainerComponent& operator=(::ContainerComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void rebuildContainer(::Actor&, ::SharedTypes::Legacy::ContainerType, int, bool, int, bool);

    MCNAPI void removeItem(int, int);

    MCNAPI void removeItemsOfType(::ItemStack const&, int);

    MCNAPI void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    MCNAPI void setCustomName(std::string const&);

    MCNAPI bool setItem(int, ::ItemStack const&);

    MCNAPI void setLootTable(std::string const&, int);

    MCNAPI void unpackLootTable(::Level&, ::DimensionType, ::Actor&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ContainerComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $containerContentChanged(int);

    MCNAPI void $containerClosed(::Actor&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
