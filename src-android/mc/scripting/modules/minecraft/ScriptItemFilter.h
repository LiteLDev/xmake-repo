#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/items/ScriptItemType.h"
#include "mc/world/item/query/ItemQueryOptions.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
namespace ScriptModuleMinecraft { class ScriptItemFilterError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                                    mAllowedItemTypes;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<ItemQueryOptions, bool>>> mProcessedItemQueryOptions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator()(::ItemStack const&) const;

    MCNAPI void processItemQueryOptions(::Scripting::WeakLifetimeScope const&);

    MCNAPI ~ScriptItemFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
