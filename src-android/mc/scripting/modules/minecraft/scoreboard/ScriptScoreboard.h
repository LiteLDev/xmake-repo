#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptDisplayObjectiveSlotId.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptScoreboardIdentity.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptScoreboardObjective.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
class Level;
class Objective;
class Scoreboard;
class ScoreboardIdentityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboardListener; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjectiveDisplayOptions; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboard : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptScoreboard> {
public:
    // ScriptScoreboard inner types define
    using Key = ::Scoreboard const*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                  mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Scoreboard*>>                                     mScoreboard;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Level*>>                                          mLevel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptScoreboardListener>> mScoreboardListener;
    ::ll::UntypedStorage<8, 40>                                                                mObjectives;
    ::ll::UntypedStorage<8, 40>                                                                mIdentities;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboard();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptScoreboard();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptScoreboardObjective>
    _getOrCreateScoreboardObjective(::Objective const&);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptScoreboardIdentity>
    getOrCreateScoreboardIdentity(::IdentityDefinition const&);

    MCNAPI std::optional<ScoreboardId> tryGetScoreboardParticipantScoreboardId(
        std::variant<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
            std::string> const&
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
