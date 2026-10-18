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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData> mActorFilterData;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData>                          mActorData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData> mActorFilterData;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData>                          mActorData;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>                            mDamageCause;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptActorHurtAfterEventFilterData& operator=(ScriptActorHurtAfterEventFilterData const&);
    ScriptActorHurtAfterEventFilterData();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptActorHurtAfterEventFilterData();
#else // @header-generator platform
    MCAPI ~ScriptActorHurtAfterEventFilterData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilterData
    create(::ScriptModuleMinecraft::ScriptActorData const&, ::SharedTypes::Legacy::ActorDamageCause);
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilterData create(
        ::ScriptModuleMinecraft::ScriptActorData const& actorData,
        ::SharedTypes::Legacy::ActorDamageCause         damageCause
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
