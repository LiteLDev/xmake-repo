#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/core/utility/Owner.h"
#include "mc/deps/ecs/profiling/EntitySystemTimeTracker.h"
#include "mc/platform/brstd/flat_map.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityId;
#else // @header-generator platform
#endif // @header-generator platform
class EntityRegistry;
class EntitySystems;
#if defined(LL_PLAT_A) // @header-generator platform
struct TickingSystemId;
namespace ECS::Profiling { class MultiEntityTrackingSheet; }
namespace ECS::Profiling { class SingleEntityTrackingSheet; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ECS::Profiling {

class EntitySystemProfiler {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::EntityRegistry&>                          mEntityRegistry;
    ::ll::TypedStorage<8, 8, ::EntitySystems&>                           mEntitySystems;
    ::ll::TypedStorage<8, 16, std::shared_ptr<char>>                     mDeathCanary;
    ::ll::TypedStorage<8, 64, ::ECS::Profiling::EntitySystemTimeTracker> mTracker;
    ::ll::UntypedStorage<8, 3256>                                        mSingleEntitySheet;
    ::ll::UntypedStorage<8, 732856>                                      mMultipleEntitySheet;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>      mUnkeaafc6;
    ::ll::UntypedStorage<8, 8>      mUnk206cab;
    ::ll::UntypedStorage<8, 16>     mUnk65eb32;
    ::ll::UntypedStorage<8, 64>     mUnka1e533;
    ::ll::UntypedStorage<8, 3256>   mUnka6ff4b;
    ::ll::UntypedStorage<8, 732856> mUnk150727;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemProfiler& operator=(EntitySystemProfiler const&);
    EntitySystemProfiler(EntitySystemProfiler const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EntitySystemProfiler();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void ClearTrackingSheet();

    MCNAPI EntitySystemProfiler(::EntityRegistry& entityRegistry, ::EntitySystems& entitySystems);

    MCNAPI void InstallHooks();

    MCNAPI void SetSingleTrackingSheet();

    MCNAPI void UninstallHooks();

    MCNAPI void ZeroAllTimes();

    MCNAPI ~EntitySystemProfiler();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::EntityRegistry&, ::EntitySystems&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::EntityRegistry& entityRegistry, ::EntitySystems& entitySystems);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ECS::Profiling
