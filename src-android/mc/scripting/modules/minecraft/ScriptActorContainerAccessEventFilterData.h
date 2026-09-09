#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorContainerAccessEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData>              mActorData;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mAccessSourceActorData;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorContainerAccessEventFilterData& operator=(ScriptActorContainerAccessEventFilterData const&);
    ScriptActorContainerAccessEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorContainerAccessEventFilterData(
        ::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilterData const&
    );

    MCNAPI ~ScriptActorContainerAccessEventFilterData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilterData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
