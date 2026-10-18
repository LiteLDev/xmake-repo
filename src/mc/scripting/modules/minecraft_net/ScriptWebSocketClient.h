#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ScriptDeferredFlushTracker;
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocket; }
namespace ScriptModuleMinecraftNet { class ScriptRequestBodyTooLargeError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketClientEvents; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketNotConnectedError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraftNet {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptWebSocketClient : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftNet::ScriptWebSocketClient> {
#else // @header-generator platform
class ScriptWebSocketClient
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptWebSocketClient> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleMinecraftNet::ScriptNativeWebSocket>> mSocket;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                   mScope;
    ::ll::UntypedStorage<8, 32>                                                                 mEvents;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mConfigMaxOutgoingBodyBytes;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mConfigMaxIncomingPayloadSizeBytes;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkc5b3bc;
    ::ll::UntypedStorage<8, 16> mUnk446adc;
    ::ll::UntypedStorage<8, 32> mUnk2726ab;
    ::ll::UntypedStorage<4, 8>  mUnkdfdce5;
    ::ll::UntypedStorage<4, 8>  mUnka60b32;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptWebSocketClient& operator=(ScriptWebSocketClient const&);
    ScriptWebSocketClient(ScriptWebSocketClient const&);
#endif // @header-generator platform
    ScriptWebSocketClient();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
