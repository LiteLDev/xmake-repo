#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockLiquidContainerComponentV010.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraft {

class ScriptBlockWaterContainerComponentV010
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponentV010 {
public:
    // prevent constructor by default
    ScriptBlockWaterContainerComponentV010& operator=(ScriptBlockWaterContainerComponentV010 const&);
    ScriptBlockWaterContainerComponentV010();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockWaterContainerComponentV010();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static std::optional<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockWaterContainerComponentV010>>
    tryCreate(::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&);
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
