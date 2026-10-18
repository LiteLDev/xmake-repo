#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/actor/PistonState.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class PistonBlockActor;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlock; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockPistonComponentContainer; }
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPistonComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mScriptContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockPistonComponent& operator=(ScriptBlockPistonComponent const&);
    ScriptBlockPistonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockPistonComponent();
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        16,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPistonComponentContainer>>
        mScriptContainer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPistonComponent>
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
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPistonComponent>
    tryCreate(::BlockSource& region, ::BlockPos position, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
