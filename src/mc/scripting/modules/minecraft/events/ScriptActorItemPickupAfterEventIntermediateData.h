#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorItemPickupAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActor;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>                   mItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mActor;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>               mItems;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptActorItemPickupAfterEventIntermediateData();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
