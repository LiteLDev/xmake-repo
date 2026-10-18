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
#include "mc/gameplayhandlers/ServerNetworkEventHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#include "mc/scripting/modules/minecraft_net/events/IScriptNetworkBeforeEvents.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ChatEvent;
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace ScriptModuleMinecraftNet { class IScriptNetworkBeforeEvents; }
#endif // @header-generator platform
// clang-format on

class ScriptServerNetworkEventHandler
#if defined(LL_PLAT_A) // @header-generator platform
: public ::EventHandlerDispatcher<ServerNetworkEventHandler>,
  public ::ScriptEventHandler<ScriptModuleMinecraft::IScriptWorldBeforeEvents>,
  public ::ScriptEventHandler<ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents> {
#else // @header-generator platform
: public ::EventHandlerDispatcher<::ServerNetworkEventHandler>,
  public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents>,
  public ::ScriptEventHandler<::ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptServerNetworkEventHandler();
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::ChatEvent& chatEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ChatEvent&);
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::IncomingPacketEvent& packetEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::OutgoingPacketEvent& packetEvent) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ChatEvent&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ChatEvent& chatEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::IncomingPacketEvent&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::IncomingPacketEvent& packetEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::OutgoingPacketEvent&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::OutgoingPacketEvent& packetEvent);
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
