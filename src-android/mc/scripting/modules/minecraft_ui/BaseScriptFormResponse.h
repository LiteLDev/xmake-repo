#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/ScriptFormCancelationReason.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class BaseScriptFormResponse {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mIsCanceled;
    ::ll::TypedStorage<4, 8, std::optional<ScriptModuleMinecraftServerUI::ScriptFormCancelationReason>> mCancelationReason;
    // clang-format on
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
