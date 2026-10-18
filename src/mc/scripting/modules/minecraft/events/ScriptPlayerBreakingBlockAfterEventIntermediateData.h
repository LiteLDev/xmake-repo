#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakingBlockAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                              mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                               mPos;
    ::ll::TypedStorage<8, 8, ::Block const&>                            mBlock;
    ::ll::TypedStorage<8, 152, ::ItemStack>                             mHeldItemStack;
    ::ll::TypedStorage<1, 1, uchar>                                     mFace;
    ::ll::TypedStorage<4, 4, float>                                     mBreakProgress;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakingBlockAfterEventIntermediateData&
    operator=(ScriptPlayerBreakingBlockAfterEventIntermediateData const&);
    ScriptPlayerBreakingBlockAfterEventIntermediateData(ScriptPlayerBreakingBlockAfterEventIntermediateData const&);
    ScriptPlayerBreakingBlockAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
