#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/items/ScriptItemType.h"
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItems {
public:
    // ScriptItems inner types define
    using ItemTypesMap =
        std::unordered_map<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const> mItemRegistry;
    ::ll::UntypedStorage<8, 40>                        mItems;
    ::ll::UntypedStorage<8, 40>                        mItemAliases;
    ::ll::UntypedStorage<8, 40>                        mThirdPartyItems;
    ::ll::TypedStorage<1, 1, bool>                     mRegisteredItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItems& operator=(ScriptItems const&);
    ScriptItems();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>> _registerItemType(
        std::unordered_map<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>&,
        ::Scripting::WeakLifetimeScope,
        std::string,
        bool
    );

    MCNAPI void _registerItems(::Scripting::WeakLifetimeScope&, bool);

    MCNAPI void _tryRegisterItemTypeAlias(::HashedString const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>
           get(::Scripting::WeakLifetimeScope&, std::string const&, bool);

    MCNAPI std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>
           getAll(::Scripting::WeakLifetimeScope&, bool);

    MCNAPI ~ScriptItems();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>
    _getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope, std::string const&);

    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&, ::ItemRegistryRef const);

    MCNAPI static std::unordered_map<std::string, std::string>
    generateItemPropertyNameToRawNameMap(::ItemRegistryRef const, bool);

    MCNAPI static std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>
    getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
