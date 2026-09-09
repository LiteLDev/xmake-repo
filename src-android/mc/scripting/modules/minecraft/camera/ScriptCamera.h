#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { struct ScriptAnimationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraAttachOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraDefaultOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFadeOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFixedBoomOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFovOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetFacingOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetLocationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetPositionOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetRotationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraShakeOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraTargetOptions; }
namespace ScriptModuleMinecraft { struct ScriptCatmullRomSpline; }
namespace ScriptModuleMinecraft { struct ScriptEaseOptions; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptLinearSpline; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCamera {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntityRef;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCamera();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptCamera(::Player const&);

    MCNAPI explicit ScriptCamera(::WeakEntityRef const&);

    MCNAPI ::Scripting::Result_deprecated<void> setCamera(
        std::string const&,
        std::optional<std::variant<
            ScriptModuleMinecraft::ScriptCameraSetFacingOptions,
            ScriptModuleMinecraft::ScriptCameraSetPositionOptions,
            ScriptModuleMinecraft::ScriptCameraSetRotationOptions,
            ScriptModuleMinecraft::ScriptCameraSetLocationOptions,
            ScriptModuleMinecraft::ScriptCameraDefaultOptions,
            ScriptModuleMinecraft::ScriptCameraTargetOptions,
            ScriptModuleMinecraft::ScriptCameraFixedBoomOptions>>
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const&);

    MCNAPI void* $ctor(::WeakEntityRef const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
