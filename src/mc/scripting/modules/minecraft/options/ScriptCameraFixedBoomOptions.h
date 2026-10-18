#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraFixedBoomOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, std::optional<Vec2>> mViewOffset;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mEntityOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraFixedBoomOptions(ScriptCameraFixedBoomOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptCameraFixedBoomOptions const&) const;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mViewOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mEntityOffset;
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
