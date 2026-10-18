#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftClient { struct ScriptClientMessage; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraftClient {

#if defined(LL_PLAT_A) // @header-generator platform
class IScriptClientListeners {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IScriptClientListeners() = default;

    virtual void onClientMessage(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftClient::ScriptClientMessage>&) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IScriptClientListeners {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraftClient
