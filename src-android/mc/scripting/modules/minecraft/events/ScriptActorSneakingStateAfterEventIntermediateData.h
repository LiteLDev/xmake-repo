#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorSneakingStateAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorSneakingStateAfterEventIntermediateData&
    operator=(ScriptActorSneakingStateAfterEventIntermediateData const&);
    ScriptActorSneakingStateAfterEventIntermediateData(ScriptActorSneakingStateAfterEventIntermediateData const&);
    ScriptActorSneakingStateAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptActorSneakingStateAfterEventIntermediateData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
