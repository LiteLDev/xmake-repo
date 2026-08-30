#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerGameModeChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>          mPlayerHandle;
    ::ll::TypedStorage<4, 4, ::GameType> mFromGameMode;
    ::ll::TypedStorage<4, 4, ::GameType> mToGameMode;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerGameModeChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerGameModeChangeAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData> const,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData> const,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
