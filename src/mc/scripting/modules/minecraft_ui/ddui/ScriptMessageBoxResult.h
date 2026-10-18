#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptDataDrivenScreenClosedReason.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptMessageBoxResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<uint>>                                                 mSelection;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraftServerUI::ScriptDataDrivenScreenClosedReason> mCloseReason;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8> mUnk2bd4fd;
    ::ll::UntypedStorage<4, 4> mUnkf6cb48;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptMessageBoxResult& operator=(ScriptMessageBoxResult const&);
    ScriptMessageBoxResult(ScriptMessageBoxResult const&);
    ScriptMessageBoxResult();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
