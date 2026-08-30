#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptPlayerSplitScreenSlot.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
namespace ScriptModuleServerAdmin { struct DisconnectedError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

struct ScriptAsyncPlayerJoinBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<AsyncVerdictPromise>>                             mJoinData;
    ::ll::TypedStorage<8, 24, std::string>                                                      mPlayerId;
    ::ll::TypedStorage<8, 24, std::string>                                                      mPlayerName;
    ::ll::TypedStorage<1, 2, std::optional<ScriptModuleMinecraft::ScriptPlayerSplitScreenSlot>> mSplitScreenSlot;
    ::ll::TypedStorage<8, 24, std::string>                                                      mRealmsOnlyPlayerXuid;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncPlayerJoinBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptAsyncPlayerJoinBeforeEvent(::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent const&);

    MCNAPI ::Scripting::Result<void, ScriptModuleServerAdmin::DisconnectedError>
        disallowJoin(std::optional<std::string>);

    MCNAPI ::Scripting::Result<void, ScriptModuleServerAdmin::DisconnectedError> disconnect(std::optional<std::string>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent const&);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
