#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptInputMode {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bind();

    MCNAPI static ::InputMode getScriptInputMode(::InputMode);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
