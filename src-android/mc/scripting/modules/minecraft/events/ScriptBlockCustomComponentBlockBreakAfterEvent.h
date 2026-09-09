#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/scripting/modules/minecraft/block/ScriptBlock.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentBlockBreakAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentBlockBreakAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mEntity;
    ::ll::UntypedStorage<8, 40> mDestructionCauseBlock;
    ::ll::UntypedStorage<8, 32> mPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentBlockBreakAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentBlockBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&
    );

    MCNAPI ScriptBlockCustomComponentBlockBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static std::vector<ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&,
        void>>
    tryGetComponentsToExecute(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&);

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
