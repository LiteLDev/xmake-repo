#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/actor/ActorDefinitionModifier.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionEndedEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDataDrivenActorTriggerAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData>   mActor;
    ::ll::TypedStorage<8, 24, std::string const>                          mEvent;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionModifier> const> mDefinitionModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
