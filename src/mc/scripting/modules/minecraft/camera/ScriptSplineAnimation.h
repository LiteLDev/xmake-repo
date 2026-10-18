#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/scripting/modules/minecraft/camera/ScriptProgressKeyFrame.h"
#include "mc/scripting/modules/minecraft/camera/ScriptRotationKeyFrame.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptProgressKeyFrame; }
namespace ScriptModuleMinecraft { struct ScriptRotationKeyFrame; }
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSplineAnimation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptProgressKeyFrame>> mProgressKeyFrames;
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptRotationKeyFrame>> mRotationKeyFrames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSplineAnimation(::ScriptModuleMinecraft::ScriptSplineAnimation const&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptProgressKeyFrame>> mProgressKeyFrames;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptRotationKeyFrame>> mRotationKeyFrames;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSplineAnimation const&);
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
