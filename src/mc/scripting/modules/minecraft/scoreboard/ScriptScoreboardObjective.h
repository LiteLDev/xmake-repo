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
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptScoreboardScoreInfo; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjective {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>            mScoreboardHandle;
    ::ll::TypedStorage<8, 24, std::string> mObjectiveId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboard>>
                                             mScoreboardHandle;
    ::ll::TypedStorage<8, 32, ::std::string> mObjectiveId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardObjective();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<int> _modifyScore(
        std::variant<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
            std::string>&,
        ::PlayerScoreSetFunction,
        int
#else // @header-generator platform
    MCAPI ScriptScoreboardObjective(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboard> scoreboardHandle,
        ::std::string const&                                                          objectiveId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::string> getDisplayName() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<int> _modifyScore(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
            ::std::string>&      participant,
        ::PlayerScoreSetFunction setFunction,
        int                      score
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::string> getObjectiveId() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::string> getDisplayName() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getObjectiveId() const;

    MCAPI ::Objective* tryGetObjective() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboard> scoreboardHandle,
        ::std::string const&                                                          objectiveId
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
