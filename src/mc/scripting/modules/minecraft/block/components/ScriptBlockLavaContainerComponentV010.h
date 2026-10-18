#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockLiquidContainerComponentV010.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraft {

class ScriptBlockLavaContainerComponentV010
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponentV010 {
public:
    // prevent constructor by default
    ScriptBlockLavaContainerComponentV010& operator=(ScriptBlockLavaContainerComponentV010 const&);
    ScriptBlockLavaContainerComponentV010();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockLavaContainerComponentV010();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
: public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponentV010 {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraft
