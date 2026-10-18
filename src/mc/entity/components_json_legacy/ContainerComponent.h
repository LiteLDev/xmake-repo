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
#if defined(LL_PLAT_A) // @header-generator platform
class ItemActor;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 352, ::FillingContainer> mContainer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 440, ::FillingContainer> mContainer;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor*>             mListenerShim;
    ::ll::TypedStorage<1, 1, bool>                 mCanBeSiphonedFrom;
    ::ll::TypedStorage<1, 1, bool>                 mPrivate;
    ::ll::TypedStorage<1, 1, bool>                 mRestrictToOwner;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>         mLootTable;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>       mLootTable;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                  mLootTableSeed;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    ContainerComponent& operator=(ContainerComponent const&);
    ContainerComponent(ContainerComponent const&);
    ContainerComponent();

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerContentChanged(int);
#else // @header-generator platform
    virtual void containerContentChanged(int iSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContainerComponent();
#else // @header-generator platform
    virtual void containerClosed(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerClosed(::Actor&);
#else // @header-generator platform
    virtual ~ContainerComponent() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContainerComponent();
#else // @header-generator platform
    MCAPI ContainerComponent(::ContainerComponent&& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContainerComponent(::ContainerComponent&&);
#else // @header-generator platform
    MCAPI bool _tryMoveInItem(::ItemStack& item, int slot, int face, int itemCount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FillingContainer* _getRawContainerPtr();
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tryMoveInItem(::ItemStack&, int, int, int);
#else // @header-generator platform
    MCAPI bool addItem(::ItemStack& item, int face, int itemCount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI bool canOpenContainer(::Actor const& containerActor, ::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addItem(::ItemActor&);
#else // @header-generator platform
    MCAPI int countItemsOfType(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addItem(::ItemStack&);
#else // @header-generator platform
    MCAPI void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addItem(::ItemStack&, int, int);
#else // @header-generator platform
    MCAPI void dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canBeSiphonedFrom() const;
#else // @header-generator platform
    MCAPI int getEmptySlotsCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canOpenContainer(::Actor const&, ::Player&) const;
#else // @header-generator platform
    MCAPI void initFromDefinition(::Actor& actor, ::ContainerDescription const& desc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int countItemsOfType(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI bool isEmpty() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void dropContents(::BlockSource&, ::Vec3 const&, bool);
#else // @header-generator platform
    MCAPI bool openContainer(::Actor& containerActor, ::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void dropSlotContent(::BlockSource&, ::Vec3 const&, bool, int);
#else // @header-generator platform
    MCAPI ::ContainerComponent& operator=(::ContainerComponent&& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int findFirstSlotForItem(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getContainerSize() const;
#else // @header-generator platform
    MCAPI void rebuildContainer(
        ::Actor&                             owner,
        ::SharedTypes::Legacy::ContainerType type,
        int                                  size,
        bool                                 canBesiphonedFrom,
        int,
        bool isPrivate
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getEmptySlotsCount() const;
#else // @header-generator platform
    MCAPI void removeItemsOfType(::ItemStack const& item, int count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& getItem(int) const;
#else // @header-generator platform
    MCAPI void
    serverInitItemStackIds(int containerSlot, int count, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<const ItemStack*> const getSlots() const;
#else // @header-generator platform
    MCAPI void setCustomName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasRoomForItem(::ItemActor const&) const;
#else // @header-generator platform
    MCAPI void setLootTable(::std::string const& lootTable, int lootTableSeed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void unpackLootTable(::Level& level, ::DimensionType dimensionId, ::Actor& owner);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ContainerComponent&&);
#else // @header-generator platform
    MCAPI void* $ctor(::ContainerComponent&& other);
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
    MCNAPI void $containerContentChanged(int);
#else // @header-generator platform
    MCAPI void $containerContentChanged(int iSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $containerClosed(::Actor&);
#else // @header-generator platform
    MCAPI void $containerClosed(::Actor& actor);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForContainerContentChangeListener();

    MCNAPI static void** $vftableForContainerCloseListener();
#endif // @header-generator platform
    // NOLINTEND
};
