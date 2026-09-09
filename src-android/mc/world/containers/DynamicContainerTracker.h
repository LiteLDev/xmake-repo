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
struct ContainerOwner;
struct PlayerContainerRefresher;
// clang-format on

class DynamicContainerTracker {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<1, 16> mContainerRegistryAccess;
    ::ll::UntypedStorage<1, 16> mContainerRegistryManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<FullContainerName, std::unique_ptr<DynamicContainerManager>>> mTrackedContainers;
    ::ll::TypedStorage<8, 40, std::unordered_set<FullContainerName>> mMarkedReachable;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicContainerTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<ItemStack>
           _initializeStorageItem(::ItemStack const&, ::StorageItemComponent*, ::StorageWeightLimitItemComponent*);

    MCNAPI void _markAux(::ItemStack const&, int);

    MCNAPI void _retrackRecursiveAux(::ItemStack const&, int);

    MCNAPI void broadcastChanges(::PlayerContainerRefresher&, std::function<void()>) const;

    MCNAPI void giveContainerLifetimes(::ContainerOwner&) const;

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
    // NOLINTEND
};
