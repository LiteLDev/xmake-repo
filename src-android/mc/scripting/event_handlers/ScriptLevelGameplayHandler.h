#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/gameplayhandlers/LevelGameplayHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"

// auto generated forward declare list
// clang-format off
struct LevelWeatherChangedEvent;
struct ScriptingWorldInitializeEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptLevelGameplayHandler : public ::EventHandlerDispatcher<LevelGameplayHandler>,
                                   public ::ScriptEventHandler<ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptLevelGameplayHandler();

    virtual ::HandlerResult handleEvent(::ScriptingWorldInitializeEvent const&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::LevelWeatherChangedEvent&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _handleWeatherChangedEvent(
        ::LevelWeatherChangedEvent&,
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
    MCNAPI ::HandlerResult $handleEvent(::ScriptingWorldInitializeEvent const&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::LevelWeatherChangedEvent&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
