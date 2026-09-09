#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservable.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftServerUI { struct ScriptObservableOptions; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptObservableUIRawMessage
: public ::ScriptModuleMinecraftServerUI::ScriptObservable<ScriptModuleMinecraftServerUI::ScriptUIRawMessage> {
public:
    // prevent constructor by default
    ScriptObservableUIRawMessage& operator=(ScriptObservableUIRawMessage const&);
    ScriptObservableUIRawMessage(ScriptObservableUIRawMessage const&);
    ScriptObservableUIRawMessage();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
