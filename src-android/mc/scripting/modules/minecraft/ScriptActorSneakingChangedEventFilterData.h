#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorSneakingChangedEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorSneakingChangedEventFilterData& operator=(ScriptActorSneakingChangedEventFilterData const&);
    ScriptActorSneakingChangedEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptActorSneakingChangedEventFilterData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
