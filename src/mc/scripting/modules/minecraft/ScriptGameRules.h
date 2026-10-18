#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameRules;
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
struct GameRuleId;
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptGameRules {
public:
    // ScriptGameRules inner types define
    using Key = ::GameRules const*;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Level*>> mLevel;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Level*>> mLevel;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptGameRules& operator=(ScriptGameRules const&);
    ScriptGameRules(ScriptGameRules const&);
    ScriptGameRules();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&, ::Level const&);
#else // @header-generator platform
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder, ::Level const& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::EnumBinding bindPlayerWaypointsModeEnum();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindPlayerWaypointsModeEnum();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
