#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/camera/ScriptProgressKeyFrame.h"
#include "mc/scripting/modules/minecraft/camera/ScriptRotationKeyFrame.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSplineAnimation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptProgressKeyFrame>> mProgressKeyFrames;
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptRotationKeyFrame>> mRotationKeyFrames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSplineAnimation(::ScriptModuleMinecraft::ScriptSplineAnimation const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSplineAnimation const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
