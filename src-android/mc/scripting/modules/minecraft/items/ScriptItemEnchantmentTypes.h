#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/items/ScriptItemEnchantmentType.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentTypes {
public:
    // ScriptItemEnchantmentTypes inner types define
    using EnchantmentTypesMap = std::unordered_map<
        Enchant::Type,
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemEnchantmentType>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mEnchantments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemEnchantmentType>>
           get(::Scripting::WeakLifetimeScope&, std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
