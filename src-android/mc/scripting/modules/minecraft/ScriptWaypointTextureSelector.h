#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptWaypointTextureBounds.h"
#include "mc/world/ServerWaypoint.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWaypointTextureSelector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptWaypointTextureBounds>> mTextureBoundsList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerWaypoint::TextureSelector getNative() const;

    MCNAPI ~ScriptWaypointTextureSelector();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
