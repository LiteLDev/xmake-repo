#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerHotbarSelectedSlotChangeIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerHotbarSelectedSlotChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>   mPlayerHandle;
    ::ll::TypedStorage<4, 4, int> mPreviousSlotSelected;
    ::ll::TypedStorage<4, 4, int> mNewSlotSelected;
    ::ll::UntypedStorage<8, 40>   mItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerHotbarSelectedSlotChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerHotbarSelectedSlotChangeAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData> const&,
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
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
