#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { class Release; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPrecipitationInteractionsComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockPrecipitationInteractionsComponent& operator=(ScriptBlockPrecipitationInteractionsComponent const&);
    ScriptBlockPrecipitationInteractionsComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockPrecipitationInteractionsComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    accumulatesSnow() const;

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isSnowLoggable() const;

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    obstructsRain() const;
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
