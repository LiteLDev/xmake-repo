#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/world/actor/ActorDefinitionModifier.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorUpgradeAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorUpgradeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                     mActor;
    ::ll::TypedStorage<8, 24, std::string>                          mUpgrade;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionModifier>> mModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorUpgradeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorUpgradeAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
