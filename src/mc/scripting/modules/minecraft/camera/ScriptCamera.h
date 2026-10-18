#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
namespace ScriptModuleMinecraft { struct ScriptAnimationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraAttachOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCameraDefaultOptions; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCameraFadeOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCameraFixedBoomOptions; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCameraFovOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCameraSetFacingOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetLocationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetPositionOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetRotationOptions; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCameraShakeOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCameraTargetOptions; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCatmullRomSpline; }
namespace ScriptModuleMinecraft { struct ScriptEaseOptions; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptLinearSpline; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCamera {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntityRef;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntityRef;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptCamera();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setCamera(
        ::std::string const&                                        cameraPreset,
        ::std::optional<::std::variant<
            ::ScriptModuleMinecraft::ScriptCameraSetFacingOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetPositionOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetRotationOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetLocationOptions,
            ::ScriptModuleMinecraft::ScriptCameraDefaultOptions,
            ::ScriptModuleMinecraft::ScriptCameraTargetOptions,
            ::ScriptModuleMinecraft::ScriptCameraFixedBoomOptions>> options
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const&);

    MCNAPI void* $ctor(::WeakEntityRef const&);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
