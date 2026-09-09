#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionStartedAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                mBlocks;
    ::ll::UntypedStorage<8, 32>                                     mDimension;
    ::ll::UntypedStorage<8, 40>                                     mSource;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                        mBlockSource;
    ::ll::TypedStorage<8, 8, ::Scripting::WeakLifetimeScope const&> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExplosionStartedAfterEvent& operator=(ScriptExplosionStartedAfterEvent const&);
    ScriptExplosionStartedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptExplosionStartedAfterEvent(::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent const&);

    MCNAPI ScriptExplosionStartedAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData> const&,
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent const&);

    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
