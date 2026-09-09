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
    // clang-format off
    virtual ~IScriptNetworkBeforeEvents() = default;

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>> onBeforePacketReceive(::IncomingPacketEvent const&) = 0;

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>> onBeforePacketSend(::OutgoingPacketEvent const&) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
