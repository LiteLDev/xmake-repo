#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptEnchantInfo.h"
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootItemMatchToolCondition;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct NumberRange; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMatchToolCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>     mScope;
    ::ll::TypedStorage<8, 8, ::LootItemMatchToolCondition const&> mCondition;
    ::ll::UntypedStorage<8, 32>                                   mEnchantInfos;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMatchToolCondition& operator=(ScriptMatchToolCondition const&);
    ScriptMatchToolCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<std::string> const getItemTagsAny() const;

    MCNAPI std::vector<std::string> const getItemTagsNone() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
