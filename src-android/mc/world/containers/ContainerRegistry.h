#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/DynamicTrackedContainer.h"
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/containers/IContainerRegistryAccess.h"
#include "mc/world/containers/IContainerRegistryTracker.h"
#include "mc/world/containers/IDynamicContainerSerialization.h"

// auto generated forward declare list
// clang-format off
class DynamicContainerManager;
class FillingContainer;
class ItemStack;
class ListTag;
class Packet;
class SaveContext;
class StorageItemComponent;
class StorageItemContainerModel;
class StorageWeightLimitItemComponent;
namespace Bedrock::Threading { class SharedRecursiveMutex; }
// clang-format on

class ContainerRegistry : public ::IDynamicContainerSerialization,
                          public ::IContainerRegistryAccess,
                          public ::IContainerRegistryTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                            mNextDynamicId;
    ::ll::TypedStorage<8, 40, std::unordered_map<FullContainerName, DynamicTrackedContainer>> mContainers;
    ::ll::TypedStorage<1, 1, bool const>                                                      mIsClientSide;
    ::ll::TypedStorage<4, 4, int>                                                             mTicksSinceLastCleanup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Threading::SharedRecursiveMutex>>      mContainerContextMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContainerRegistry();

    virtual std::unique_ptr<ListTag> serializeContainerContent(::FullContainerName const&, ::SaveContext const&);

    virtual std::optional<int> getDynamicContainerWeight(::FullContainerName const&);

    virtual bool hasContainer(::FullContainerName const&) const;

    virtual std::shared_ptr<StorageItemContainerModel> getModel(::FullContainerName const&);

    virtual std::shared_ptr<FillingContainer> getBackingContainer(::FullContainerName const&);

    virtual void tryCreateEntry(::StorageItemComponent*, ::StorageWeightLimitItemComponent*, ::FullContainerName const&);

    virtual std::unique_ptr<DynamicContainerManager> createContainerManager(::FullContainerName const&, ::ItemStack const&, ::StorageItemComponent*, ::StorageWeightLimitItemComponent*);

    virtual uint generateNewID();

    virtual void tryLoadSavedStorageItem(::ListTag const&, ::FullContainerName const&);

    virtual void setExpired(std::vector<FullContainerName> const&);

    virtual ulong getSize();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ContainerRegistry(bool);

    MCNAPI ::DynamicTrackedContainer&
    _getOrCreate(::FullContainerName const&, ::StorageItemComponent*, ::StorageWeightLimitItemComponent*);

    MCNAPI int _tick(std::function<void(Packet&)>, int);

    MCNAPI void tick(std::function<void(Packet&)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<ListTag> $serializeContainerContent(::FullContainerName const&, ::SaveContext const&);

    MCNAPI std::optional<int> $getDynamicContainerWeight(::FullContainerName const&);

    MCNAPI bool $hasContainer(::FullContainerName const&) const;

    MCNAPI std::shared_ptr<StorageItemContainerModel> $getModel(::FullContainerName const&);

    MCNAPI std::shared_ptr<FillingContainer> $getBackingContainer(::FullContainerName const&);

    MCNAPI void
    $tryCreateEntry(::StorageItemComponent*, ::StorageWeightLimitItemComponent*, ::FullContainerName const&);

    MCNAPI std::unique_ptr<DynamicContainerManager> $createContainerManager(
        ::FullContainerName const&,
        ::ItemStack const&,
        ::StorageItemComponent*,
        ::StorageWeightLimitItemComponent*
    );

    MCNAPI uint $generateNewID();

    MCNAPI void $tryLoadSavedStorageItem(::ListTag const&, ::FullContainerName const&);

    MCNAPI void $setExpired(std::vector<FullContainerName> const&);

    MCNAPI ulong $getSize();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
