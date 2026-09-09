#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptFormVisibilityErrorReason.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptFormVisibilityError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                     mFormId;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityErrorReason> mReason;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptFormVisibilityError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptFormVisibilityError(std::string, ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityErrorReason);

    MCNAPI ~ScriptFormVisibilityError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityErrorReason);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
