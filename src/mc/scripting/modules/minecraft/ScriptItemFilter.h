#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/items/ScriptItemType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/query/ItemQueryOptions.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemFilterError; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemType; }
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                                    mAllowedItemTypes;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<ItemQueryOptions, bool>>> mProcessedItemQueryOptions;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>,
            ::std::string>>>>
                                                                                         mAllowedItemTypes;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::variant<::ItemQueryOptions, bool>>> mProcessedItemQueryOptions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptItemFilter& operator=(ScriptItemFilter const&);
    ScriptItemFilter();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator()(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI ScriptItemFilter(::ScriptModuleMinecraft::ScriptItemFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void processItemQueryOptions(::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI ::nonstd::expected<::ItemQueryOptions, ::std::vector<::ScriptModuleMinecraft::ScriptItemFilterError>>
    getItemQueryOptions(::Scripting::WeakLifetimeScope const& scope) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptItemFilter();
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptItemFilter& operator=(::ScriptModuleMinecraft::ScriptItemFilter&&);

    MCAPI void processItemQueryOptions(::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemFilter const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
