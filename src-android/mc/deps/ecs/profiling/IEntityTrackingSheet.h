#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class EntityId;
struct TickingSystemId;
// clang-format on

namespace ECS::Profiling {

class IEntityTrackingSheet {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IEntityTrackingSheet() = default;

    virtual void clearAllEntities() = 0;

    virtual void zeroAllTimes() = 0;

    virtual void reserveEntity(::EntityId) = 0;

    virtual void reserveSystems(ulong) = 0;

    virtual void addTime(::EntityId, ::TickingSystemId, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>) = 0;

    virtual void addNonSystemTime(::EntityId, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>) = 0;

    virtual ::brstd::flat_map<EntityId, Bedrock::small_vector<std::chrono::duration<long, std::ratio<1, 1000000000000000000>>, 400>, std::less<EntityId>, std::vector<EntityId>, std::vector<Bedrock::small_vector<std::chrono::duration<long, std::ratio<1, 1000000000000000000>>, 400>>> exportData() const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace ECS::Profiling
