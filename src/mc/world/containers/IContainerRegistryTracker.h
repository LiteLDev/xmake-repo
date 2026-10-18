#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DynamicContainerManager;
class ItemStack;
class ListTag;
class StorageItemComponent;
class StorageWeightLimitItemComponent;
struct FullContainerName;
// clang-format on

class IContainerRegistryTracker {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual std::unique_ptr<DynamicContainerManager> createContainerManager(::FullContainerName const&, ::ItemStack const&, ::StorageItemComponent*, ::StorageWeightLimitItemComponent*) = 0;

    virtual ~IContainerRegistryTracker() = default;
#else // @header-generator platform
    virtual ::std::unique_ptr<::DynamicContainerManager> createContainerManager(
        ::FullContainerName const&         id,
        ::ItemStack const&                 storageItem,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    ) = 0;
#endif // @header-generator platform

    virtual uint generateNewID() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tryLoadSavedStorageItem(::ListTag const&, ::FullContainerName const&) = 0;
#else // @header-generator platform
    virtual void tryLoadSavedStorageItem(::ListTag const& contentData, ::FullContainerName const& name) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setExpired(std::vector<FullContainerName> const&) = 0;
#else // @header-generator platform
    virtual void setExpired(::std::vector<::FullContainerName> const& removedContainers) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSize() = 0;
    // clang-format on
#else // @header-generator platform
    virtual uint64 getSize() = 0;

    virtual ~IContainerRegistryTracker() = default;
#endif // @header-generator platform
    // NOLINTEND
};
