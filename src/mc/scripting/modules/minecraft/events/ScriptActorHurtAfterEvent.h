#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/actor/ScriptActorDamageSource.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHurtAfterEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptActorHurtAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                                 mHurtActor;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorDamageSource> mDamageSource;
    ::ll::TypedStorage<4, 4, float>                                             mDamage;
    ::ll::UntypedStorage<8, 40>                                                 mDamagingActor;
    ::ll::UntypedStorage<8, 40>                                                 mProjectile;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>           mCause;
    ::ll::TypedStorage<8, 24, std::string>                                      mStringCause;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mHurtActor;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorDamageSource>                           mDamageSource;
    ::ll::TypedStorage<4, 4, float>                                                                       mDamage;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
            mDamagingActor;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
                                                                      mProjectile;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mCause;
    ::ll::TypedStorage<8, 32, ::std::string>                          mStringCause;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHurtAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorHurtAfterEvent(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);
#else // @header-generator platform
    MCAPI ScriptActorHurtAfterEvent(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorHurtAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptActorHurtAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                        scope
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCAPI ~ScriptActorHurtAfterEvent();
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
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                        scope
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
