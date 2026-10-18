#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class Release; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPrecipitationInteractionsComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptBlockPrecipitationInteractionsComponent& operator=(ScriptBlockPrecipitationInteractionsComponent const&);
    ScriptBlockPrecipitationInteractionsComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockPrecipitationInteractionsComponent();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        bool,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
#endif // @header-generator platform
    accumulatesSnow() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        bool,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
#endif // @header-generator platform
    isSnowLoggable() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        bool,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
#endif // @header-generator platform
    obstructsRain() const;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
