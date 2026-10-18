#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/IContainerManager.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class Container;
class DynamicContainerTracker;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
class Player;
struct PlayerContainerRefresher;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class BaseContainerMenu : public ::ContainerContentChangeListener, public ::IContainerManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Player&>                                     mPlayer;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>                   mLastSlots;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerContainerRefresher>> mContainerRefresher;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DynamicContainerTracker>> mDynamicContainerTracker;
    ::ll::TypedStorage<1, 1, ::ContainerID>                                 mContainerId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType>          mContainerType;
    ::ll::TypedStorage<4, 4, int>                                           mTicksSinceLastCleanup;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<
            void(::SharedTypes::Legacy::ContainerType),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>>
        mContainerTypeSubscribers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BaseContainerMenu& operator=(BaseContainerMenu const&);
    BaseContainerMenu(BaseContainerMenu const&);
    BaseContainerMenu();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BaseContainerMenu();
#else // @header-generator platform
    virtual ~BaseContainerMenu() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerContentChanged(int);
#else // @header-generator platform
    virtual void removeSlot(int slot, int count) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeSlot(int, int) = 0;
#else // @header-generator platform
    virtual bool isSlotDirty(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSlotDirty(int);
#else // @header-generator platform
    virtual bool isResultSlot(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isResultSlot(int);
#else // @header-generator platform
    virtual void containerContentChanged(int slot) /*override*/;
#endif // @header-generator platform

    virtual void serverInitItemStackIds() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> getItemCopies() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> getItemCopies() const = 0;
#endif // @header-generator platform

    virtual void setSlot(int, ::ItemStack const&, bool) = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getSlot(int) const = 0;
#else // @header-generator platform
    virtual ::ItemStack const& getSlot(int slot) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setData(int, int);
#else // @header-generator platform
    virtual void setData(int id, int value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerID getContainerId() const;
#else // @header-generator platform
    virtual ::ContainerID getContainerId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setContainerId(::ContainerID);
#else // @header-generator platform
    virtual void setContainerId(::ContainerID id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const;
#else // @header-generator platform
    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setContainerType(::SharedTypes::Legacy::ContainerType);
#else // @header-generator platform
    virtual void setContainerType(::SharedTypes::Legacy::ContainerType type) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription registerContainerTypeListener(std::function<void (SharedTypes::Legacy::ContainerType)>) const;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription
    registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastChanges();
#else // @header-generator platform
    virtual void broadcastChanges() /*override*/;
#endif // @header-generator platform

    virtual ::Container* _getContainer() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
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
    MCFOLD bool $isSlotDirty(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSlotDirty(int);
#else // @header-generator platform
    MCFOLD bool $isResultSlot(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isResultSlot(int);
#else // @header-generator platform
    MCFOLD void $containerContentChanged(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setData(int, int);
#else // @header-generator platform
    MCFOLD void $setData(int id, int value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerID $getContainerId() const;
#else // @header-generator platform
    MCFOLD ::ContainerID $getContainerId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setContainerId(::ContainerID);
#else // @header-generator platform
    MCAPI void $setContainerId(::ContainerID id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ContainerType $getContainerType() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::ContainerType $getContainerType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setContainerType(::SharedTypes::Legacy::ContainerType);
#else // @header-generator platform
    MCAPI void $setContainerType(::SharedTypes::Legacy::ContainerType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Subscription
        $registerContainerTypeListener(std::function<void(SharedTypes::Legacy::ContainerType)>) const;
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Subscription
    $registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastChanges();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $broadcastChanges();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
