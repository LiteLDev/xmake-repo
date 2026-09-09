#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/actor/ActorHealCause.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorHealEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHealAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mHealedActor;
    ::ll::TypedStorage<1, 1, ::ActorHealCause>                          mHealCause;
    ::ll::TypedStorage<4, 4, float>                                     mHealing;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHealAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
