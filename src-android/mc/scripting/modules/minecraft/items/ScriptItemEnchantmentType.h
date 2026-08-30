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
    using Key = std::string;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Enchant const*> mEnchant;
    ::ll::UntypedStorage<1, 1>                 mEnchantType;
    ::ll::TypedStorage<8, 24, std::string>     mName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Enchant::Type getType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Enchant::Type getEnchantType(
        std::variant<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemEnchantmentType>,
            std::string> const&
    );

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemEnchantmentType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const&, ::Enchant::Type const);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
