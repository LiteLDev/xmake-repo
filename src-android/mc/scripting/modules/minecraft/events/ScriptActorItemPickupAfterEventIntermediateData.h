#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorItemPickupAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActor;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>                   mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemPickupAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
