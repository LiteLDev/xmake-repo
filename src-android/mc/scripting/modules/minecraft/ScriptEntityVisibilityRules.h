#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/EntityWaypointVisibilityRules.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEntityVisibilityRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EntityWaypointVisibilityRules> mEntityRules;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& DEFAULT_RULE_VALUE();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
