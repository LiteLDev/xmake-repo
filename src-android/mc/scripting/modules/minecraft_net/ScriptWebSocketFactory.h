#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft_net/ScriptNetModuleConfig.h"
#include "mc/scripting/modules/minecraft_net/ScriptWebSocketClient.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class ScriptDeferredFlushTracker;
class TaskGroup;
namespace ScriptModuleMinecraftNet { class ScriptInternalWebSocketError; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocketFactory; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketConnectionFailedError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketLimitExceededError; }
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketFactory
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftNet::ScriptWebSocketFactory> {
public:
    // ScriptWebSocketFactory inner types declare
    // clang-format off
    class ScriptWebSocketDeferredEventListener;
    // clang-format on

    // ScriptWebSocketFactory inner types define
    class ScriptWebSocketDeferredEventListener : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
                                                     ScriptModuleMinecraftNet::ScriptWebSocketFactory> {
    public:
        // prevent constructor by default
        ScriptWebSocketDeferredEventListener();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftNet::ScriptWebSocketFactory::ScriptWebSocketDeferredEventListener>> mDeferredEventsListener;
    ::ll::UntypedStorage<8, 24> mSockets;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<8, 112, ::ScriptModuleMinecraftNet::ScriptNetModuleConfig> mConfig;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory>> mNativeFactory;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketFactory();
};

} // namespace ScriptModuleMinecraftNet
