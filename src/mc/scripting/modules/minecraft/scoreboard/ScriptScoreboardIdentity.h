#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptScoreboardIdentityType_t.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/scores/IdentityDefinition.h"

// auto generated forward declare list
// clang-format off
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
struct ScoreboardId;
namespace ScriptModuleMinecraft { class ScriptActor; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardIdentity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::IdentityDefinition>           mIdentity;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Level*>>   mLevel;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::IdentityDefinition>           mIdentity;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Level const*>> mLevel;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptScoreboardIdentity();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getName() const;
    // NOLINTEND
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
