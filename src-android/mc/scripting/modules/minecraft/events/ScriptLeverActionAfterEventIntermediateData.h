#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Player;
struct LeverActionEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLeverActionAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                           mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                            mPos;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mPlayer;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsPowered;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLeverActionAfterEventIntermediateData& operator=(ScriptLeverActionAfterEventIntermediateData const&);
    ScriptLeverActionAfterEventIntermediateData(ScriptLeverActionAfterEventIntermediateData const&);
    ScriptLeverActionAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
