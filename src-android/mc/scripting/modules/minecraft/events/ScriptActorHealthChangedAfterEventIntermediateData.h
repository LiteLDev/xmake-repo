#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorHealthChangedEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHealthChangedAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActor;
    ::ll::TypedStorage<4, 4, float>                                     mOldValue;
    ::ll::TypedStorage<4, 4, float>                                     mNewValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHealthChangedAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
