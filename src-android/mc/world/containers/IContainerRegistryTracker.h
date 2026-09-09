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
    // clang-format off
    virtual std::unique_ptr<DynamicContainerManager> createContainerManager(::FullContainerName const&, ::ItemStack const&, ::StorageItemComponent*, ::StorageWeightLimitItemComponent*) = 0;

    virtual ~IContainerRegistryTracker() = default;

    virtual uint generateNewID() = 0;

    virtual void tryLoadSavedStorageItem(::ListTag const&, ::FullContainerName const&) = 0;

    virtual void setExpired(std::vector<FullContainerName> const&) = 0;

    virtual ulong getSize() = 0;
    // clang-format on
    // NOLINTEND
};
