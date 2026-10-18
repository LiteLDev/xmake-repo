#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerModel;
struct ContainerOwner;
struct PlayerContainerRefresher;
// clang-format on

class DynamicContainerManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::FullContainerName const>       mFullContainerName;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContainerModel>> mModel;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Container>>        mContainer;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>          mLastSlots;
    ::ll::TypedStorage<1, 1, ::ContainerID>                    mContainerID;
    ::ll::TypedStorage<8, 152, ::ItemStack>                    mStorageItem;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::FullContainerName const>           mFullContainerName;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Container>>        mContainer;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>          mLastSlots;
    ::ll::TypedStorage<1, 1, ::ContainerID>                        mContainerID;
    ::ll::TypedStorage<8, 152, ::ItemStack>                        mStorageItem;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicContainerManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DynamicContainerManager(
        ::FullContainerName const&,
        std::shared_ptr<ContainerModel>,
        std::shared_ptr<Container>,
        ::ItemStack const&
#else // @header-generator platform
    MCAPI DynamicContainerManager(
        ::FullContainerName const&          name,
        ::std::shared_ptr<::ContainerModel> model,
        ::std::shared_ptr<::Container>      container,
        ::ItemStack const&                  storageItem
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void broadcastChanges(::PlayerContainerRefresher const&, std::function<void()>);
#else // @header-generator platform
    MCAPI void
    broadcastChanges(::PlayerContainerRefresher const& refresher, ::std::function<void()> contentsChangedCallback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void shareContainer(::ContainerOwner&);
#else // @header-generator platform
    MCAPI void shareContainer(::ContainerOwner& containerOwner);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::FullContainerName const&, std::shared_ptr<ContainerModel>, std::shared_ptr<Container>, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::FullContainerName const&          name,
        ::std::shared_ptr<::ContainerModel> model,
        ::std::shared_ptr<::Container>      container,
        ::ItemStack const&                  storageItem
    );
#endif // @header-generator platform
    // NOLINTEND
};
