#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct EmotePlayedTelemetryDataComponent;
struct EventingDispatcherComponent;
struct EventingRequestQueueComponent;
struct ShouldStopEmotingRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

class PersonaEmoteInputSystem {
public:
    // PersonaEmoteInputSystem inner types define
    using SystemView = ::ViewT<
        StrictEntityContext,
        Include<ShouldStopEmotingRequestComponent>,
        const EventingDispatcherComponent,
        const EmotePlayedTelemetryDataComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _personaEmoteInputSystem(
        ::StrictEntityContext const&,
        ::EventingDispatcherComponent const&,
        ::EmotePlayedTelemetryDataComponent const&,
        ::ViewT<StrictEntityContext, EventingRequestQueueComponent>,
        ::EntityModifier<EmotePlayedTelemetryDataComponent, ShouldStopEmotingRequestComponent>
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
