#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack>                             mBeforeItemStack;
    ::ll::TypedStorage<8, 152, ::ItemStack>                             mAfterItemStack;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityIntermediateData();
};

} // namespace ScriptModuleMinecraft
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
