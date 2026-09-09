#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/gameplayhandlers/PlayerGameplayHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#include "mc/world/events/MutablePlayerGameplayEvent.h"
#include "mc/world/events/PlayerGameplayEvent.h"

// auto generated forward declare list
// clang-format off
struct PlayerDisconnectEvent;
struct PlayerGameModeChangeEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptPlayerGameplayHandler : public ::EventHandlerDispatcher<PlayerGameplayHandler>,
                                    public ::ScriptEventHandler<ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptPlayerGameplayHandler();

    virtual ::HandlerResult handleEvent(::PlayerDisconnectEvent const&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::MutablePlayerGameplayEvent<CoordinatorResult>&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::PlayerGameplayEvent<CoordinatorResult> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _handleCoordinatorPlayerGameplayEvent(
        ::PlayerGameplayEvent<CoordinatorResult> const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    );

    MCNAPI bool _handlePlayerGameModeChangeEvent(
        ::PlayerGameModeChangeEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HandlerResult $handleEvent(::PlayerDisconnectEvent const&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::MutablePlayerGameplayEvent<CoordinatorResult>&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::PlayerGameplayEvent<CoordinatorResult> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
