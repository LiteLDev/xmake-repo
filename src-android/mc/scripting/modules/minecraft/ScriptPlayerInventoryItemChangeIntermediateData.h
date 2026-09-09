#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/scripting/modules/minecraft/items/ScriptPlayerInventoryType.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInventoryItemChangeIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData>          mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack>                                      mBeforeItemStack;
    ::ll::TypedStorage<8, 152, ::ItemStack>                                      mAfterItemStack;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptPlayerInventoryType> mPlayerInventoryType;
    ::ll::TypedStorage<4, 4, int>                                                mSlotNumber;
    ::ll::TypedStorage<1, 1, bool>                                               mIsQuantityChanged;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInventoryItemChangeIntermediateData();
};

} // namespace ScriptModuleMinecraft
