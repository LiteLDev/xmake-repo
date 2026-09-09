#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"
#include "mc/world/containers/FullContainerName.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
namespace ScriptModuleMinecraft { class ScriptContainerRules; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                          mWeakItemStackHandle;
    ::ll::TypedStorage<4, 12, ::FullContainerName const> mFullContainerName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemInventoryComponentContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemInventoryComponentContainer();

    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const;

    virtual ::Container* _tryGetContainer() const;

    virtual ::ItemContext _getItemContext(int) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;

    MCNAPI ::Container* $_tryGetContainer() const;

    MCNAPI ::ItemContext $_getItemContext(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
