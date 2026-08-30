#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/core/utility/Owner.h"
#include "mc/deps/ecs/profiling/EntitySystemTimeTracker.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class EntityId;
class EntityRegistry;
class EntitySystems;
struct TickingSystemId;
namespace ECS::Profiling { class MultiEntityTrackingSheet; }
namespace ECS::Profiling { class SingleEntityTrackingSheet; }
// clang-format on

namespace ECS::Profiling {

class EntitySystemProfiler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EntityRegistry&>                          mEntityRegistry;
    ::ll::TypedStorage<8, 8, ::EntitySystems&>                           mEntitySystems;
    ::ll::TypedStorage<8, 16, std::shared_ptr<char>>                     mDeathCanary;
    ::ll::TypedStorage<8, 64, ::ECS::Profiling::EntitySystemTimeTracker> mTracker;
    ::ll::UntypedStorage<8, 3256>                                        mSingleEntitySheet;
    ::ll::UntypedStorage<8, 732856>                                      mMultipleEntitySheet;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemProfiler& operator=(EntitySystemProfiler const&);
    EntitySystemProfiler(EntitySystemProfiler const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ClearEntityFilter();

    MCNAPI void ClearTrackingSheet();

    MCNAPI EntitySystemProfiler(::EntityRegistry&, ::EntitySystems&);

    MCNAPI ::EntityRegistry const& GetAssociatedRegistry() const;

    MCNAPI void InstallHooks();

    MCNAPI bool IsTracking() const;

    MCNAPI void SetEntityFilter(::EntityId);

    MCNAPI void SetMultiTrackingSheet();

    MCNAPI void SetSingleTrackingSheet();

    MCNAPI void UninstallHooks();

    MCNAPI void ZeroAllTimes();

    MCNAPI ~EntitySystemProfiler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EntityRegistry&, ::EntitySystems&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ECS::Profiling
