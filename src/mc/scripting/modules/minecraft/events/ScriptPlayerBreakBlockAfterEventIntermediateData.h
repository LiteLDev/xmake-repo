#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackBase;
class Player;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Block const&>                            mDestroyedBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                         mPos;
    ::ll::TypedStorage<8, 8, ::Dimension&>                              mDimension;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                          mItemAfter;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                          mItemBefore;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakBlockAfterEventIntermediateData&
    operator=(ScriptPlayerBreakBlockAfterEventIntermediateData const&);
    ScriptPlayerBreakBlockAfterEventIntermediateData(ScriptPlayerBreakBlockAfterEventIntermediateData const&);
    ScriptPlayerBreakBlockAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
