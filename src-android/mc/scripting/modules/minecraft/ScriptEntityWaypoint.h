#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptEntityVisibilityRules.h"
#include "mc/scripting/modules/minecraft/ScriptWaypoint.h"

// auto generated forward declare list
// clang-format off
class ServerWaypoint;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointTextureSelectorError; }
namespace ScriptModuleMinecraft { struct ScriptWaypointTextureSelector; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntityWaypoint : public ::ScriptModuleMinecraft::ScriptWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptEntityVisibilityRules const> mEntityRules;
    ::ll::UntypedStorage<8, 32>                                                          mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntityWaypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptEntityWaypoint();

    virtual std::unique_ptr<ServerWaypoint> createWaypoint() const;

    virtual ::Scripting::Result<ScriptModuleMinecraft::ScriptDimensionLocation, ScriptModuleMinecraft::ScriptInvalidWaypointError, ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError> getDimensionLocation() const;

    virtual bool isValid() const;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<ServerWaypoint> $createWaypoint() const;

    MCNAPI ::Scripting::Result<
        ScriptModuleMinecraft::ScriptDimensionLocation,
        ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
    $getDimensionLocation() const;

    MCNAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
