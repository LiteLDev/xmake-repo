#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/scripting/modules/minecraft_net/events/IScriptNetworkBeforeEvents.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
namespace ScriptModuleMinecraft { template<typename T0, typename T1, typename T2> class ScriptFilteredEventSignal; }
namespace ScriptModuleMinecraftNet { struct ScriptPacketReceiveBeforeEvent; }
namespace ScriptModuleMinecraftNet { struct ScriptPacketSendBeforeEvent; }
namespace ScriptModuleMinecraftNet::EventFilters { struct ScriptPacketEventFilter; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetworkBeforeEvents
: public ::ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents,
  public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    ::ll::UntypedStorage<8, 16>                               mHandle;
    ::ll::UntypedStorage<8, 32>                               mBeforePacketReceiveSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforePacketSendSignal;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetworkBeforeEvents& operator=(ScriptNetworkBeforeEvents const&);
    ScriptNetworkBeforeEvents(ScriptNetworkBeforeEvents const&);
    ScriptNetworkBeforeEvents();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptNetworkBeforeEvents() = default;

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>> onBeforePacketReceive(::IncomingPacketEvent const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>> onBeforePacketSend(::OutgoingPacketEvent const&);
    // clang-format on
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
