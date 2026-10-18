#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/safety/RedactableString.h"
#include "mc/world/ContainerIterator.h"
#include "mc/world/ContainerOwner.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/safety/RedactableString.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/ContainerCloseListener.h"
#include "mc/world/ContainerContentChangeListener.h"
#endif // @header-generator platform
#include "mc/world/ContainerOwner.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/ContainerSizeChangeListener.h"
#endif // @header-generator platform
#include "mc/world/TypedRuntimeId.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class BaseGameVersion;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class ContainerCloseListener;
class ContainerContentChangeListener;
class ContainerSizeChangeListener;
class DynamicContainerTracker;
#else // @header-generator platform
#endif // @header-generator platform
class ItemDescriptor;
class ItemStack;
class Random;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ContainerRuntimeIdTag;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 40> mPublisher;
#else // @header-generator platform
        ::ll::
            TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
                mPublisher;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using ItemStackNetIdChangedCallback = std::function<void(int, const ItemStack&)>;
#else // @header-generator platform
    using ItemStackNetIdChangedCallback = ::std::function<void(int, ::ItemStack const&)>;

public:
    [[nodiscard]] std::string const& getTypeName() const { return containerTypeMap().at(mContainerType); }

    LLNDAPI optional_ref<ItemStack> getItemNonConst(int index);

    [[nodiscard]] ItemStack& operator[](int index) { return this->getItemNonConst(index); }

    [[nodiscard]] ItemStack const& operator[](int index) const { return this->getItem(index); }

    using TransactionContext = std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>;

public:
    using Iterator      = ContainerIterator<Container>;
    using ConstIterator = ContainerIterator<Container const>;

    using ReverseIterator      = std::reverse_iterator<Iterator>;
    using ConstReverseIterator = std::reverse_iterator<ConstIterator>;

    [[nodiscard]] constexpr Iterator      begin() noexcept { return {this, 0}; }
    [[nodiscard]] constexpr ConstIterator cbegin() const noexcept { return {this, 0}; }
    [[nodiscard]] constexpr Iterator      end() noexcept { return {this, getContainerSize()}; }
    [[nodiscard]] constexpr ConstIterator cend() const noexcept { return {this, getContainerSize()}; }

    [[nodiscard]] constexpr ReverseIterator      rbegin() noexcept { return ReverseIterator{end()}; }
    [[nodiscard]] constexpr ConstReverseIterator crbegin() const noexcept { return ConstReverseIterator{cend()}; }
    [[nodiscard]] constexpr ReverseIterator      rend() noexcept { return ReverseIterator{begin()}; }
    [[nodiscard]] constexpr ConstReverseIterator crend() const noexcept { return ConstReverseIterator{cbegin()}; }
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::SharedTypes::Legacy::ContainerType                    mContainerType;
    ::SharedTypes::Legacy::ContainerType                    mGameplayContainerType;
    ::std::unordered_set<::ContainerContentChangeListener*> mContentChangeListeners;
    ::std::unordered_set<::ContainerSizeChangeListener*>    mSizeChangeListeners;
    ::std::unordered_set<::ContainerCloseListener*>         mCloseListeners;
    ::Container::PublisherWrapper                           mRemovedPublisher;
    ::std::deque<TransactionContext>                        mTransactionContextStack;
    ::Bedrock::Safety::RedactableString                     mName;
    bool                                                    mCustomName;
    ::ContainerOwner                                        mContainerOwner;
    ::ContainerRuntimeId                                    mContainerRuntimeId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Container();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~Container();

    virtual void init();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serverInitItemStackIds(int, int, std::function<void (int, const ItemStack&)>) = 0;
#else // @header-generator platform
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addContentChangeListener(::ContainerContentChangeListener*);
#else // @header-generator platform
    virtual void addContentChangeListener(::ContainerContentChangeListener* listener);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeContentChangeListener(::ContainerContentChangeListener*);
#else // @header-generator platform
    virtual void removeContentChangeListener(::ContainerContentChangeListener* listener);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void ()>* getContainerRemovedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>* getContainerRemovedConnector();
#endif // @header-generator platform

    virtual bool hasRemovedSubscribers() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getItem(int) const = 0;
#else // @header-generator platform
    virtual ::ItemStack const& getItem(int slot) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasRoomForItem(::ItemStack const&) const;
#else // @header-generator platform
    virtual bool hasRoomForItem(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addItem(::ItemStack&);
#else // @header-generator platform
    virtual bool addItem(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addItemWithForceBalance(::ItemStack&);
#else // @header-generator platform
    virtual bool addItemWithForceBalance(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addItemToFirstEmptySlot(::ItemStack const&);
#else // @header-generator platform
    virtual bool addItemToFirstEmptySlot(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItem(int, ::ItemStack const&) = 0;
#else // @header-generator platform
    virtual void setItem(int slot, ::ItemStack const& item) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItemWithForceBalance(int, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeItem(int, int);
#else // @header-generator platform
    virtual void removeItem(int slot, int count);
#endif // @header-generator platform

    virtual void removeAllItems();

    virtual void removeAllItemsWithForceBalance();

    virtual void containerRemoved();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dropSlotContent(::BlockSource&, ::Vec3 const&, bool, int);
#else // @header-generator platform
    virtual void dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dropContents(::BlockSource&, ::Vec3 const&, bool);
#else // @header-generator platform
    virtual void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);
#endif // @header-generator platform

    virtual int getContainerSize() const = 0;

    virtual int getMaxStackSize() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startOpen(::Actor&) = 0;
#else // @header-generator platform
    virtual void startOpen(::Actor& actor) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopOpen(::Actor&);
#else // @header-generator platform
    virtual void stopOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> getSlotCopies() const;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> getSlotCopies() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<const ItemStack*> const getSlots() const;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack const*> const getSlots() const;
#endif // @header-generator platform

    virtual int getEmptySlotsCount() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getItemCount(::ItemStack const&) const;
#else // @header-generator platform
    virtual int getItemCount(::ItemStack const& compare) const;
#endif // @header-generator platform

    virtual int firstEmptySlot() const;

    virtual int firstItem() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int findFirstSlotForItem(::ItemStack const&) const;
#else // @header-generator platform
    virtual int findFirstSlotForItem(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int reverseFindFirstSlotForItem(::ItemStack const&) const;
#else // @header-generator platform
    virtual int reverseFindFirstSlotForItem(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPushInItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    virtual bool canPushInItem(int slot, int face, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    virtual bool canPullOutItem(int slot, int face, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setContainerChanged(int);
#else // @header-generator platform
    virtual void setContainerChanged(int slot);
#endif // @header-generator platform

    virtual void setContainerMoved();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCustomName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    virtual void setCustomName(::Bedrock::Safety::RedactableString const& name);
#endif // @header-generator platform

    virtual bool hasCustomName() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const&);
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag&);
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void createTransactionContext(std::function<void (Container&, int, const ItemStack&, const ItemStack&)>, std::function<void ()>);
#else // @header-generator platform
    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeContainerContents(::BlockSource&);
#else // @header-generator platform
    virtual void initializeContainerContents(::BlockSource& region);
#endif // @header-generator platform

    virtual bool isEmpty() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSlotDisabled(int) const;
    // clang-format on
#else // @header-generator platform
    virtual bool isSlotDisabled(int slot) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Container(::SharedTypes::Legacy::ContainerType);
#else // @header-generator platform
    MCAPI Container(::Container const& backingContainer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Container(::SharedTypes::Legacy::ContainerType, std::string const&, bool);
#else // @header-generator platform
    MCAPI explicit Container(::SharedTypes::Legacy::ContainerType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Container(::SharedTypes::Legacy::ContainerType, ::Bedrock::Safety::RedactableString const&, bool);
#else // @header-generator platform
    MCAPI Container(::SharedTypes::Legacy::ContainerType type, ::std::string const& name, bool customName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _dropSlotContent(::BlockSource&, ::Random&, ::Vec3 const&, bool, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI Container(
        ::SharedTypes::Legacy::ContainerType       type,
        ::Bedrock::Safety::RedactableString const& name,
        bool                                       customName
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _getEmptySlotsCount(int, int) const;
#else // @header-generator platform
    MCAPI void
    _dropSlotContent(::BlockSource& region, ::Random& random, ::Vec3 const& pos, bool randomizeDrop, int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initRuntimeId(::TypedRuntimeId<ContainerRuntimeIdTag, uint, 0> const&);
#else // @header-generator platform
    MCAPI void
    _serverInitId(int slot, ::ItemStack& item, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _serverInitId(int, ::ItemStack&, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    MCAPI int getItemCount(::ItemDescriptor const& descriptor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCloseListener(::ContainerCloseListener*);
#else // @header-generator platform
    MCAPI int getRedstoneSignalFromContainer(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ContainerType getContainerType() const;
#else // @header-generator platform
    MCAPI ::Container& operator=(::Container const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void serverInitItemStackIdsAll(::std::function<void(int, ::ItemStack const&)> onNetIdChanged);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::Legacy::ContainerType getContainerTypeId(std::string const&);

    MCNAPI static std::string const& getContainerTypeName(::SharedTypes::Legacy::ContainerType);
#else // @header-generator platform
    MCAPI static ::SharedTypes::Legacy::ContainerType getContainerTypeId(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<SharedTypes::Legacy::ContainerType, std::string> const&
#else // @header-generator platform
    MCAPI static ::BidirectionalUnorderedMap<::SharedTypes::Legacy::ContainerType, ::std::string> const&
#endif // @header-generator platform
    containerTypeMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::Legacy::ContainerType);
#else // @header-generator platform
    MCAPI void* $ctor(::Container const& backingContainer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::Legacy::ContainerType, std::string const&, bool);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::Legacy::ContainerType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::Legacy::ContainerType, ::Bedrock::Safety::RedactableString const&, bool);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::Legacy::ContainerType type, ::std::string const& name, bool customName);

#ifdef LL_PLAT_C
    MCAPI void*
    $ctor(::SharedTypes::Legacy::ContainerType type, ::Bedrock::Safety::RedactableString const& name, bool customName);
#endif
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
    MCNAPI void $init();
#else // @header-generator platform
    MCFOLD void $init();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addContentChangeListener(::ContainerContentChangeListener*);
#else // @header-generator platform
    MCAPI void $addContentChangeListener(::ContainerContentChangeListener* listener);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeContentChangeListener(::ContainerContentChangeListener*);
#else // @header-generator platform
    MCAPI void $removeContentChangeListener(::ContainerContentChangeListener* listener);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void()>* $getContainerRemovedConnector();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void()>* $getContainerRemovedConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasRemovedSubscribers() const;
#else // @header-generator platform
    MCAPI bool $hasRemovedSubscribers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasRoomForItem(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI bool $hasRoomForItem(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $addItem(::ItemStack&);
#else // @header-generator platform
    MCAPI bool $addItem(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $addItemWithForceBalance(::ItemStack&);
#else // @header-generator platform
    MCAPI bool $addItemWithForceBalance(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $addItemToFirstEmptySlot(::ItemStack const&);
#else // @header-generator platform
    MCAPI bool $addItemToFirstEmptySlot(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItemWithForceBalance(int, ::ItemStack const&, bool);
#else // @header-generator platform
    MCFOLD void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeItem(int, int);
#else // @header-generator platform
    MCAPI void $removeItem(int slot, int count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeAllItems();
#else // @header-generator platform
    MCAPI void $removeAllItems();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeAllItemsWithForceBalance();
#else // @header-generator platform
    MCAPI void $removeAllItemsWithForceBalance();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $containerRemoved();
#else // @header-generator platform
    MCAPI void $containerRemoved();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dropSlotContent(::BlockSource&, ::Vec3 const&, bool, int);
#else // @header-generator platform
    MCAPI void $dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dropContents(::BlockSource&, ::Vec3 const&, bool);
#else // @header-generator platform
    MCAPI void $dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopOpen(::Actor&);
#else // @header-generator platform
    MCAPI void $stopOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemStack> $getSlotCopies() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack> $getSlotCopies() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<const ItemStack*> const $getSlots() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack const*> const $getSlots() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEmptySlotsCount() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI int $getEmptySlotsCount() const;
#else // LL_PLAT_C
    MCFOLD int $getEmptySlotsCount() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getItemCount(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI int $getItemCount(::ItemStack const& compare) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $firstEmptySlot() const;
#else // @header-generator platform
    MCAPI int $firstEmptySlot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $firstItem() const;
#else // @header-generator platform
    MCAPI int $firstItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $findFirstSlotForItem(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI int $findFirstSlotForItem(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $reverseFindFirstSlotForItem(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI int $reverseFindFirstSlotForItem(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    MCFOLD bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    MCFOLD bool $canPullOutItem(int slot, int face, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setContainerChanged(int);
#else // @header-generator platform
    MCAPI void $setContainerChanged(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setContainerMoved();
#else // @header-generator platform
    MCAPI void $setContainerMoved();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setCustomName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    MCAPI void $setCustomName(::Bedrock::Safety::RedactableString const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasCustomName() const;
#else // @header-generator platform
    MCAPI bool $hasCustomName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&);
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $createTransactionContext(
        std::function<void(Container&, int, const ItemStack&, const ItemStack&)>,
        std::function<void()>
#else // @header-generator platform
    MCAPI void $createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeContainerContents(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $initializeContainerContents(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isEmpty() const;
#else // @header-generator platform
    MCAPI bool $isEmpty() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSlotDisabled(int) const;
#else // @header-generator platform
    MCFOLD bool $isSlotDisabled(int slot) const;


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
