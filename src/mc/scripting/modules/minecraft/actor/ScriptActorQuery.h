#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CommandSelectorResults.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/selectors/ActorSelectorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
class ScriptActorCommandOrigin;
class ScriptCommandOrigin;
class ServerLevel;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::
        Result<ActorSelectorArgs, Scripting::InvalidArgumentError, Scripting::UnsupportedAPIError>
#else // @header-generator platform
    MCAPI static ::Scripting::UnsupportedAPIError _incompatableWorldQueryOptionError(::std::string const& propertyName);

    MCAPI static ::Scripting::
        Result<::ActorSelectorArgs, ::Scripting::InvalidArgumentError, ::Scripting::UnsupportedAPIError>
#endif // @header-generator platform
        constructSelectorArgs(
#if defined(LL_PLAT_A) // @header-generator platform
            ::ActorSelectorType,
            std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&,
            ::Dimension*
#else // @header-generator platform
            ::ActorSelectorType                                                      selectionType,
            ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
            ::Dimension*                                                             dimension
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>,
        ScriptModuleMinecraft::ScriptCommandError,
        Scripting::InvalidArgumentError>
    getAllPlayers(::Scripting::WeakLifetimeScope const&, ::Level&);
#else // @header-generator platform
    MCAPI static ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
    getAllPlayers(::Scripting::WeakLifetimeScope const& scope, ::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result<bool, Scripting::InvalidArgumentError, Scripting::UnsupportedAPIError>
    matches(::Actor const&, std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&);
#else // @header-generator platform
    MCAPI static ::Scripting::Result<bool, ::Scripting::InvalidArgumentError, ::Scripting::UnsupportedAPIError>
    matches(::Actor const& actor, ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result<bool, Scripting::InvalidArgumentError>
    matches(::Actor const&, ::ActorSelectorArgs const&);
#else // @header-generator platform
    MCAPI static ::Scripting::Result<bool, ::Scripting::InvalidArgumentError>
    matches(::Actor const& actor, ::ActorSelectorArgs const& args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>,
        ScriptModuleMinecraft::ScriptCommandError,
        Scripting::InvalidArgumentError>
#else // @header-generator platform
    MCAPI static ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
#endif // @header-generator platform
    queryActors(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ActorSelectorType,
        std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Dimension*,
        ::Level&
#else // @header-generator platform
        ::ActorSelectorType                                                      selectionType,
        ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        ::Scripting::WeakLifetimeScope const&                                    scope,
        ::Dimension*                                                             dimension,
        ::Level&                                                                 level
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result_deprecated<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorIterator>>
#else // @header-generator platform
    MCAPI static ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorIterator>>
#endif // @header-generator platform
    queryActors_V010(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ActorSelectorType,
        std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Dimension*,
        ::Level&
#else // @header-generator platform
        ::ActorSelectorType                                                      selectionType,
        ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        ::Scripting::WeakLifetimeScope const&                                    scope,
        ::Dimension*                                                             dimension,
        ::Level&                                                                 level
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>,
        ScriptModuleMinecraft::ScriptCommandError,
        Scripting::InvalidArgumentError>
#else // @header-generator platform
    MCAPI static ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
#endif // @header-generator platform
    queryPlayers(
#if defined(LL_PLAT_A) // @header-generator platform
        std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Dimension*,
        ::Level&
#else // @header-generator platform
        ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        ::Scripting::WeakLifetimeScope const&                                    scope,
        ::Dimension*                                                             dimension,
        ::Level&                                                                 level
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result_deprecated<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerIterator>>
#else // @header-generator platform
    MCAPI static ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerIterator>>
#endif // @header-generator platform
    queryPlayers_V010(
#if defined(LL_PLAT_A) // @header-generator platform
        std::optional<ScriptModuleMinecraft::ScriptActorQueryOptions> const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Dimension*,
        ::Level&
#else // @header-generator platform
        ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        ::Scripting::WeakLifetimeScope const&                                    scope,
        ::Dimension*                                                             dimension,
        ::Level&                                                                 level
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
