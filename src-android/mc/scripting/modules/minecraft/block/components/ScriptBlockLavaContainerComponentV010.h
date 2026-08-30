#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockLiquidContainerComponentV010.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockLavaContainerComponentV010
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

} // namespace ScriptModuleMinecraft
