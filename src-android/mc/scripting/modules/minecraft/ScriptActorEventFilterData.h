#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mActorId;
    ::ll::TypedStorage<8, 40, ::HashedString> mTypeIdHash;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorEventFilterData& operator=(ScriptActorEventFilterData const&);
    ScriptActorEventFilterData();
};

} // namespace ScriptModuleMinecraft::EventFilters
