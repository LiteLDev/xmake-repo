#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInputInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayerData;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInputInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptInputInfo(::ScriptModuleMinecraft::ScriptActorData const&);

    MCNAPI ::Scripting::Result<InputMode, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::EngineError>
    getLastInputModeUsed() const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> isHotbarOnlyTouch() const;

    MCNAPI void updatePlayerData(::ScriptModuleMinecraft::ScriptActorData const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorData const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
