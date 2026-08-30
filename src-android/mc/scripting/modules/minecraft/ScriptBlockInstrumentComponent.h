#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptWorldSoundOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockInstrumentComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mDimension;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockInstrumentComponent& operator=(ScriptBlockInstrumentComponent const&);
    ScriptBlockInstrumentComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockInstrumentComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        std::string,
        Scripting::InvalidArgumentError,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
        getInstrumentName(::ScriptModuleMinecraft::ScriptFacing) const;
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
