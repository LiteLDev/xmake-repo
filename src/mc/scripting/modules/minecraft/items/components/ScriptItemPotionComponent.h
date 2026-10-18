#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPotionDeliveryType; }
namespace ScriptModuleMinecraft { class ScriptPotionEffectType; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemPotionComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptItemPotionComponent& operator=(ScriptItemPotionComponent const&);
    ScriptItemPotionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemPotionComponent();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPotionDeliveryType>,
        Scripting::EngineError,
        Scripting::Error>
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>,
        ::Scripting::EngineError,
        ::Scripting::Error>
#endif // @header-generator platform
    _getPotionDeliveryType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPotionEffectType>,
        Scripting::EngineError,
        Scripting::Error>
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>,
        ::Scripting::EngineError,
        ::Scripting::Error>
#endif // @header-generator platform
    _getPotionEffectType() const;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
