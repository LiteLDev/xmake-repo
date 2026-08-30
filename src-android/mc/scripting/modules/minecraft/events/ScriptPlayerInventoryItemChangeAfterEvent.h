#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"
#include "mc/scripting/modules/minecraft/items/ScriptPlayerInventoryType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInventoryItemChangeIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInventoryItemChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                                  mPlayerHandle;
    ::ll::UntypedStorage<8, 40>                                                  mBeforeItemStack;
    ::ll::UntypedStorage<8, 40>                                                  mAfterItemStack;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptPlayerInventoryType> mplayerInventoryType;
    ::ll::TypedStorage<4, 4, int>                                                mSlotNumber;
    ::ll::TypedStorage<1, 1, bool>                                               mIsQuantityChangedOnly;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInventoryItemChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerInventoryItemChangeAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent const&);
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
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
