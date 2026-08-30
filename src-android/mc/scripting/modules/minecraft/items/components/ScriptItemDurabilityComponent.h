#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
struct FloatRange;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptInvalidItemStackError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct NumberRange; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemDurabilityComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptItemDurabilityComponent& operator=(ScriptItemDurabilityComponent const&);
    ScriptItemDurabilityComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemDurabilityComponent();
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
