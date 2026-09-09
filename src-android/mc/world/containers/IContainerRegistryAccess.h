#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FillingContainer;
class StorageItemComponent;
class StorageItemContainerModel;
class StorageWeightLimitItemComponent;
struct FullContainerName;
// clang-format on

class IContainerRegistryAccess {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual std::shared_ptr<StorageItemContainerModel> getModel(::FullContainerName const&) = 0;

    virtual ~IContainerRegistryAccess() = default;

    virtual std::shared_ptr<FillingContainer> getBackingContainer(::FullContainerName const&) = 0;

    virtual void tryCreateEntry(::StorageItemComponent*, ::StorageWeightLimitItemComponent*, ::FullContainerName const&) = 0;
    // clang-format on
    // NOLINTEND
};
