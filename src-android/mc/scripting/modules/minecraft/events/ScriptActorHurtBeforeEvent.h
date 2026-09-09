#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorDamageSource.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHurtBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                                 mHurtActor;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorDamageSource> mDamageSource;
    ::ll::TypedStorage<1, 1, bool>                                              mCancel;
    ::ll::TypedStorage<1, 1, bool>                                              mWasModified;
    ::ll::TypedStorage<4, 4, float>                                             mDamage;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHurtBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorHurtBeforeEvent(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent const&);

    MCNAPI ScriptActorHurtBeforeEvent(
        ::Actor const&,
        ::ScriptModuleMinecraft::ScriptActorDamageSource,
        float,
        ::Scripting::WeakLifetimeScope&
    );

    MCNAPI float getDamage() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent const&);

    MCNAPI bool wasModified() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent const&);

    MCNAPI void*
    $ctor(::Actor const&, ::ScriptModuleMinecraft::ScriptActorDamageSource, float, ::Scripting::WeakLifetimeScope&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
