#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft_net/events/IScriptNetworkBeforeEvents.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { template<typename T0, typename T1, typename T2> class ScriptFilteredEventSignal; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraftNet { struct ScriptPacketReceiveBeforeEvent; }
namespace ScriptModuleMinecraftNet { struct ScriptPacketSendBeforeEvent; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraftNet::EventFilters { struct ScriptPacketEventFilter; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetworkBeforeEvents
: public ::ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents,
#if defined(LL_PLAT_A) // @header-generator platform
  public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents> {
#else // @header-generator platform
  public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    ::ll::UntypedStorage<8, 16>                               mHandle;
    ::ll::UntypedStorage<8, 32>                               mBeforePacketReceiveSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforePacketSendSignal;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnka62ae6;
    ::ll::UntypedStorage<8, 8>  mUnk3f8513;
    ::ll::UntypedStorage<8, 16> mUnk6a86ea;
    ::ll::UntypedStorage<8, 32> mUnk6ff13e;
    ::ll::UntypedStorage<8, 32> mUnka9ad96;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetworkBeforeEvents& operator=(ScriptNetworkBeforeEvents const&);
    ScriptNetworkBeforeEvents(ScriptNetworkBeforeEvents const&);
    ScriptNetworkBeforeEvents();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptNetworkBeforeEvents() = default;
#else // @header-generator platform
    virtual ~ScriptNetworkBeforeEvents() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>> onBeforePacketReceive(::IncomingPacketEvent const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>>
    onBeforePacketReceive(::IncomingPacketEvent const& packetEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>> onBeforePacketSend(::OutgoingPacketEvent const&);
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>>
    onBeforePacketSend(::OutgoingPacketEvent const& packetEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptNetworkBeforeEvents(::Scripting::WeakLifetimeScope scope, ::gsl::not_null<::ServerLevel*> level);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::gsl::not_null<::ServerLevel*> level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>>
    $onBeforePacketReceive(::IncomingPacketEvent const& packetEvent);

    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>>
    $onBeforePacketSend(::OutgoingPacketEvent const& packetEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
