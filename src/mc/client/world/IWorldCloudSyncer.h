#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/WorldCloudSyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { struct ContainerSyncState; }
namespace World { struct WorldID; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/WorldCloudSyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { struct ContainerSyncState; }
namespace World { struct WorldID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class IWorldCloudSyncer {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IWorldCloudSyncer();

    virtual void syncWorld(::World::WorldID const&, std::function<void (World::WorldCloudSyncResult)> const&) = 0;

    virtual ::Core::ContainerSyncState getSyncState(::World::WorldID const&) const = 0;

    virtual std::optional<ulong> getConsumedRemoteStorageQuota(::World::WorldID const&) const = 0;

    virtual void setLocalOnly(::World::WorldID const&, bool, std::function<void (World::WorldCloudSyncResult)> const&) = 0;

    virtual void setCloudSaved(::World::WorldID const&, bool, std::function<void (World::WorldCloudSyncResult)> const&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IWorldCloudSyncer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldCloudSyncer() = default;

    virtual void
    syncWorld(::World::WorldID const& id, ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete) = 0;

    virtual ::Core::ContainerSyncState getSyncState(::World::WorldID const& id) const = 0;

    virtual ::std::optional<uint64> getConsumedRemoteStorageQuota(::World::WorldID const& id) const = 0;

    virtual void setLocalOnly(
        ::World::WorldID const&                                     id,
        bool                                                        forceLocalOnly,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    ) = 0;

    virtual void setCloudSaved(
        ::World::WorldID const&                                     id,
        bool                                                        isRetry,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    ) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IWorldCloudSyncer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
