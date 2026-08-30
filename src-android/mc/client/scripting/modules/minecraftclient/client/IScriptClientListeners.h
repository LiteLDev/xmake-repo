#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftClient { struct ScriptClientMessage; }
// clang-format on

namespace ScriptModuleMinecraftClient {

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

} // namespace ScriptModuleMinecraftClient
