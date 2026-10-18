#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptRGB.h"
#include "mc/scripting/modules/minecraft/options/ScriptCameraFadeTimeOptions.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraFadeOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<ScriptModuleMinecraft::ScriptCameraFadeTimeOptions>> mTimeOptions;
    ::ll::TypedStorage<8, 32, std::optional<ScriptModuleMinecraft::ScriptRGB>>                   mFadeColor;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::ScriptModuleMinecraft::ScriptCameraFadeTimeOptions>> mTimeOptions;
    ::ll::TypedStorage<8, 32, ::std::optional<::ScriptModuleMinecraft::ScriptRGB>>                   mFadeColor;
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
