#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandParamType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomCommandParamInterface {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                          mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                        mName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptCustomCommandParamType> mParamType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                           mEnumName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                       mEnumName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
