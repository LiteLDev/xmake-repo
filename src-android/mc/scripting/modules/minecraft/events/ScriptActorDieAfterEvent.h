#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorDamageSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorDieAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorDieAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                                 mDeadActor;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorDamageSource> mDamageSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorDieAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorDieAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptActorDieAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorDieAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptActorDieAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorDieAfterEvent const&);
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
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
