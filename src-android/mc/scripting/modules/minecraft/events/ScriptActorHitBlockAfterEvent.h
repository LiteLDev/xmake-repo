#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHitBlockAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                     mActor;
    ::ll::UntypedStorage<8, 32>                                     mHitBlock;
    ::ll::UntypedStorage<8, 32>                                     mHitBlockPermutation;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mFace;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHitBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorHitBlockAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const&,
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
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
