#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
struct LeverActionEvent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLeverActionAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                           mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                            mPos;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mPlayer;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsPowered;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                 mPos;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mPlayer;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsPowered;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLeverActionAfterEventIntermediateData& operator=(ScriptLeverActionAfterEventIntermediateData const&);
    ScriptLeverActionAfterEventIntermediateData(ScriptLeverActionAfterEventIntermediateData const&);
    ScriptLeverActionAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
