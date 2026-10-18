#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionModifier.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorDefinitionModifier;
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorUpgradeAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorUpgradeAfterEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptActorUpgradeAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                     mActor;
    ::ll::TypedStorage<8, 24, std::string>                          mUpgrade;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionModifier>> mModifiers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<8, 32, ::std::string>                                                              mUpgrade;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionModifier>>                                   mModifiers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptActorUpgradeAfterEvent& operator=(ScriptActorUpgradeAfterEvent const&);
#endif // @header-generator platform
    ScriptActorUpgradeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorUpgradeAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptActorUpgradeAfterEvent(::ScriptModuleMinecraft::ScriptActorUpgradeAfterEvent const&);

    MCAPI ScriptActorUpgradeAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData> actorUpgradeEvent,
        ::Scripting::WeakLifetimeScope const&                                                    scope
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptActorUpgradeAfterEvent const&);

    MCFOLD void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData> actorUpgradeEvent,
        ::Scripting::WeakLifetimeScope const&                                                    scope
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
