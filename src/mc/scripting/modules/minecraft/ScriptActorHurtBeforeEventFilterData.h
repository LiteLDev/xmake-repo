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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>   mDamageCause;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHurtBeforeEventFilterData();

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorHurtBeforeEventFilterData(
        ::ScriptModuleMinecraft::ScriptActorData actorData,
        ::SharedTypes::Legacy::ActorDamageCause  damageCause
    );
    // NOLINTEND

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtBeforeEventFilterData
        create(::ScriptModuleMinecraft::ScriptActorData, ::SharedTypes::Legacy::ActorDamageCause);
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtBeforeEventFilterData
    create(::ScriptModuleMinecraft::ScriptActorData actorData, ::SharedTypes::Legacy::ActorDamageCause damageCause);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ScriptModuleMinecraft::ScriptActorData actorData, ::SharedTypes::Legacy::ActorDamageCause damageCause);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
