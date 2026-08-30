#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/safety/RedactableString.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/ContainerOwner.h"
#include "mc/world/TypedRuntimeId.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class BlockSource;
class CompoundTag;
class ContainerCloseListener;
class ContainerContentChangeListener;
class ContainerSizeChangeListener;
class DynamicContainerTracker;
class ItemDescriptor;
class ItemStack;
class Random;
class Vec3;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class Container {
public:
    // Container inner types declare
    // clang-format off
    struct PublisherWrapper;
    // clang-format on

    // Container inner types define
    struct PublisherWrapper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mPublisher;
        // NOLINTEND
    };

    using ItemStackNetIdChangedCallback = std::function<void(int, const ItemStack&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mContainerType;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mGameplayContainerType;
    ::ll::TypedStorage<8, 40, std::unordered_set<ContainerContentChangeListener*>> mContentChangeListeners;
    ::ll::TypedStorage<8, 40, std::unordered_set<ContainerSizeChangeListener*>> mSizeChangeListeners;
    ::ll::TypedStorage<8, 40, std::unordered_set<ContainerCloseListener*>> mCloseListeners;
    ::ll::TypedStorage<8, 40, ::Container::PublisherWrapper> mRemovedPublisher;
    ::ll::TypedStorage<8, 48, std::deque<std::function<void (Container&, int, const ItemStack&, const ItemStack&)>>> mTransactionContextStack;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<1, 1, bool> mCustomName;
    ::ll::TypedStorage<8, 24, ::ContainerOwner> mContainerOwner;
    ::ll::UntypedStorage<4, 4> mContainerRuntimeId;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Container();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Container();

    virtual void init();

    virtual void serverInitItemStackIds(int, int, std::function<void (int, const ItemStack&)>) = 0;

    virtual void addContentChangeListener(::ContainerContentChangeListener*);

    virtual void removeContentChangeListener(::ContainerContentChangeListener*);

    virtual ::Bedrock::PubSub::Connector<void ()>* getContainerRemovedConnector();

    virtual bool hasRemovedSubscribers() const;

    virtual ::ItemStack const& getItem(int) const = 0;

    virtual bool hasRoomForItem(::ItemStack const&) const;

    virtual bool addItem(::ItemStack&);

    virtual bool addItemWithForceBalance(::ItemStack&);

    virtual bool addItemToFirstEmptySlot(::ItemStack const&);

    virtual void setItem(int, ::ItemStack const&) = 0;

    virtual void setItemWithForceBalance(int, ::ItemStack const&, bool);

    virtual void removeItem(int, int);

    virtual void removeAllItems();

    virtual void removeAllItemsWithForceBalance();

    virtual void containerRemoved();

    virtual void dropSlotContent(::BlockSource&, ::Vec3 const&, bool, int);

    virtual void dropContents(::BlockSource&, ::Vec3 const&, bool);

    virtual int getContainerSize() const = 0;

    virtual int getMaxStackSize() const = 0;

    virtual void startOpen(::Actor&) = 0;

    virtual void stopOpen(::Actor&);

    virtual std::vector<ItemStack> getSlotCopies() const;

    virtual std::vector<const ItemStack*> const getSlots() const;

    virtual int getEmptySlotsCount() const;

    virtual int getItemCount(::ItemStack const&) const;

    virtual int firstEmptySlot() const;

    virtual int firstItem() const;

    virtual int findFirstSlotForItem(::ItemStack const&) const;

    virtual int reverseFindFirstSlotForItem(::ItemStack const&) const;

    virtual bool canPushInItem(int, int, ::ItemStack const&) const;

    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;

    virtual void setContainerChanged(int);

    virtual void setContainerMoved();

    virtual void setCustomName(::Bedrock::Safety::RedactableString const&);

    virtual bool hasCustomName() const;

    virtual void readAdditionalSaveData(::CompoundTag const&);

    virtual void addAdditionalSaveData(::CompoundTag&);

    virtual void createTransactionContext(std::function<void (Container&, int, const ItemStack&, const ItemStack&)>, std::function<void ()>);

    virtual void initializeContainerContents(::BlockSource&);

    virtual bool isEmpty() const;

    virtual bool isSlotDisabled(int) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Container(::SharedTypes::Legacy::ContainerType);

    MCNAPI Container(::SharedTypes::Legacy::ContainerType, std::string const&, bool);

    MCNAPI Container(::SharedTypes::Legacy::ContainerType, ::Bedrock::Safety::RedactableString const&, bool);

    MCNAPI void _dropSlotContent(::BlockSource&, ::Random&, ::Vec3 const&, bool, int);

    MCNAPI int _getEmptySlotsCount(int, int) const;

    MCNAPI void _initRuntimeId(::TypedRuntimeId<ContainerRuntimeIdTag, uint, 0> const&);

    MCNAPI void _serverInitId(int, ::ItemStack&, std::function<void(int, const ItemStack&)>);

    MCNAPI void addCloseListener(::ContainerCloseListener*);

    MCNAPI ::SharedTypes::Legacy::ContainerType getContainerType() const;

    MCNAPI ::SharedTypes::Legacy::ContainerType getGameplayContainerType() const;

    MCNAPI int getItemCount(std::function<bool(const ItemStack&)> const) const;

    MCNAPI int getItemCount(::ItemDescriptor const&) const;

    MCNAPI ::Bedrock::Safety::RedactableString const& getName() const;

    MCNAPI int getRedstoneSignalFromContainer(::BlockSource&);

    MCNAPI ::TypedRuntimeId<ContainerRuntimeIdTag, uint, 0> const& getRuntimeId() const;

    MCNAPI void initRuntimeId();

    MCNAPI void receiveContainerLifetimes(::DynamicContainerTracker const&);

    MCNAPI void removeCloseListener(::ContainerCloseListener*);

    MCNAPI void serverInitItemStackIdsAll(std::function<void(int, const ItemStack&)>);

    MCNAPI void setGameplayContainerType(::SharedTypes::Legacy::ContainerType);

    MCNAPI void triggerTransactionChange(int, ::ItemStack const&, ::ItemStack const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::Legacy::ContainerType getContainerTypeId(std::string const&);

    MCNAPI static std::string const& getContainerTypeName(::SharedTypes::Legacy::ContainerType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<SharedTypes::Legacy::ContainerType, std::string> const&
    containerTypeMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::ContainerType);

    MCNAPI void* $ctor(::SharedTypes::Legacy::ContainerType, std::string const&, bool);

    MCNAPI void* $ctor(::SharedTypes::Legacy::ContainerType, ::Bedrock::Safety::RedactableString const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

    MCNAPI void $addContentChangeListener(::ContainerContentChangeListener*);

    MCNAPI void $removeContentChangeListener(::ContainerContentChangeListener*);

    MCNAPI ::Bedrock::PubSub::Connector<void()>* $getContainerRemovedConnector();

    MCNAPI bool $hasRemovedSubscribers() const;

    MCNAPI bool $hasRoomForItem(::ItemStack const&) const;

    MCNAPI bool $addItem(::ItemStack&);

    MCNAPI bool $addItemWithForceBalance(::ItemStack&);

    MCNAPI bool $addItemToFirstEmptySlot(::ItemStack const&);

    MCNAPI void $setItemWithForceBalance(int, ::ItemStack const&, bool);

    MCNAPI void $removeItem(int, int);

    MCNAPI void $removeAllItems();

    MCNAPI void $removeAllItemsWithForceBalance();

    MCNAPI void $containerRemoved();

    MCNAPI void $dropSlotContent(::BlockSource&, ::Vec3 const&, bool, int);

    MCNAPI void $dropContents(::BlockSource&, ::Vec3 const&, bool);

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI std::vector<ItemStack> $getSlotCopies() const;

    MCNAPI std::vector<const ItemStack*> const $getSlots() const;

    MCNAPI int $getEmptySlotsCount() const;

    MCNAPI int $getItemCount(::ItemStack const&) const;

    MCNAPI int $firstEmptySlot() const;

    MCNAPI int $firstItem() const;

    MCNAPI int $findFirstSlotForItem(::ItemStack const&) const;

    MCNAPI int $reverseFindFirstSlotForItem(::ItemStack const&) const;

    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCNAPI void $setContainerChanged(int);

    MCNAPI void $setContainerMoved();

    MCNAPI void $setCustomName(::Bedrock::Safety::RedactableString const&);

    MCNAPI bool $hasCustomName() const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&);

    MCNAPI void $createTransactionContext(
        std::function<void(Container&, int, const ItemStack&, const ItemStack&)>,
        std::function<void()>
    );

    MCNAPI void $initializeContainerContents(::BlockSource&);

    MCNAPI bool $isEmpty() const;

    MCNAPI bool $isSlotDisabled(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
