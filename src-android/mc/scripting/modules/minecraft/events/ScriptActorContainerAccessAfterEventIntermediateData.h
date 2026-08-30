#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorContainerAccessAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData>              mActor;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mAccessSourceActor;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorContainerAccessAfterEventIntermediateData&
    operator=(ScriptActorContainerAccessAfterEventIntermediateData const&);
    ScriptActorContainerAccessAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorContainerAccessAfterEventIntermediateData(::Actor const&, ::Actor const&);

    MCNAPI ~ScriptActorContainerAccessAfterEventIntermediateData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const&, ::Actor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
