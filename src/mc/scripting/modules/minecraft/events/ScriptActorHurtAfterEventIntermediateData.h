#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class Level;
struct ActorHurtEvent;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft {

struct ScriptActorHurtAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData>              mHurtActor;
    ::ll::TypedStorage<4, 4, float>                                                  mDamage;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mDamagingActor;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mProjectileActor;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>                mCause;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData>                   mHurtActor;
    ::ll::TypedStorage<4, 4, float>                                                       mDamage;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mDamagingActor;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mProjectileActor;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>                     mCause;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptActorHurtAfterEventIntermediateData();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
