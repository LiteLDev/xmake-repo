#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/EntityId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/profiling/IEntityTrackingSheet.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class EntityId;
#endif // @header-generator platform
struct TickingSystemId;
// clang-format on

namespace ECS::Profiling {

class SingleEntityTrackingSheet : public ::ECS::Profiling::IEntityTrackingSheet {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // SingleEntityTrackingSheet inner types define
    using TimeCostBySystem =
        ::Bedrock::small_vector<std::chrono::duration<long, std::ratio<1, 1000000000000000000>>, 400>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::EntityId> mEntity;
    ::ll::UntypedStorage<8, 3216>        mTimeCostBySystem;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>    mUnke7dde0;
    ::ll::UntypedStorage<8, 3216> mUnk3c16cc;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SingleEntityTrackingSheet& operator=(SingleEntityTrackingSheet const&);
    SingleEntityTrackingSheet(SingleEntityTrackingSheet const&);
    SingleEntityTrackingSheet();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~SingleEntityTrackingSheet();
#else // @header-generator platform
    virtual void clearAllEntities() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearAllEntities();
#else // @header-generator platform
    virtual void zeroAllTimes() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void zeroAllTimes();
#else // @header-generator platform
    virtual void reserveEntity(::EntityId entity) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reserveEntity(::EntityId);
#else // @header-generator platform
    virtual void reserveSystems(uint64 numSystems) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reserveSystems(ulong);
#else // @header-generator platform
    virtual void addTime(
        ::EntityId                                                           entity,
        ::TickingSystemId                                                    system,
        ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>> dur
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addTime(::EntityId, ::TickingSystemId, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>);
#else // @header-generator platform
    virtual void addNonSystemTime(
        ::EntityId                                                           entity,
        ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>> dur
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addNonSystemTime(::EntityId, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>);

    virtual ::brstd::flat_map<EntityId, Bedrock::small_vector<std::chrono::duration<long, std::ratio<1, 1000000000000000000>>, 400>, std::less<EntityId>, std::vector<EntityId>, std::vector<Bedrock::small_vector<std::chrono::duration<long, std::ratio<1, 1000000000000000000>>, 400>>> exportData() const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::brstd::flat_map<
        ::EntityId,
        ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>,
        ::std::less<::EntityId>,
        ::std::vector<::EntityId>,
        ::std::vector<
            ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>>>
    exportData() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearAllEntities();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $clearAllEntities();

    MCNAPI void $zeroAllTimes();

    MCNAPI void $reserveEntity(::EntityId entity);

    MCNAPI void $reserveSystems(uint64 numSystems);

    MCNAPI void $addTime(
        ::EntityId                                                           entity,
        ::TickingSystemId                                                    system,
        ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>> dur
    );

    MCNAPI void
    $addNonSystemTime(::EntityId entity, ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>> dur);

    MCNAPI ::brstd::flat_map<
        ::EntityId,
        ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>,
        ::std::less<::EntityId>,
        ::std::vector<::EntityId>,
        ::std::vector<
            ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>>>
    $exportData() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $zeroAllTimes();
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reserveEntity(::EntityId);

    MCNAPI void $reserveSystems(ulong);

    MCNAPI void
        $addTime(::EntityId, ::TickingSystemId, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>);

    MCNAPI void $addNonSystemTime(::EntityId, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>);

    MCNAPI ::brstd::flat_map<
        EntityId,
        Bedrock::small_vector<std::chrono::duration<long, std::ratio<1, 1000000000000000000>>, 400>,
        std::less<EntityId>,
        std::vector<EntityId>,
        std::vector<Bedrock::small_vector<std::chrono::duration<long, std::ratio<1, 1000000000000000000>>, 400>>>
    $exportData() const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ECS::Profiling
