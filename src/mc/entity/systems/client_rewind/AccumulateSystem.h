#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#ifndef LL_GENERATED_ANDROID_BASE_STUB_CLIENTREWIND__CONSTTRACKERSYSTEM
#define LL_GENERATED_ANDROID_BASE_STUB_CLIENTREWIND__CONSTTRACKERSYSTEM
namespace ClientRewind { class ConstTrackerSystem {}; }
#endif
#else // @header-generator platform
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct InterpolateMovementNeededComponent;
struct ReplayStateTrackerComponent;
#endif // @header-generator platform
// clang-format on

namespace ClientRewind {

#if defined(LL_PLAT_A) // @header-generator platform
struct AccumulateSystem : public ::ClientRewind::ConstTrackerSystem {};
#else // @header-generator platform
struct AccumulateSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                              ::Filter<::InterpolateMovementNeededComponent>,
                              ::Read<
                                  ::ActorDataFlagComponent,
                                  ::ActorDataHorseFlagComponent,
                                  ::ActorDataJumpDurationComponent,
                                  ::ActorDataBoundingBoxComponent,
                                  ::ActorDataSeatOffsetComponent>,
                              ::Write<::ReplayStateTrackerComponent>,
                              ::AddRemove<>,
                              ::GlobalRead<>,
                              ::GlobalWrite<>,
                              ::EntityFactoryT<>>> {
public:
    // AccumulateSystem inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<::InterpolateMovementNeededComponent>,
        ::Read<
            ::ActorDataFlagComponent,
            ::ActorDataHorseFlagComponent,
            ::ActorDataJumpDurationComponent,
            ::ActorDataBoundingBoxComponent,
            ::ActorDataSeatOffsetComponent>,
        ::Write<::ReplayStateTrackerComponent>,
        ::AddRemove<>,
        ::GlobalRead<>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent>,
            ::Write<::ReplayStateTrackerComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tickEntity(
        ::StrictEntityContext const&   entity,
        ::ReplayStateTrackerComponent& tracker,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorDataFlagComponent const,
            ::Optional<::ActorDataHorseFlagComponent const>,
            ::Optional<::ActorDataJumpDurationComponent const>,
            ::Optional<::ActorDataBoundingBoxComponent const>,
            ::Optional<::ActorDataSeatOffsetComponent const>> const& tracked
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent>,
            ::Write<::ReplayStateTrackerComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ClientRewind
