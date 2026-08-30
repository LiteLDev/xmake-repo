#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentActorAfterEventIntermediateStorage; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentActorAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent,
                                                   public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentActorAfterEvent inner types define
    using IntermediateStorage = ::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                  mEntity;
    ::ll::TypedStorage<8, 24, std::string const> mName;
    ::ll::UntypedStorage<8, 32>                  mPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentActorAfterEvent& operator=(ScriptBlockCustomComponentActorAfterEvent const&);
    ScriptBlockCustomComponentActorAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentActorAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEvent const&
    );

    MCNAPI ScriptBlockCustomComponentActorAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEventIntermediateStorage const&,
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
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEventIntermediateStorage const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEvent const&);

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
