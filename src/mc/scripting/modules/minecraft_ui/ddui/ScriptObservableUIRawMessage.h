#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservable.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftServerUI { struct ScriptObservableOptions; }
namespace Scripting { struct ClassBinding; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraftServerUI {

class ScriptObservableUIRawMessage
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
: public ::ScriptModuleMinecraftServerUI::ScriptObservable<::ScriptModuleMinecraftServerUI::ScriptUIRawMessage> {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraftServerUI
