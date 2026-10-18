#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class StorageItemComponent;
class StorageWeightLimitItemComponent;
#else // @header-generator platform
class ItemDescriptor;
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerRules {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                         mAllowNestedStorageItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mBannedItemsDescriptor;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mAllowedItemsDescriptor;
    ::ll::TypedStorage<4, 8, std::optional<int>>           mWeightLimit;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                             mAllowNestedStorageItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mBannedItemsDescriptor;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mAllowedItemsDescriptor;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>             mWeightLimit;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptContainerRules(::ScriptModuleMinecraft::ScriptContainerRules const&);

    MCNAPI ScriptContainerRules(::StorageItemComponent const&, ::StorageWeightLimitItemComponent const*);

    MCNAPI ~ScriptContainerRules();
#else // @header-generator platform
    MCAPI ~ScriptContainerRules();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptContainerRules const&);

    MCNAPI void* $ctor(::StorageItemComponent const&, ::StorageWeightLimitItemComponent const*);
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
