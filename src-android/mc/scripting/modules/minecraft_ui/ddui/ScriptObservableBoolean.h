#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservable.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftServerUI { struct ScriptObservableOptions; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptObservableBoolean : public ::ScriptModuleMinecraftServerUI::ScriptObservable<bool> {
public:
    // prevent constructor by default
    ScriptObservableBoolean& operator=(ScriptObservableBoolean const&);
    ScriptObservableBoolean(ScriptObservableBoolean const&);
    ScriptObservableBoolean();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
