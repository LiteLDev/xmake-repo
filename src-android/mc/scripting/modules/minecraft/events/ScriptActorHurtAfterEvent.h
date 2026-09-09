#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorDamageSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHurtAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                                 mHurtActor;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorDamageSource> mDamageSource;
    ::ll::TypedStorage<4, 4, float>                                             mDamage;
    ::ll::UntypedStorage<8, 40>                                                 mDamagingActor;
    ::ll::UntypedStorage<8, 40>                                                 mProjectile;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>           mCause;
    ::ll::TypedStorage<8, 24, std::string>                                      mStringCause;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHurtAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorHurtAfterEvent(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);

    MCNAPI ScriptActorHurtAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);

    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
