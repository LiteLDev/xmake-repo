#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
class JukeboxBlockActor;
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRecordPlayerComponentV010 : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // prevent constructor by default
    ScriptBlockRecordPlayerComponentV010& operator=(ScriptBlockRecordPlayerComponentV010 const&);
    ScriptBlockRecordPlayerComponentV010();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockRecordPlayerComponentV010();
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
