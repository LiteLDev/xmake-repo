#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/world/level/storage/GameRule.h"
#include "mc/world/level/storage/GameRules.h"

// auto generated forward declare list
// clang-format off
struct LevelGameRuleChangeEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptGameRuleChangeAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                                                 mRule;
    ::ll::UntypedStorage<1, 1>                                                 mType;
    ::ll::TypedStorage<4, 8, std::variant<cereal::NullType, bool, int, float>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameRuleChangeAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
