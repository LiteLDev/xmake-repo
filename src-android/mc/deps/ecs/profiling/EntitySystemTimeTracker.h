#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/EntityId.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemId;
namespace Bedrock::Profiling { class PerfClock; }
namespace ECS::Profiling { class IEntityTrackingSheet; }
// clang-format on

namespace ECS::Profiling {

class EntitySystemTimeTracker {
public:
    // EntitySystemTimeTracker inner types define
    using SystemStack = ::Bedrock::small_vector<TickingSystemId, 2>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::EntityId> mEntityFilter;
    ::ll::TypedStorage<4, 4, ::EntityId> mCurrentEntity;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<Bedrock::Profiling::PerfClock, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>>> mCurrentEntityStartTime;
    ::ll::UntypedStorage<8, 24> mSystemStack;
    ::ll::UntypedStorage<8, 24> mTrackingSheet;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntitySystemTimeTracker();

    MCNAPI void clearEntityFilter();

    MCNAPI void clearTrackingSheet();

    MCNAPI void finishTimingCurrentEntity(::EntityId);

    MCNAPI void finishTimingCurrentSystem(::TickingSystemId);

    MCNAPI ::Bedrock::NonOwnerPointer<ECS::Profiling::IEntityTrackingSheet> getMutableTrackingSheet();

    MCNAPI ::Bedrock::NonOwnerPointer<const ECS::Profiling::IEntityTrackingSheet> getTrackingSheet() const;

    MCNAPI void setEntityFilter(::EntityId);

    MCNAPI void setTrackingSheet(::Bedrock::NonOwnerPointer<ECS::Profiling::IEntityTrackingSheet>);

    MCNAPI void startTimingCurrentEntity(::EntityId);

    MCNAPI void startTimingCurrentSystem(::TickingSystemId);

    MCNAPI ~EntitySystemTimeTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ECS::Profiling
