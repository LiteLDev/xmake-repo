#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mActorId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mTypeIdHash;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mTypeIdHash;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptActorEventFilterData& operator=(ScriptActorEventFilterData const&);
    ScriptActorEventFilterData();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptActorEventFilterData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft::EventFilters
