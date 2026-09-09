#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/scripting/modules/minecraft/block/ScriptBlock.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHitAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mActor;
    ::ll::UntypedStorage<8, 40> mHitActor;
    ::ll::UntypedStorage<8, 40> mHitBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHitAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorHitAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ScriptActorHitAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
