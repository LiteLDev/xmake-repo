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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual std::shared_ptr<StorageItemContainerModel> getModel(::FullContainerName const&) = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::StorageItemContainerModel> getModel(::FullContainerName const& name) = 0;

    virtual ::std::shared_ptr<::FillingContainer> getBackingContainer(::FullContainerName const& name) = 0;

    virtual void tryCreateEntry(
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent,
        ::FullContainerName const&         name
    ) = 0;
#endif // @header-generator platform

    virtual ~IContainerRegistryAccess() = default;
#if defined(LL_PLAT_A) // @header-generator platform

    virtual std::shared_ptr<FillingContainer> getBackingContainer(::FullContainerName const&) = 0;

    virtual void tryCreateEntry(::StorageItemComponent*, ::StorageWeightLimitItemComponent*, ::FullContainerName const&) = 0;
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
