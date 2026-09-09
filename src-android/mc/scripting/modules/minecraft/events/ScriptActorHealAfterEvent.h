#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorHealSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorHealAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHealAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                              mHealedActor;
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptActorHealSource> mHealSource;
    ::ll::TypedStorage<4, 4, float>                                          mHealing;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHealAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorHealAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope&
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
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
