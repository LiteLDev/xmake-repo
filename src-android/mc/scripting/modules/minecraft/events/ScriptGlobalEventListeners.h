#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorEventCoordinator;
class BlockEventCoordinator;
class ItemEventCoordinator;
class LevelEventCoordinator;
class ScriptingEventCoordinator;
class ServerNetworkEventCoordinator;
class ServerPlayerEventCoordinator;
namespace ScriptModuleMinecraft { class ScriptActorGlobalEventListener; }
namespace ScriptModuleMinecraft { class ScriptBlockGlobalEventListener; }
namespace ScriptModuleMinecraft { class ScriptItemGlobalEventListener; }
namespace ScriptModuleMinecraft { class ScriptLevelGlobalEventListener; }
namespace ScriptModuleMinecraft { class ScriptPlayerGlobalEventListener; }
namespace ScriptModuleMinecraft { class ScriptScriptingGlobalEventListener; }
namespace ScriptModuleMinecraft { class ScriptServerNetworkGlobalEventListener; }
namespace ScriptModuleMinecraftRealmsAdmin { class ScriptRealmsGlobalEventListener; }
namespace ScriptModuleParties { class ScriptPartiesGlobalEventListener; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptGlobalEventListeners {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ActorEventCoordinator&> mActorEventCoordinator;
    ::ll::TypedStorage<8, 8, ::BlockEventCoordinator&> mBlockEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ItemEventCoordinator&> mItemEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ServerPlayerEventCoordinator&> mPlayerEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ScriptingEventCoordinator&> mScriptingEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ServerNetworkEventCoordinator&> mServerNetworkEventCoordinator;
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&> mLevelEventCoordinator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptActorGlobalEventListener>> mActorEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptBlockGlobalEventListener>> mBlockEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptItemGlobalEventListener>> mItemEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleParties::ScriptPartiesGlobalEventListener>> mPartiesEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptPlayerGlobalEventListener>> mPlayerEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftRealmsAdmin::ScriptRealmsGlobalEventListener>> mRealmsEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptServerNetworkGlobalEventListener>> mServerNetworkEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptScriptingGlobalEventListener>> mScriptingEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptLevelGlobalEventListener>> mLevelEventListener;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGlobalEventListeners& operator=(ScriptGlobalEventListeners const&);
    ScriptGlobalEventListeners(ScriptGlobalEventListeners const&);
    ScriptGlobalEventListeners();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptGlobalEventListeners(
        ::ActorEventCoordinator&,
        ::BlockEventCoordinator&,
        ::ItemEventCoordinator&,
        ::ServerPlayerEventCoordinator&,
        ::ScriptingEventCoordinator&,
        ::ServerNetworkEventCoordinator&,
        ::LevelEventCoordinator&
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptActorGlobalEventListener& getActorEventListener();

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockGlobalEventListener& getBlockEventListener();

    MCNAPI ::ScriptModuleMinecraft::ScriptItemGlobalEventListener& getItemEventListener();

    MCNAPI ::ScriptModuleMinecraft::ScriptLevelGlobalEventListener& getLevelEventListener();

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerGlobalEventListener& getPlayerEventListener();

    MCNAPI ::ScriptModuleMinecraft::ScriptScriptingGlobalEventListener& getScriptingEventListener();

    MCNAPI ::ScriptModuleMinecraft::ScriptServerNetworkGlobalEventListener& getServerNetworkEventListener();

    MCNAPI ~ScriptGlobalEventListeners();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorEventCoordinator&,
        ::BlockEventCoordinator&,
        ::ItemEventCoordinator&,
        ::ServerPlayerEventCoordinator&,
        ::ScriptingEventCoordinator&,
        ::ServerNetworkEventCoordinator&,
        ::LevelEventCoordinator&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
