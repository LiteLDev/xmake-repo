#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/options/ScriptEaseOptions.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraFovOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<float>>                                     mFov;
    ::ll::TypedStorage<4, 20, std::optional<ScriptModuleMinecraft::ScriptEaseOptions>> mEaseOptions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool fovIsValid();
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                       mFov;
    ::ll::TypedStorage<4, 20, ::std::optional<::ScriptModuleMinecraft::ScriptEaseOptions>> mEaseOptions;
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
