#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/world/ServerWaypoint.h"
#include "mc/world/actor/player/vanilla_waypoint_manager_constants/ImageType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptCustomTexture; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWaypointTextureBounds {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                                         mTexture;
    ::ll::TypedStorage<4, 8, std::optional<VanillaWaypointManagerConstants::ImageType>> mImageType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::ServerWaypoint::Texture>                                    mTexture;
    ::ll::TypedStorage<4, 8, ::std::optional<::VanillaWaypointManagerConstants::ImageType>> mImageType;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        std::variant<VanillaWaypointManagerConstants::ImageType, ScriptModuleMinecraft::ScriptCustomTexture>,
        Scripting::EngineError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::std::variant<::VanillaWaypointManagerConstants::ImageType, ::ScriptModuleMinecraft::ScriptCustomTexture>,
        ::Scripting::EngineError>
#endif // @header-generator platform
    getTexture() const;
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
