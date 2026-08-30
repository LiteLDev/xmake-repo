#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemReleaseUseEvent;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemReleaseUseAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>   mScriptItem;
    ::ll::UntypedStorage<8, 32>   mSource;
    ::ll::TypedStorage<4, 4, int> mUseDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemReleaseUseAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemReleaseUseAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
