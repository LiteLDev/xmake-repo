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

class ScriptObservableNumber : public ::ScriptModuleMinecraftServerUI::ScriptObservable<double> {
public:
    // prevent constructor by default
    ScriptObservableNumber& operator=(ScriptObservableNumber const&);
    ScriptObservableNumber(ScriptObservableNumber const&);
    ScriptObservableNumber();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
