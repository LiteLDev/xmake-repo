#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameRules;
class Level;
struct GameRuleId;
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
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Level*>> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameRules& operator=(ScriptGameRules const&);
    ScriptGameRules(ScriptGameRules const&);
    ScriptGameRules();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&, ::Level const&);

    MCNAPI static ::Scripting::EnumBinding bindPlayerWaypointsModeEnum();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
