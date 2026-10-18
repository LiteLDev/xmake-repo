#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/EntityId.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class EntityId;
#endif // @header-generator platform
struct TickingSystemId;
namespace Bedrock::Profiling { class PerfClock; }
namespace ECS::Profiling { class IEntityTrackingSheet; }
// clang-format on

namespace ECS::Profiling {

class EntitySystemTimeTracker {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // EntitySystemTimeTracker inner types define
    using SystemStack = ::Bedrock::small_vector<TickingSystemId, 2>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, ::EntityId> mEntityFilter;
    ::ll::TypedStorage<4, 4, ::EntityId> mCurrentEntity;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<Bedrock::Profiling::PerfClock, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>>> mCurrentEntityStartTime;
    ::ll::UntypedStorage<8, 24> mSystemStack;
    ::ll::UntypedStorage<8, 24> mTrackingSheet;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk2a397e;
    ::ll::UntypedStorage<4, 4>  mUnkd4db5a;
    ::ll::UntypedStorage<8, 8>  mUnk1b6fe4;
    ::ll::UntypedStorage<8, 24> mUnkbf573c;
    ::ll::UntypedStorage<8, 24> mUnk19dd2d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EntitySystemTimeTracker& operator=(EntitySystemTimeTracker const&);
    EntitySystemTimeTracker(EntitySystemTimeTracker const&);
    EntitySystemTimeTracker();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void finishTimingCurrentEntity(::EntityId entity);

    MCNAPI void setTrackingSheet(::Bedrock::NonOwnerPointer<::ECS::Profiling::IEntityTrackingSheet> trackingSheet);

    MCNAPI ~EntitySystemTimeTracker();
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
