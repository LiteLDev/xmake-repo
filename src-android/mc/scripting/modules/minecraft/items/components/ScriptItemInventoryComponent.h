#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
class DynamicContainerTracker;
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemInventoryComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<DynamicContainerTracker>>     mDynamicContainerTracker;
    ::ll::TypedStorage<8, 40, std::optional<Scripting::StrongObjectHandle>> mScriptContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemInventoryComponent& operator=(ScriptItemInventoryComponent const&);
    ScriptItemInventoryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemInventoryComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemInventoryComponent(::ScriptModuleMinecraft::ScriptItemInventoryComponent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemInventoryComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
