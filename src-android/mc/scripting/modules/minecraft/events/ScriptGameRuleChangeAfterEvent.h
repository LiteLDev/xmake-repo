#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/world/level/storage/GameRule.h"
#include "mc/world/level/storage/GameRules.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptGameRuleChangeAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptGameRuleChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                                                 mRule;
    ::ll::UntypedStorage<1, 1>                                                 mType;
    ::ll::TypedStorage<4, 8, std::variant<cereal::NullType, bool, int, float>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameRuleChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptGameRuleChangeAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
