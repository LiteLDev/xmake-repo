#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/containers/FullContainerName.h"

// auto generated forward declare list
// clang-format off
class DynamicContainerManager;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class ItemStack;
class StorageItemComponent;
class StorageWeightLimitItemComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct ContainerOwner;
#else // @header-generator platform
#endif // @header-generator platform
struct PlayerContainerRefresher;
// clang-format on

class DynamicContainerTracker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<1, 16> mContainerRegistryAccess;
    ::ll::UntypedStorage<1, 16> mContainerRegistryManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<FullContainerName, std::unique_ptr<DynamicContainerManager>>> mTrackedContainers;
    ::ll::TypedStorage<8, 40, std::unordered_set<FullContainerName>> mMarkedReachable;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryAccess>>  mContainerRegistryAccess;
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryTracker>> mContainerRegistryManager;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::FullContainerName, ::std::unique_ptr<::DynamicContainerManager>>>
                                                                         mTrackedContainers;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::FullContainerName>> mMarkedReachable;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DynamicContainerTracker();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ItemStack>
           _initializeStorageItem(::ItemStack const&, ::StorageItemComponent*, ::StorageWeightLimitItemComponent*);
#else // @header-generator platform
    MCAPI ::std::optional<::ItemStack> _initializeStorageItem(
        ::ItemStack const&                 item,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _markAux(::ItemStack const&, int);
#else // @header-generator platform
    MCAPI void _markAux(::ItemStack const& item, int depth);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _retrackRecursiveAux(::ItemStack const&, int);
#else // @header-generator platform
    MCAPI void _retrackRecursiveAux(::ItemStack const& item, int depth);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void broadcastChanges(::PlayerContainerRefresher&, std::function<void()>) const;
#else // @header-generator platform
    MCAPI void
    broadcastChanges(::PlayerContainerRefresher& refresher, ::std::function<void()> contentsChangedCallback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void giveContainerLifetimes(::ContainerOwner&) const;
#else // @header-generator platform
    MCAPI void sweep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasTrackingData() const;

    MCNAPI void mark(::ItemStack const&);

    MCNAPI void sweep();

    MCNAPI std::optional<ItemStack> tryTrackContainer(::ItemStack const&);

    MCNAPI ~DynamicContainerTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::std::optional<::ItemStack> tryTrackContainer(::ItemStack const& item);
#endif // @header-generator platform
    // NOLINTEND
};
