#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
struct ButtonPushEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptButtonPushAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                           mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                            mPos;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptButtonPushAfterEventIntermediateData& operator=(ScriptButtonPushAfterEventIntermediateData const&);
    ScriptButtonPushAfterEventIntermediateData(ScriptButtonPushAfterEventIntermediateData const&);
    ScriptButtonPushAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
