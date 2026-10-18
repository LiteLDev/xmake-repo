#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/options/ScriptEaseOptions.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraSetRotationOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::Vec2>                                                   mRotation;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>>                                     mLocation;
    ::ll::TypedStorage<4, 20, std::optional<ScriptModuleMinecraft::ScriptEaseOptions>> mEaseOptions;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::Vec2>                                                       mRotation;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                                     mLocation;
    ::ll::TypedStorage<4, 20, ::std::optional<::ScriptModuleMinecraft::ScriptEaseOptions>> mEaseOptions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptCameraSetRotationOptions(ScriptCameraSetRotationOptions const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptCameraSetRotationOptions const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptCameraSetRotationOptions const& other) const;
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
