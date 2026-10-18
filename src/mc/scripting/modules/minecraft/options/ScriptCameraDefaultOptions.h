#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/options/ScriptEaseOptions.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraDefaultOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ScriptModuleMinecraft::ScriptEaseOptions> mEaseOptions;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptCameraDefaultOptions const&) const;
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
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
