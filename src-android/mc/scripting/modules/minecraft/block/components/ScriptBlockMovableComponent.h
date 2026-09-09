#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"
#include "mc/scripting/modules/minecraft/block/components/ScriptMovementType.h"
#include "mc/scripting/modules/minecraft/block/components/ScriptStickyType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { class Release; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockMovableComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockMovableComponent& operator=(ScriptBlockMovableComponent const&);
    ScriptBlockMovableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockMovableComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        ScriptModuleMinecraft::ScriptMovementType,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    movementType() const;

    MCNAPI ::Scripting::Result<
        ScriptModuleMinecraft::ScriptStickyType,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    stickyType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindMovementType();

    MCNAPI static ::Scripting::EnumBinding bindStickyType();
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
