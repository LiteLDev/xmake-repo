#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Include<ShouldStopEmotingRequestComponent>,
        const EventingDispatcherComponent,
        const EmotePlayedTelemetryDataComponent>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::ShouldStopEmotingRequestComponent>,
        ::EventingDispatcherComponent const,
        ::EmotePlayedTelemetryDataComponent const>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _personaEmoteInputSystem(
        ::StrictEntityContext const&,
        ::EventingDispatcherComponent const&,
        ::EmotePlayedTelemetryDataComponent const&,
        ::ViewT<StrictEntityContext, EventingRequestQueueComponent>,
        ::EntityModifier<EmotePlayedTelemetryDataComponent, ShouldStopEmotingRequestComponent>
#else // @header-generator platform
    MCAPI static void _personaEmoteInputSystem(
        ::StrictEntityContext const&                                    entity,
        ::EventingDispatcherComponent const&                            eventingDispatcherComponent,
        ::EmotePlayedTelemetryDataComponent const&                      emotePlayedTelemetryDataComponent,
        ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent> requestQueueView,
        ::EntityModifier<::EmotePlayedTelemetryDataComponent, ::ShouldStopEmotingRequestComponent> modifier
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
