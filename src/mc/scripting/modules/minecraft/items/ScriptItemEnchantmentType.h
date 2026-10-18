#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Enchant;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentType {
public:
    // ScriptItemEnchantmentType inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Key = std::string;
#else // @header-generator platform
    using Key = ::std::string;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Enchant const*> mEnchant;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1>                 mEnchantType;
    ::ll::TypedStorage<8, 24, std::string>     mName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Enchant::Type getType() const;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Enchant::Type>  mEnchantType;
    ::ll::TypedStorage<8, 32, ::std::string>   mName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Enchant::Type getEnchantType(
        std::variant<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemEnchantmentType>,
            std::string> const&
#else // @header-generator platform
    MCAPI static ::Enchant::Type getEnchantType(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>,
            ::std::string> const& enchantmentTypeOrId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemEnchantmentType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const&, ::Enchant::Type const);
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::Enchant::Type enchantmentType);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
