#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptModalFormDataTextFieldOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mDefaultValue;
    ::ll::UntypedStorage<8, 200> mTooltip;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptModalFormDataTextFieldOptions(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions&&);

    MCNAPI
    ScriptModalFormDataTextFieldOptions(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions const&);

    MCNAPI ~ScriptModalFormDataTextFieldOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
