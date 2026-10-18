#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptWaypointTextureBounds.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/ServerWaypoint.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptWaypointTextureBounds; }
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWaypointTextureSelector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptWaypointTextureBounds>> mTextureBoundsList;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptWaypointTextureBounds>> mTextureBoundsList;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ServerWaypoint::TextureSelector getNative() const;

    MCNAPI ~ScriptWaypointTextureSelector();
#else // @header-generator platform
    MCAPI ::ServerWaypoint::TextureSelector getNative() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MAX_TEXTURE_BOUNDS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
