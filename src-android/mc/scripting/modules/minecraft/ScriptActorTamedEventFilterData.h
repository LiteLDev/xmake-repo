#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorTamedEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mTamingActorData;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorTamedEventFilterData& operator=(ScriptActorTamedEventFilterData const&);
    ScriptActorTamedEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptActorTamedEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorTamedEventFilterData
    create(::Actor const&, ::Actor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
