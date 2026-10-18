#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ScriptDeferredFlushTracker;
namespace ScriptModuleMinecraft { class ScriptAfterEventList; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptAfterEventMetadata; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraftNet { struct ScriptWebSocketClientCloseEventIntermediateData; }
namespace ScriptModuleMinecraftNet { struct ScriptWebSocketClientReceiveEventIntermediateData; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketClientEvents
#if defined(LL_PLAT_A) // @header-generator platform
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftNet::ScriptWebSocketClientEvents> {
#else // @header-generator platform
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptWebSocketClientEvents> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptAfterEventList>> mEvents;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf527ae;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptWebSocketClientEvents& operator=(ScriptWebSocketClientEvents const&);
    ScriptWebSocketClientEvents(ScriptWebSocketClientEvents const&);
#endif // @header-generator platform
    ScriptWebSocketClientEvents();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptWebSocketClientEvents(::Scripting::WeakLifetimeScope& scope);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCNAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata const& getMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope& scope);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
