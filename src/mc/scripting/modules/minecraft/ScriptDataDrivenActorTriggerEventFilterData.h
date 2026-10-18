#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptActorEventFilterData.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct ActorUniqueID;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptDataDrivenActorTriggerEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                       mEventType;
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData> mActorData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                                     mEventType;
    ::ll::TypedStorage<8, 56, ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData> mActorData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ScriptDataDrivenActorTriggerEventFilterData& operator=(ScriptDataDrivenActorTriggerEventFilterData const&);
#else // @header-generator platform
#endif // @header-generator platform
    ScriptDataDrivenActorTriggerEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptDataDrivenActorTriggerEventFilterData();
#else // @header-generator platform
    MCAPI ScriptDataDrivenActorTriggerEventFilterData(
        ::std::string const&   eventType,
        ::ActorUniqueID const& actorId,
        ::HashedString const&  typeIdHash
    );

    MCAPI ~ScriptDataDrivenActorTriggerEventFilterData();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptDataDrivenActorTriggerEventFilterData
    create(std::string const&, ::ScriptModuleMinecraft::ScriptActorData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& eventType, ::ActorUniqueID const& actorId, ::HashedString const& typeIdHash);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
