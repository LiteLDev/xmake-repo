#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockSource;
class Container;
class ItemContext;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockInventoryComponentContainerV010 : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockActor*>  mBlockActor;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mPosition;
    ::ll::TypedStorage<8, 8, ::BlockSource&> mBlockSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockInventoryComponentContainerV010& operator=(ScriptBlockInventoryComponentContainerV010 const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptBlockInventoryComponentContainerV010(ScriptBlockInventoryComponentContainerV010 const&);
#endif // @header-generator platform
    ScriptBlockInventoryComponentContainerV010();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptBlockInventoryComponentContainerV010();
#else // @header-generator platform
    virtual ~ScriptBlockInventoryComponentContainerV010() /*override*/ = default;
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
