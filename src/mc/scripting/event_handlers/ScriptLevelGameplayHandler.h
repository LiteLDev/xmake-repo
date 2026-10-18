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
#include "mc/gameplayhandlers/LevelGameplayHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct LevelWeatherChangedEvent;
struct ScriptingWorldInitializeEvent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptLevelGameplayHandler : public ::EventHandlerDispatcher<LevelGameplayHandler>,
                                   public ::ScriptEventHandler<ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
#else // @header-generator platform
class ScriptLevelGameplayHandler : public ::EventHandlerDispatcher<::LevelGameplayHandler>,
                                   public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptLevelGameplayHandler();
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::LevelWeatherChangedEvent& event) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::HandlerResult handleEvent(::ScriptingWorldInitializeEvent const& event) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HandlerResult $handleEvent(::ScriptingWorldInitializeEvent const&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::LevelWeatherChangedEvent& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::LevelWeatherChangedEvent&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::HandlerResult $handleEvent(::ScriptingWorldInitializeEvent const& event);
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
