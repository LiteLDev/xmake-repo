#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptDisplayObjectiveSlotId.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptScoreboardIdentity.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptScoreboardObjective.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/scores/ScoreboardId.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
class Level;
class Objective;
class Scoreboard;
class ScoreboardIdentityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptScoreboardListener; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptScoreboardObjectiveDisplayOptions; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptScoreboard : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptScoreboard> {
#else // @header-generator platform
class ScriptScoreboard : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptScoreboard> {
#endif // @header-generator platform
public:
    // ScriptScoreboard inner types define
    using Key = ::Scoreboard const*;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                  mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Scoreboard*>>                                     mScoreboard;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Level*>>                                          mLevel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptScoreboardListener>> mScoreboardListener;
    ::ll::UntypedStorage<8, 40>                                                                mObjectives;
    ::ll::UntypedStorage<8, 40>                                                                mIdentities;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                      mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Scoreboard*>>                                       mScoreboard;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Level*>>                                            mLevel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptScoreboardListener>> mScoreboardListener;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>>>
        mObjectives;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::ScoreboardId,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>>>
        mIdentities;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboard();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptScoreboard();
#else // @header-generator platform
    virtual ~ScriptScoreboard() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptScoreboardObjective>
    _getOrCreateScoreboardObjective(::Objective const&);
#else // @header-generator platform
    MCAPI ScriptScoreboard(::Scoreboard& scoreboard, ::Level& level, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptScoreboardIdentity>
    getOrCreateScoreboardIdentity(::IdentityDefinition const&);
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>
    _getOrCreateScoreboardObjective(::Objective const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScoreboardId> tryGetScoreboardParticipantScoreboardId(
        std::variant<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
            std::string> const&
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>
    getOrCreateScoreboardIdentity(::IdentityDefinition const& identity);

    MCAPI ::ScoreboardIdentityRef* getOrCreateScoreboardIdentityRef(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
            ::std::string> const& participant
    );

    MCAPI void removeIdentityById(::ScoreboardId const& id);

    MCAPI void removeObjectiveByName(::std::string const& objective);

    MCAPI ::ScoreboardIdentityRef* tryGetScoreboardParticipantIdentityRef(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
            ::std::string> const& participant
    ) const;

    MCAPI ::std::optional<::ScoreboardId> tryGetScoreboardParticipantScoreboardId(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
            ::std::string> const& participant
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void* $ctor(::Scoreboard& scoreboard, ::Level& level, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
