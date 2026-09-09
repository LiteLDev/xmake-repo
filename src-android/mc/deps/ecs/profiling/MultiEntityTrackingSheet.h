#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/ecs/profiling/IEntityTrackingSheet.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemId;
// clang-format on

namespace ECS::Profiling {

class MultiEntityTrackingSheet : public ::ECS::Profiling::IEntityTrackingSheet {
public:
    // MultiEntityTrackingSheet inner types define
    using TimeCostBySystem = ::Bedrock::small_vector<
        brstd::flat_map<
            EntityId,
            std::chrono::duration<long, std::ratio<1, 1000000000000000000>>,
            std::less<EntityId>,
            Bedrock::small_vector<EntityId, 150>,
            Bedrock::small_vector<std::chrono::duration<long, std::ratio<1, 1000000000000000000>>, 150>>,
        400>;

    using TimeCostByEntity = ::brstd::flat_map<
        EntityId,
        std::chrono::duration<long, std::ratio<1, 1000000000000000000>>,
        std::less<EntityId>,
        Bedrock::small_vector<EntityId, 150>,
        Bedrock::small_vector<std::chrono::duration<long, std::ratio<1, 1000000000000000000>>, 150>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EntityId> mEntity;
    ::ll::UntypedStorage<8, 732816>      mTimeCostBySystem;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MultiEntityTrackingSheet();

    virtual void clearAllEntities();

    virtual void zeroAllTimes();

    virtual void reserveEntity(::EntityId);

    virtual void reserveSystems(ulong);

    virtual void addTime(::EntityId, ::TickingSystemId, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>);

    virtual void addNonSystemTime(::EntityId, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>);

    virtual ::brstd::flat_map<EntityId, Bedrock::small_vector<std::chrono::duration<long, std::ratio<1, 1000000000000000000>>, 400>, std::less<EntityId>, std::vector<EntityId>, std::vector<Bedrock::small_vector<std::chrono::duration<long, std::ratio<1, 1000000000000000000>>, 400>>> exportData() const;
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
    MCNAPI void $clearAllEntities();

    MCNAPI void $zeroAllTimes();

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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ECS::Profiling
