#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorHurtBeforeEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>   mDamageCause;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHurtBeforeEventFilterData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtBeforeEventFilterData
        create(::ScriptModuleMinecraft::ScriptActorData, ::SharedTypes::Legacy::ActorDamageCause);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
