#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionModifier.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUpgradeEndedEvent;
#else // @header-generator platform
struct ActorDefinitionModifier;
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorUpgradeAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData>   mActor;
    ::ll::TypedStorage<8, 24, std::string const>                          mUpgrade;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionModifier> const> mDefinitionModifiers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData>       mActor;
    ::ll::TypedStorage<8, 32, ::std::string const>                            mUpgrade;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionModifier> const> mDefinitionModifiers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptActorUpgradeAfterEventIntermediateData();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
