#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

// auto generated forward declare list
// clang-format off
class Objective;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptScoreboardScoreInfo; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjective {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>            mScoreboardHandle;
    ::ll::TypedStorage<8, 24, std::string> mObjectiveId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardObjective();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> _modifyScore(
        std::variant<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
            std::string>&,
        ::PlayerScoreSetFunction,
        int
    );

    MCNAPI ::Scripting::Result_deprecated<std::string> getDisplayName() const;

    MCNAPI ::Scripting::Result_deprecated<std::string> getObjectiveId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
