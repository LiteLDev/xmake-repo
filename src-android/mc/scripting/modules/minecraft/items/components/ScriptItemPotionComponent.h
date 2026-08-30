#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPotionDeliveryType; }
namespace ScriptModuleMinecraft { class ScriptPotionEffectType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemPotionComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptItemPotionComponent& operator=(ScriptItemPotionComponent const&);
    ScriptItemPotionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemPotionComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPotionDeliveryType>,
        Scripting::EngineError,
        Scripting::Error>
    _getPotionDeliveryType() const;

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPotionEffectType>,
        Scripting::EngineError,
        Scripting::Error>
    _getPotionEffectType() const;
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
