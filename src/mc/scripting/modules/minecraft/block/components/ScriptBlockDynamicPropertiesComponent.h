#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { struct ScriptBlockInvalidComponentError; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptBlockDynamicPropertiesComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // prevent constructor by default
    ScriptBlockDynamicPropertiesComponent& operator=(ScriptBlockDynamicPropertiesComponent const&);
    ScriptBlockDynamicPropertiesComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockDynamicPropertiesComponent();
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
class ScriptBlockDynamicPropertiesComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraft
