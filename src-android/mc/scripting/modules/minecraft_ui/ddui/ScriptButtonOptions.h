#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptButtonOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mTooltip;
    ::ll::UntypedStorage<8, 48>  mDisabled;
    ::ll::UntypedStorage<8, 48>  mVisible;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptButtonOptions(::ScriptModuleMinecraftServerUI::ScriptButtonOptions&&);

    MCNAPI ScriptButtonOptions(::ScriptModuleMinecraftServerUI::ScriptButtonOptions const&);

    MCNAPI ~ScriptButtonOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptButtonOptions&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptButtonOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
