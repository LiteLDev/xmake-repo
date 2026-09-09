#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorEventFilterData.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct ActorUniqueID;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptDataDrivenActorTriggerEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                       mEventType;
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData> mActorData;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerEventFilterData& operator=(ScriptDataDrivenActorTriggerEventFilterData const&);
    ScriptDataDrivenActorTriggerEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptDataDrivenActorTriggerEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptDataDrivenActorTriggerEventFilterData
    create(std::string const&, ::ScriptModuleMinecraft::ScriptActorData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
