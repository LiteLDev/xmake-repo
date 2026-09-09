#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/ScriptActorEventFilterData.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorHurtAfterEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData> mActorFilterData;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData>                          mActorData;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>                            mDamageCause;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHurtAfterEventFilterData& operator=(ScriptActorHurtAfterEventFilterData const&);
    ScriptActorHurtAfterEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptActorHurtAfterEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilterData
    create(::ScriptModuleMinecraft::ScriptActorData const&, ::SharedTypes::Legacy::ActorDamageCause);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
