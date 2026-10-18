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
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptContainerRules; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                          mWeakItemStackHandle;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
                                                         mWeakItemStackHandle;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::FullContainerName const> mFullContainerName;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptItemInventoryComponentContainer();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptItemInventoryComponentContainer();
#else // @header-generator platform
    virtual ~ScriptItemInventoryComponentContainer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const;
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container* _tryGetContainer() const;
#else // @header-generator platform
    virtual ::Container* _tryGetContainer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemContext _getItemContext(int) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::ItemContext _getItemContext(int slot) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;
#else // @header-generator platform
    MCFOLD ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* $_tryGetContainer() const;
#else // @header-generator platform
    MCAPI ::Container* $_tryGetContainer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemContext $_getItemContext(int) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::ItemContext $_getItemContext(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
