#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/items/potions/ScriptPotionDeliveryType.h"
#include "mc/scripting/modules/minecraft/items/potions/ScriptPotionEffectType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Potion;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptInvalidPotionDeliveryTypeError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidPotionEffectTypeError; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPotionDeliveryType; }
namespace ScriptModuleMinecraft { class ScriptPotionEffectType; }
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct EngineError; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPotions {
public:
    // ScriptPotions inner types define
    using Key = ::HashedString;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40> mPotionDeliveryTypeHandles;
    ::ll::UntypedStorage<8, 40> mPotionEffectTypeHandles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptPotions();
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::Potion::PotionType,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>>>
        mPotionDeliveryTypeHandles;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>>
        mPotionEffectTypeHandles;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPotions>
    _getHandle(::Scripting::WeakLifetimeScope&);
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotions>
    _getHandle(::Scripting::WeakLifetimeScope& scope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPotionDeliveryType>
        getOrCreatePotionDeliveryType(::Potion::PotionType, ::Scripting::WeakLifetimeScope);
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>
    getOrCreatePotionDeliveryType(::Potion::PotionType potionType, ::Scripting::WeakLifetimeScope scope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPotionEffectType>
        getOrCreatePotionEffectType(::gsl::not_null<std::shared_ptr<const Potion>>, ::Scripting::WeakLifetimeScope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>
    getOrCreatePotionEffectType(
        ::gsl::not_null<::std::shared_ptr<::Potion const>> potion,
        ::Scripting::WeakLifetimeScope                     scope
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
