#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/DynamicTrackedContainer.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct DynamicTrackedContainer;
#endif // @header-generator platform
namespace Bedrock::Threading { class SharedRecursiveMutex; }
// clang-format on

class ContainerRegistry : public ::IDynamicContainerSerialization,
                          public ::IContainerRegistryAccess,
                          public ::IContainerRegistryTracker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                                            mNextDynamicId;
    ::ll::TypedStorage<8, 40, std::unordered_map<FullContainerName, DynamicTrackedContainer>> mContainers;
    ::ll::TypedStorage<1, 1, bool const>                                                      mIsClientSide;
    ::ll::TypedStorage<4, 4, int>                                                             mTicksSinceLastCleanup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Threading::SharedRecursiveMutex>>      mContainerContextMutex;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                                                  mNextDynamicId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::FullContainerName, ::DynamicTrackedContainer>> mContainers;
    ::ll::TypedStorage<1, 1, bool const>                                                            mIsClientSide;
    ::ll::TypedStorage<4, 4, int>                                                            mTicksSinceLastCleanup;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Threading::SharedRecursiveMutex>> mContainerContextMutex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ContainerRegistry();
#else // @header-generator platform
    virtual ~ContainerRegistry() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ListTag> serializeContainerContent(::FullContainerName const&, ::SaveContext const&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::ListTag>
    serializeContainerContent(::FullContainerName const& name, ::SaveContext const& saveContext) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<int> getDynamicContainerWeight(::FullContainerName const&);
#else // @header-generator platform
    virtual ::std::optional<int> getDynamicContainerWeight(::FullContainerName const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasContainer(::FullContainerName const&) const;
#else // @header-generator platform
    virtual bool hasContainer(::FullContainerName const& name) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<StorageItemContainerModel> getModel(::FullContainerName const&);
#else // @header-generator platform
    virtual ::std::shared_ptr<::StorageItemContainerModel> getModel(::FullContainerName const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<FillingContainer> getBackingContainer(::FullContainerName const&);
#else // @header-generator platform
    virtual ::std::shared_ptr<::FillingContainer> getBackingContainer(::FullContainerName const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tryCreateEntry(::StorageItemComponent*, ::StorageWeightLimitItemComponent*, ::FullContainerName const&);
#else // @header-generator platform
    virtual void tryCreateEntry(
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent,
        ::FullContainerName const&         name
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<DynamicContainerManager> createContainerManager(::FullContainerName const&, ::ItemStack const&, ::StorageItemComponent*, ::StorageWeightLimitItemComponent*);
#else // @header-generator platform
    virtual ::std::unique_ptr<::DynamicContainerManager> createContainerManager(
        ::FullContainerName const&         id,
        ::ItemStack const&                 storageItem,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint generateNewID();
#else // @header-generator platform
    virtual uint generateNewID() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tryLoadSavedStorageItem(::ListTag const&, ::FullContainerName const&);
#else // @header-generator platform
    virtual void tryLoadSavedStorageItem(::ListTag const& contentData, ::FullContainerName const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setExpired(std::vector<FullContainerName> const&);
#else // @header-generator platform
    virtual void setExpired(::std::vector<::FullContainerName> const& removedContainers) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSize();
    // clang-format on
#else // @header-generator platform
    virtual uint64 getSize() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ContainerRegistry(bool);
#else // @header-generator platform
    MCAPI explicit ContainerRegistry(bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DynamicTrackedContainer&
    _getOrCreate(::FullContainerName const&, ::StorageItemComponent*, ::StorageWeightLimitItemComponent*);
#else // @header-generator platform
    MCAPI ::DynamicTrackedContainer& _getOrCreate(
        ::FullContainerName const&         id,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _tick(std::function<void(Packet&)>, int);

    MCNAPI void tick(std::function<void(Packet&)>);
#else // @header-generator platform
    MCAPI int _tick(::std::function<void(::Packet&)> broadcastPacketFunction, int ticksSinceLastCleanup);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(bool isClientSide);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ListTag> $serializeContainerContent(::FullContainerName const&, ::SaveContext const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ListTag>
    $serializeContainerContent(::FullContainerName const& name, ::SaveContext const& saveContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<int> $getDynamicContainerWeight(::FullContainerName const&);
#else // @header-generator platform
    MCAPI ::std::optional<int> $getDynamicContainerWeight(::FullContainerName const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasContainer(::FullContainerName const&) const;
#else // @header-generator platform
    MCAPI bool $hasContainer(::FullContainerName const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<StorageItemContainerModel> $getModel(::FullContainerName const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::StorageItemContainerModel> $getModel(::FullContainerName const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<FillingContainer> $getBackingContainer(::FullContainerName const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::FillingContainer> $getBackingContainer(::FullContainerName const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $tryCreateEntry(::StorageItemComponent*, ::StorageWeightLimitItemComponent*, ::FullContainerName const&);

    MCNAPI std::unique_ptr<DynamicContainerManager> $createContainerManager(
        ::FullContainerName const&,
        ::ItemStack const&,
        ::StorageItemComponent*,
        ::StorageWeightLimitItemComponent*
#else // @header-generator platform
    MCAPI void $tryCreateEntry(
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent,
        ::FullContainerName const&         name
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $generateNewID();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::DynamicContainerManager> $createContainerManager(
        ::FullContainerName const&         id,
        ::ItemStack const&                 storageItem,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tryLoadSavedStorageItem(::ListTag const&, ::FullContainerName const&);
#else // @header-generator platform
    MCAPI uint $generateNewID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setExpired(std::vector<FullContainerName> const&);
#else // @header-generator platform
    MCAPI void $tryLoadSavedStorageItem(::ListTag const& contentData, ::FullContainerName const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getSize();
#else // @header-generator platform
    MCAPI void $setExpired(::std::vector<::FullContainerName> const& removedContainers);

    MCFOLD uint64 $getSize();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftableForIDynamicContainerSerialization();

    MCAPI static void** $vftableForIContainerRegistryTracker();

    MCAPI static void** $vftableForIContainerRegistryAccess();
#endif // @header-generator platform
    // NOLINTEND
};
