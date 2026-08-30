#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerBreakAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentPlayerBreakAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mPlayer;
    ::ll::UntypedStorage<8, 32> mPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerBreakAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentPlayerBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV1();

    MCNAPI static std::vector<ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&,
        void>>
    tryGetComponentsToExecute(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
