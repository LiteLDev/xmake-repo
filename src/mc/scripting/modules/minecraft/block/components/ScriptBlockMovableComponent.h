#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"
#include "mc/scripting/modules/minecraft/block/components/ScriptMovementType.h"
#include "mc/scripting/modules/minecraft/block/components/ScriptStickyType.h"

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
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockMovableComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptBlockMovableComponent& operator=(ScriptBlockMovableComponent const&);
    ScriptBlockMovableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockMovableComponent();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        ScriptModuleMinecraft::ScriptMovementType,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptMovementType,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
#endif // @header-generator platform
    movementType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        ScriptModuleMinecraft::ScriptStickyType,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptStickyType,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
#endif // @header-generator platform
    stickyType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::EnumBinding bindMovementType();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindMovementType();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindStickyType();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
