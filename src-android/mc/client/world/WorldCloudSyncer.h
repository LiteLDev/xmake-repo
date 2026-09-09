#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldCloudSyncer.h"
#include "mc/client/world/WorldCloudSyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { struct ContainerSyncState; }
namespace World { struct WorldID; }
// clang-format on

namespace World {

class WorldCloudSyncer : public ::World::IWorldCloudSyncer {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldCloudSyncer();

    virtual void syncWorld(::World::WorldID const&, std::function<void (World::WorldCloudSyncResult)> const&);

    virtual ::Core::ContainerSyncState getSyncState(::World::WorldID const&) const;

    virtual std::optional<ulong> getConsumedRemoteStorageQuota(::World::WorldID const&) const;

    virtual void setLocalOnly(::World::WorldID const&, bool, std::function<void (World::WorldCloudSyncResult)> const&);

    virtual void setCloudSaved(::World::WorldID const&, bool, std::function<void (World::WorldCloudSyncResult)> const&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $syncWorld(::World::WorldID const&, std::function<void(World::WorldCloudSyncResult)> const&);

    MCNAPI ::Core::ContainerSyncState $getSyncState(::World::WorldID const&) const;

    MCNAPI std::optional<ulong> $getConsumedRemoteStorageQuota(::World::WorldID const&) const;

    MCNAPI void $setLocalOnly(::World::WorldID const&, bool, std::function<void(World::WorldCloudSyncResult)> const&);

    MCNAPI void $setCloudSaved(::World::WorldID const&, bool, std::function<void(World::WorldCloudSyncResult)> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
