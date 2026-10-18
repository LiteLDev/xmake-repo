#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/gameplayhandlers/PlayerGameplayHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/MutablePlayerGameplayEvent.h"
#include "mc/world/events/PlayerGameplayEvent.h"

// auto generated forward declare list
// clang-format off
struct PlayerDisconnectEvent;
#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerGameModeChangeEvent;
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptPlayerGameplayHandler : public ::EventHandlerDispatcher<PlayerGameplayHandler>,
                                    public ::ScriptEventHandler<ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
#else // @header-generator platform
class ScriptPlayerGameplayHandler : public ::EventHandlerDispatcher<::PlayerGameplayHandler>,
                                    public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptPlayerGameplayHandler();
#else // @header-generator platform
    virtual ::HandlerResult handleEvent(::PlayerDisconnectEvent const& playerDisconnectEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HandlerResult handleEvent(::PlayerDisconnectEvent const&);
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutablePlayerGameplayEvent<::CoordinatorResult>& event) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::PlayerGameplayEvent<::CoordinatorResult> const& event) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HandlerResult $handleEvent(::PlayerDisconnectEvent const&);
#else // @header-generator platform
    MCAPI ::HandlerResult $handleEvent(::PlayerDisconnectEvent const& playerDisconnectEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::MutablePlayerGameplayEvent<CoordinatorResult>&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::MutablePlayerGameplayEvent<::CoordinatorResult>& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::PlayerGameplayEvent<CoordinatorResult> const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::PlayerGameplayEvent<::CoordinatorResult> const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
