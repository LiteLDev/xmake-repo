#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class MobEffectInstance;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                          mWeakActorRef;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                          mWeakActorRef;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                       mMobEffectId;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptActorAddEffectAfterEventIntermediateData();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
