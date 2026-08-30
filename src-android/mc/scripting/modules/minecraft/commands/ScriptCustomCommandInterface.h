#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandParamInterface.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomCommandInterface {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mDescription;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mPermissionLevel;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mCheatsRequired;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ScriptModuleMinecraft::ScriptCustomCommandParamInterface>>> mMandatoryParams;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ScriptModuleMinecraft::ScriptCustomCommandParamInterface>>> mOptionalParams;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCustomCommandInterface(::ScriptModuleMinecraft::ScriptCustomCommandInterface const&);

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptCustomCommandInterface const&) const;

    MCNAPI ~ScriptCustomCommandInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomCommandInterface const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
