#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/world/actor/selectors/ActorSelectorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class Level;
class Player;
class ScriptActorCommandOrigin;
class ScriptCommandOrigin;
class ServerLevel;
struct ActorSelectorArgs;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorQuery {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::
        Result<ActorSelectorArgs, Scripting::InvalidArgumentError, Scripting::UnsupportedAPIError>
        constructSelectorArgs(
            ::ActorSelectorType,
            std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&,
            ::Dimension*
        );

    MCNAPI static ::Scripting::Result<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>,
        ScriptModuleMinecraft::ScriptCommandError,
        Scripting::InvalidArgumentError>
    getAllPlayers(::Scripting::WeakLifetimeScope const&, ::Level&);

    MCNAPI static ::Scripting::Result<bool, Scripting::InvalidArgumentError, Scripting::UnsupportedAPIError>
    matches(::Actor const&, std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&);

    MCNAPI static ::Scripting::Result<bool, Scripting::InvalidArgumentError>
    matches(::Actor const&, ::ActorSelectorArgs const&);

    MCNAPI static ::Scripting::Result<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>,
        ScriptModuleMinecraft::ScriptCommandError,
        Scripting::InvalidArgumentError>
    queryActors(
        ::ActorSelectorType,
        std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Dimension*,
        ::Level&
    );

    MCNAPI static ::Scripting::Result_deprecated<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorIterator>>
    queryActors_V010(
        ::ActorSelectorType,
        std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Dimension*,
        ::Level&
    );

    MCNAPI static ::Scripting::Result<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>,
        ScriptModuleMinecraft::ScriptCommandError,
        Scripting::InvalidArgumentError>
    queryPlayers(
        std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Dimension*,
        ::Level&
    );

    MCNAPI static ::Scripting::Result_deprecated<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerIterator>>
    queryPlayers_V010(
        std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Dimension*,
        ::Level&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
