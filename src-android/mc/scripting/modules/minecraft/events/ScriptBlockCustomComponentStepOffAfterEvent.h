#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentStepOffAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent,
                                                     public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentStepOffAfterEvent inner types define
    using IntermediateStorage = ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentStepOffAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentStepOffAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static std::vector<ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&,
        void>>
    tryGetComponentsToExecute(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
