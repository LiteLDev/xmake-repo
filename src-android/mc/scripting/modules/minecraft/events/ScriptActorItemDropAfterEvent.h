#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorItemDropAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorItemDropAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mActor;
    ::ll::UntypedStorage<8, 24> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemDropAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorItemDropAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData> const&,
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
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
