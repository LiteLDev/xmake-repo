#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"
#include "mc/world/level/block/actor/PistonState.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class PistonBlockActor;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPistonComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
