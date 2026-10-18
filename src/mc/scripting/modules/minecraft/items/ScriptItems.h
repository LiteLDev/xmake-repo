#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/items/ScriptItemType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemType; }
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItems {
public:
    // ScriptItems inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ItemTypesMap =
        std::unordered_map<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>;
#else // @header-generator platform
    using ItemTypesMap = ::std::
        unordered_map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const> mItemRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                        mItems;
    ::ll::UntypedStorage<8, 40>                        mItemAliases;
    ::ll::UntypedStorage<8, 40>                        mThirdPartyItems;
    ::ll::TypedStorage<1, 1, bool>                     mRegisteredItems;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>>
        mItems;
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>>
        mItemAliases;
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>>
                                   mThirdPartyItems;
    ::ll::TypedStorage<1, 1, bool> mRegisteredItems;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptItems& operator=(ScriptItems const&);
    ScriptItems();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>> _registerItemType(
        std::unordered_map<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>&,
        ::Scripting::WeakLifetimeScope,
        std::string,
        bool
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    _registerItemType(
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>& registry,
        ::Scripting::WeakLifetimeScope                                                      scope,
        ::std::string                                                                       itemName,
        bool                                                                                allowAirBlockItem
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _registerItems(::Scripting::WeakLifetimeScope&, bool);
#else // @header-generator platform
    MCAPI void _registerItems(::Scripting::WeakLifetimeScope& scope, bool allowAirBlockItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryRegisterItemTypeAlias(::HashedString const&);
#else // @header-generator platform
    MCAPI void _tryRegisterItemTypeAlias(::HashedString const& aliasName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>
           get(::Scripting::WeakLifetimeScope&, std::string const&, bool);
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    get(::Scripting::WeakLifetimeScope& scope, ::std::string const& itemName, bool allowAirBlockItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>
           getAll(::Scripting::WeakLifetimeScope&, bool);

    MCNAPI ~ScriptItems();
#else // @header-generator platform
    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    getAll(::Scripting::WeakLifetimeScope& scope, bool allowAirBlockItem);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>
    _getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope, std::string const&);
#else // @header-generator platform
    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    _getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope scope, ::std::string const& lookupName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&, ::ItemRegistryRef const);
#else // @header-generator platform
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder, ::ItemRegistryRef itemRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, std::string>
    generateItemPropertyNameToRawNameMap(::ItemRegistryRef const, bool);
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, ::std::string>
    generateItemPropertyNameToRawNameMap(::ItemRegistryRef itemRegistry, bool allowAirBlockItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>
    getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope, std::string const&);
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static ::std::vector<::std::string> generatetItemCooldownCategories(::ItemRegistryRef itemRegistry);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope scope, ::std::string const& identifier);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
