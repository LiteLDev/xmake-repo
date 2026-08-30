#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentBlockStateChangeAfterEventIntermediateStorage; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentBlockStateChangeAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentBlockStateChangeAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockStateChangeAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mPermutation;
    ::ll::UntypedStorage<8, 32> mPreviousPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentBlockStateChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentBlockStateChangeAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockStateChangeAfterEventIntermediateStorage const&,
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
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockStateChangeAfterEventIntermediateStorage const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockStateChangeAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
