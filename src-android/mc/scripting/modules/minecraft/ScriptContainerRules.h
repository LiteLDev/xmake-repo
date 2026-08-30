#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class StorageItemComponent;
class StorageWeightLimitItemComponent;
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                         mAllowNestedStorageItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mBannedItemsDescriptor;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mAllowedItemsDescriptor;
    ::ll::TypedStorage<4, 8, std::optional<int>>           mWeightLimit;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptContainerRules(::ScriptModuleMinecraft::ScriptContainerRules const&);

    MCNAPI ScriptContainerRules(::StorageItemComponent const&, ::StorageWeightLimitItemComponent const*);

    MCNAPI ~ScriptContainerRules();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptContainerRules const&);

    MCNAPI void* $ctor(::StorageItemComponent const&, ::StorageWeightLimitItemComponent const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
