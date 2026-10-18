#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/actor/ActorHealCause.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorHealEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ActorHealCause>                          mHealCause;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ScriptActorHealEventFilterData& operator=(ScriptActorHealEventFilterData const&);
#else // @header-generator platform
#endif // @header-generator platform
    ScriptActorHealEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorHealEventFilterData(::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilterData const&);
#else // @header-generator platform
    MCAPI
    ScriptActorHealEventFilterData(::ScriptModuleMinecraft::ScriptActorData actorData, ::ActorHealCause healCause);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptActorHealEventFilterData();
#else // @header-generator platform
    MCAPI ~ScriptActorHealEventFilterData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilterData
        create(::ScriptModuleMinecraft::ScriptActorData, ::ActorHealCause);
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilterData
    create(::ScriptModuleMinecraft::ScriptActorData actorData, ::ActorHealCause healCause);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilterData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorData actorData, ::ActorHealCause healCause);
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
