#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorApplyDamageByProjectileOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mDamagingEntity;
    ::ll::UntypedStorage<8, 32> mDamagingProjectile;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const&) const;

    MCNAPI ~ScriptActorApplyDamageByProjectileOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
