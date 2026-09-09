#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/IContainerManager.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Container;
class DynamicContainerTracker;
class Player;
struct PlayerContainerRefresher;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class BaseContainerMenu : public ::ContainerContentChangeListener, public ::IContainerManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mLastSlots;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerContainerRefresher>> mContainerRefresher;
    ::ll::TypedStorage<8, 16, std::shared_ptr<DynamicContainerTracker>> mDynamicContainerTracker;
    ::ll::TypedStorage<1, 1, ::ContainerID> mContainerId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mContainerType;
    ::ll::TypedStorage<4, 4, int> mTicksSinceLastCleanup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (SharedTypes::Legacy::ContainerType), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mContainerTypeSubscribers;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BaseContainerMenu& operator=(BaseContainerMenu const&);
    BaseContainerMenu(BaseContainerMenu const&);
    BaseContainerMenu();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BaseContainerMenu();

    virtual void containerContentChanged(int);

    virtual void removeSlot(int, int) = 0;

    virtual bool isSlotDirty(int);

    virtual bool isResultSlot(int);

    virtual void serverInitItemStackIds() = 0;

    virtual std::vector<ItemStack> getItemCopies() const = 0;

    virtual void setSlot(int, ::ItemStack const&, bool) = 0;

    virtual ::ItemStack const& getSlot(int) const = 0;

    virtual void setData(int, int);

    virtual ::ContainerID getContainerId() const;

    virtual void setContainerId(::ContainerID);

    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const;

    virtual void setContainerType(::SharedTypes::Legacy::ContainerType);

    virtual ::Bedrock::PubSub::Subscription registerContainerTypeListener(std::function<void (SharedTypes::Legacy::ContainerType)>) const;

    virtual void broadcastChanges();

    virtual ::Container* _getContainer() const = 0;
    // clang-format on
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

    MCNAPI bool $isSlotDirty(int);

    MCNAPI bool $isResultSlot(int);

    MCNAPI void $setData(int, int);

    MCNAPI ::ContainerID $getContainerId() const;

    MCNAPI void $setContainerId(::ContainerID);

    MCNAPI ::SharedTypes::Legacy::ContainerType $getContainerType() const;

    MCNAPI void $setContainerType(::SharedTypes::Legacy::ContainerType);

    MCNAPI ::Bedrock::PubSub::Subscription
        $registerContainerTypeListener(std::function<void(SharedTypes::Legacy::ContainerType)>) const;

    MCNAPI void $broadcastChanges();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
