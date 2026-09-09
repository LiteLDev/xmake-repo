#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptScoreboardIdentityType_t.h"
#include "mc/world/scores/IdentityDefinition.h"

// auto generated forward declare list
// clang-format off
class Level;
struct ScoreboardId;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardIdentity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 72, ::IdentityDefinition>           mIdentity;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Level*>>   mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardIdentity();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
