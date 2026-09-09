#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/items/potions/ScriptPotionDeliveryType.h"
#include "mc/scripting/modules/minecraft/items/potions/ScriptPotionEffectType.h"
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Potion;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptInvalidPotionDeliveryTypeError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidPotionEffectTypeError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPotions {
public:
    // ScriptPotions inner types define
    using Key = ::HashedString;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mPotionDeliveryTypeHandles;
    ::ll::UntypedStorage<8, 40> mPotionEffectTypeHandles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptPotions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPotions>
    _getHandle(::Scripting::WeakLifetimeScope&);

    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPotionDeliveryType>
        getOrCreatePotionDeliveryType(::Potion::PotionType, ::Scripting::WeakLifetimeScope);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPotionEffectType>
        getOrCreatePotionEffectType(::gsl::not_null<std::shared_ptr<const Potion>>, ::Scripting::WeakLifetimeScope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
