#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithEntityEvent.h"
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityAfterEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mBeforeItemStack;
    ::ll::UntypedStorage<8, 40> mAfterItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptPlayerInteractWithEntityAfterEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);

    MCNAPI ScriptPlayerInteractWithEntityAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData> const&,
        ::Scripting::WeakLifetimeScope&
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);

    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData> const&,
        ::Scripting::WeakLifetimeScope&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
