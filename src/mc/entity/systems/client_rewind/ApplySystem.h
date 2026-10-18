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
#ifndef LL_GENERATED_ANDROID_BASE_STUB_CLIENTREWIND__APPLYTRACKERSYSTEM
#define LL_GENERATED_ANDROID_BASE_STUB_CLIENTREWIND__APPLYTRACKERSYSTEM
namespace ClientRewind { class ApplyTrackerSystem {}; }
#endif
#else // @header-generator platform
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct InterpolateMovementNeededComponent;
namespace ClientRewind { struct ApplyReplayStateTrackerRequestComponent; }
#endif // @header-generator platform
// clang-format on

namespace ClientRewind {

#if defined(LL_PLAT_A) // @header-generator platform
struct ApplySystem : public ::ClientRewind::ApplyTrackerSystem {};
#else // @header-generator platform
struct ApplySystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                         ::Filter<::InterpolateMovementNeededComponent>,
                         ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
                         ::Write<
                             ::ActorDataFlagComponent,
                             ::ActorDataHorseFlagComponent,
                             ::ActorDataJumpDurationComponent,
                             ::ActorDataBoundingBoxComponent,
                             ::ActorDataSeatOffsetComponent,
                             ::ActorDataDirtyFlagsComponent>,
                         ::AddRemove<>,
                         ::GlobalRead<>,
                         ::GlobalWrite<>,
                         ::EntityFactoryT<>>> {
public:
    // ApplySystem inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<::InterpolateMovementNeededComponent>,
        ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
        ::Write<
            ::ActorDataFlagComponent,
            ::ActorDataHorseFlagComponent,
            ::ActorDataJumpDurationComponent,
            ::ActorDataBoundingBoxComponent,
            ::ActorDataSeatOffsetComponent,
            ::ActorDataDirtyFlagsComponent>,
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
            ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>&
    ) /*override*/;

    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
            ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>&,
        ::StrictEntityContext&
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tickEntity(
        ::StrictEntityContext const&                             entity,
        ::ClientRewind::ApplyReplayStateTrackerRequestComponent& request,
        ::ActorDataDirtyFlagsComponent&                          dirtyFlags,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorDataFlagComponent,
            ::Optional<::ActorDataHorseFlagComponent>,
            ::Optional<::ActorDataJumpDurationComponent>,
            ::Optional<::ActorDataBoundingBoxComponent>,
            ::Optional<::ActorDataSeatOffsetComponent>> const& tracked
    );
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ClientRewind
