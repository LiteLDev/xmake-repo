#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/IBreakpointValidator.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class ScriptPluginManager;
// clang-format on

class ScriptBreakpointValidator : public ::Scripting::IBreakpointValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptPluginManager&>    mPluginManager;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>> mTargetModuleUUID;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBreakpointValidator& operator=(ScriptBreakpointValidator const&);
    ScriptBreakpointValidator(ScriptBreakpointValidator const&);
    ScriptBreakpointValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBreakpointValidator();

    virtual bool validatePath(std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $validatePath(std::string_view);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
