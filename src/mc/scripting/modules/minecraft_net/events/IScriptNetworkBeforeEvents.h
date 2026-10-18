#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
namespace ScriptModuleMinecraftNet { struct ScriptPacketReceiveBeforeEvent; }
namespace ScriptModuleMinecraftNet { struct ScriptPacketSendBeforeEvent; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class IScriptNetworkBeforeEvents {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IScriptNetworkBeforeEvents() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>> onBeforePacketReceive(::IncomingPacketEvent const&) = 0;
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>>
    onBeforePacketReceive(::IncomingPacketEvent const& packetEvent) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>> onBeforePacketSend(::OutgoingPacketEvent const&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>>
    onBeforePacketSend(::OutgoingPacketEvent const& packetEvent) = 0;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
