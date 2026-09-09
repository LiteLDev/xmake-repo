#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/scripting/modules/minecraft/Listener.h"
#include "mc/scripting/modules/minecraft/events/ScriptActorContainerAccessAfterEventIntermediateData.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockContainerAccessAfterEventIntermediateData.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
struct PlayerClosedContainerEvent;
struct PlayerDimensionChangeAfterEvent;
struct PlayerEmoteEvent;
struct PlayerGameModeChangeEvent;
struct PlayerHotbarSelectedSlotChangeEvent;
struct PlayerInitialSpawnEvent;
struct PlayerInputModeChangeEvent;
struct PlayerInputPermissionCategoryChangeEvent;
struct PlayerInteractWithBlockAfterEvent;
struct PlayerInteractWithEntityAfterEvent;
struct PlayerInventoryItemChangeEvent;
struct PlayerOpenedContainerEvent;
struct PlayerRespawnEvent;
struct PlayerScriptInputEvent;
struct PlayerSwingStartEvent;
struct PlayerUseNameTagEvent;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerGlobalEventListener : public ::EventListenerDispatcher<PlayerEventListener> {
public:
    // ScriptPlayerGlobalEventListener inner types define
    using ContainerCloseContext = std::variant<
        ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData,
        ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>> mListeners;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::variant<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData, ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>>> mContainerCloseContextDataMap;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPlayerGlobalEventListener();

    virtual ::EventResult onEvent(::PlayerUseNameTagEvent const&);

    virtual ::EventResult onEvent(::PlayerInputModeChangeEvent const&);

    virtual ::EventResult onEvent(::PlayerInitialSpawnEvent const&);

    virtual ::EventResult onEvent(::PlayerOpenedContainerEvent const&);

    virtual ::EventResult onEvent(::PlayerClosedContainerEvent const&);

    virtual ::EventResult onEvent(::PlayerSwingStartEvent const&);

    virtual ::EventResult onEvent(::PlayerRespawnEvent const&);

    virtual ::EventResult onEvent(::PlayerDimensionChangeAfterEvent const&);

    virtual ::EventResult onEvent(::PlayerInteractWithEntityAfterEvent const&);

    virtual ::EventResult onEvent(::PlayerInteractWithBlockAfterEvent const&);

    virtual ::EventResult onEvent(::PlayerEmoteEvent const&);

    virtual ::EventResult onEvent(::PlayerScriptInputEvent const&);

    virtual ::EventResult onEvent(::PlayerInventoryItemChangeEvent const&);

    virtual ::EventResult onEvent(::PlayerHotbarSelectedSlotChangeEvent const&);

    virtual ::EventResult onEvent(::PlayerInputPermissionCategoryChangeEvent const&);

    virtual ::EventResult onEvent(::PlayerGameModeChangeEvent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void flushContainerCloseContext(::Player const&);

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
    MCNAPI ::EventResult $onEvent(::PlayerUseNameTagEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerInputModeChangeEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerInitialSpawnEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerOpenedContainerEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerClosedContainerEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerSwingStartEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerRespawnEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerDimensionChangeAfterEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerInteractWithEntityAfterEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerInteractWithBlockAfterEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerEmoteEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerScriptInputEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerInventoryItemChangeEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerHotbarSelectedSlotChangeEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerInputPermissionCategoryChangeEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerGameModeChangeEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
