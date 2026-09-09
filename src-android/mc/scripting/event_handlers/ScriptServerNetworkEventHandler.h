#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/ServerNetworkEventHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#include "mc/scripting/modules/minecraft_net/events/IScriptNetworkBeforeEvents.h"

// auto generated forward declare list
// clang-format off
struct ChatEvent;
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptServerNetworkEventHandler
: public ::EventHandlerDispatcher<ServerNetworkEventHandler>,
  public ::ScriptEventHandler<ScriptModuleMinecraft::IScriptWorldBeforeEvents>,
  public ::ScriptEventHandler<ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptServerNetworkEventHandler();

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ChatEvent&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::IncomingPacketEvent&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::OutgoingPacketEvent&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _handleChat(
        ::ChatEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    ) const;

    MCNAPI bool _handleIncomingPacket(
        ::IncomingPacketEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents>
    ) const;

    MCNAPI bool _handleOutgoingPacket(
        ::OutgoingPacketEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents>
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
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ChatEvent&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::IncomingPacketEvent&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::OutgoingPacketEvent&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
