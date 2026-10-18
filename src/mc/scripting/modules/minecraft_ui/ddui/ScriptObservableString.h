#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservable.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftServerUI { struct ScriptObservableOptions; }
namespace Scripting { struct ClassBinding; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraftServerUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptObservableString : public ::ScriptModuleMinecraftServerUI::ScriptObservable<std::string> {
public:
    // prevent constructor by default
    ScriptObservableString& operator=(ScriptObservableString const&);
    ScriptObservableString(ScriptObservableString const&);
    ScriptObservableString();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};
#else // @header-generator platform
class ScriptObservableString : public ::ScriptModuleMinecraftServerUI::ScriptObservable<::std::string> {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraftServerUI
