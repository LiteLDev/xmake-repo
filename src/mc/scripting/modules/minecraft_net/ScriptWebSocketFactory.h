#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft_net/ScriptNetModuleConfig.h"
#include "mc/scripting/modules/minecraft_net/ScriptWebSocketClient.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Scheduler;
class ScriptDeferredFlushTracker;
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraftNet { class ScriptInternalWebSocketError; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocketFactory; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraftNet { class ScriptWebSocketClient; }
#endif // @header-generator platform
namespace ScriptModuleMinecraftNet { class ScriptWebSocketConnectionFailedError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketLimitExceededError; }
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraftNet { struct ScriptNetModuleConfig; }
#endif // @header-generator platform
namespace Scripting { class ScriptObjectFactory; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketFactory
#if defined(LL_PLAT_A) // @header-generator platform
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftNet::ScriptWebSocketFactory> {
#else // @header-generator platform
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptWebSocketFactory> {
#endif // @header-generator platform
public:
    // ScriptWebSocketFactory inner types declare
    // clang-format off
    class ScriptWebSocketDeferredEventListener;
    // clang-format on

    // ScriptWebSocketFactory inner types define
    class ScriptWebSocketDeferredEventListener : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
#if defined(LL_PLAT_A) // @header-generator platform
                                                     ScriptModuleMinecraftNet::ScriptWebSocketFactory> {
    public:
        // prevent constructor by default
        ScriptWebSocketDeferredEventListener();

#else // @header-generator platform
                                                     ::ScriptModuleMinecraftNet::ScriptWebSocketFactory> {
#endif // @header-generator platform
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);


#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftNet::ScriptWebSocketFactory::ScriptWebSocketDeferredEventListener>> mDeferredEventsListener;
    ::ll::UntypedStorage<8, 24> mSockets;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<8, 112, ::ScriptModuleMinecraftNet::ScriptNetModuleConfig> mConfig;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory>> mNativeFactory;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk631ce6;
    ::ll::UntypedStorage<8, 24>  mUnk5f7385;
    ::ll::UntypedStorage<8, 16>  mUnk5b0a43;
    ::ll::UntypedStorage<8, 8>   mUnk1b6b60;
    ::ll::UntypedStorage<8, 136> mUnk6215be;
    ::ll::UntypedStorage<8, 16>  mUnka214d6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptWebSocketFactory& operator=(ScriptWebSocketFactory const&);
    ScriptWebSocketFactory(ScriptWebSocketFactory const&);
#endif // @header-generator platform
    ScriptWebSocketFactory();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWebSocketFactory(
        ::std::string const&                                                        descriptorString,
        ::Bedrock::NonOwnerPointer<::Scheduler>                                     scheduler,
        ::Scripting::WeakLifetimeScope&                                             scope,
        ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                           config,
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory> nativeFactory
    );

    MCNAPI ::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptWebSocketClient>,
        ::ScriptModuleMinecraftNet::ScriptWebSocketConnectionFailedError,
        ::ScriptModuleMinecraftNet::ScriptInternalWebSocketError,
        ::ScriptModuleMinecraftNet::ScriptWebSocketLimitExceededError,
        ::ScriptModuleMinecraftNet::ScriptMalformedUriError,
        ::ScriptModuleMinecraftNet::ScriptTLSOnlyError,
        ::ScriptModuleMinecraftNet::ScriptUriNotAllowedError>
    connect(
        ::Scripting::ScriptObjectFactory&                                                  factory,
        ::std::string const&                                                               uri,
        ::std::optional<::std::vector<::ScriptModuleMinecraftNet::ScriptNetHeader>> const& userHeaders,
        ::Scripting::WeakLifetimeScope&                                                    scope
    );

    MCNAPI void initEvents();

    MCNAPI ~ScriptWebSocketFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&                                                        descriptorString,
        ::Bedrock::NonOwnerPointer<::Scheduler>                                     scheduler,
        ::Scripting::WeakLifetimeScope&                                             scope,
        ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                           config,
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory> nativeFactory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
