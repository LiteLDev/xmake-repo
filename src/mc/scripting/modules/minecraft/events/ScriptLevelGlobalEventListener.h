#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/scripting/modules/minecraft/Listener.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/Listener.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils { struct Listener; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptLevelGlobalEventListener : public ::EventListenerDispatcher<LevelEventListener> {
#else // @header-generator platform
class ScriptLevelGlobalEventListener : public ::EventListenerDispatcher<::LevelEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>> mListeners;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>>
        mListeners;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptLevelGlobalEventListener();
#else // @header-generator platform
    virtual ::EventResult onEvent(::ScriptingWorldInitializeEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelAddedPlayer(::Player&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::LevelGameRuleChangeEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelRemovedPlayer(::Player&);
#else // @header-generator platform
    virtual ::EventResult onLevelTick(::Level& level) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelRemovedActor(::Actor&);
#else // @header-generator platform
    virtual ::EventResult onLevelAddedPlayer(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelTick(::Level&);
#else // @header-generator platform
    virtual ::EventResult onLevelRemovedPlayer(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelWeatherChange(std::string const&, bool, bool, bool, bool);
#else // @header-generator platform
    virtual ::EventResult onLevelWeatherChange(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::EventResult onLevelRemovedActor(::Actor& actor) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelAddedPlayer(::Player&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ScriptingWorldInitializeEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::LevelGameRuleChangeEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelRemovedActor(::Actor&);
#else // @header-generator platform
    MCAPI ::EventResult $onLevelTick(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelTick(::Level&);
#else // @header-generator platform
    MCAPI ::EventResult $onLevelAddedPlayer(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelWeatherChange(std::string const&, bool, bool, bool, bool);
#else // @header-generator platform
    MCAPI ::EventResult $onLevelRemovedPlayer(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::LevelGameRuleChangeEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onLevelWeatherChange(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ScriptingWorldInitializeEvent const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::EventResult $onLevelRemovedActor(::Actor& actor);
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

} // namespace ScriptModuleMinecraft
