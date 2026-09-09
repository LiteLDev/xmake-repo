#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/Listener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
struct LevelGameRuleChangeEvent;
struct ScriptingWorldInitializeEvent;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLevelGlobalEventListener : public ::EventListenerDispatcher<LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>> mListeners;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptLevelGlobalEventListener();

    virtual ::EventResult onLevelAddedPlayer(::Player&);

    virtual ::EventResult onLevelRemovedPlayer(::Player&);

    virtual ::EventResult onLevelRemovedActor(::Actor&);

    virtual ::EventResult onLevelTick(::Level&);

    virtual ::EventResult onLevelWeatherChange(std::string const&, bool, bool, bool, bool);

    virtual ::EventResult onEvent(::LevelGameRuleChangeEvent const&);

    virtual ::EventResult onEvent(::ScriptingWorldInitializeEvent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerListener(
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptWorldAfterEvents>
    );

    MCNAPI void registerListener(
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptV010Events>
    );

    MCNAPI void unregisterListener(::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldAfterEvents>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onLevelAddedPlayer(::Player&);

    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player&);

    MCNAPI ::EventResult $onLevelRemovedActor(::Actor&);

    MCNAPI ::EventResult $onLevelTick(::Level&);

    MCNAPI ::EventResult $onLevelWeatherChange(std::string const&, bool, bool, bool, bool);

    MCNAPI ::EventResult $onEvent(::LevelGameRuleChangeEvent const&);

    MCNAPI ::EventResult $onEvent(::ScriptingWorldInitializeEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
