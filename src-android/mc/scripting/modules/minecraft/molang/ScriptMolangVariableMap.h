#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/util/MolangVariableMap.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptColor; }
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMolangVariableMap : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptMolangVariableMap> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::MolangVariableMap> mVariableMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<std::string> _prependVariable(std::string const&);

    MCNAPI ::MolangVariableMap& getVariableMap();

    MCNAPI ::Scripting::Result_deprecated<void>
    setColorRBGA_V010(std::string const&, ::ScriptModuleMinecraft::ScriptColor const&);

    MCNAPI ::Scripting::Result_deprecated<void>
    setColorRBG_V010(std::string const&, ::ScriptModuleMinecraft::ScriptColor const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
