#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockLiquidContainerComponentV010.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPotionContainerComponentV010
: public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponentV010 {
public:
    // prevent constructor by default
    ScriptBlockPotionContainerComponentV010& operator=(ScriptBlockPotionContainerComponentV010 const&);
    ScriptBlockPotionContainerComponentV010();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockPotionContainerComponentV010();
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

} // namespace ScriptModuleMinecraft
