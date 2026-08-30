#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mPlayer;
    ::ll::UntypedStorage<8, 32> mBrokenBlockPermutation;
    ::ll::UntypedStorage<8, 40> mAfterBreakItemStack;
    ::ll::UntypedStorage<8, 40> mBeforeBreakItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerBreakBlockAfterEvent(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent const&);

    MCNAPI ScriptPlayerBreakBlockAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent const&);

    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
