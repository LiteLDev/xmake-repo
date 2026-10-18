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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                                 mHurtActor;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorDamageSource> mDamageSource;
    ::ll::TypedStorage<1, 1, bool>                                              mCancel;
    ::ll::TypedStorage<1, 1, bool>                                              mWasModified;
    ::ll::TypedStorage<4, 4, float>                                             mDamage;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mHurtActor;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorDamageSource>                           mDamageSource;
    ::ll::TypedStorage<1, 1, bool>                                                                        mCancel;
    ::ll::TypedStorage<1, 1, bool>                                                                        mWasModified;
    ::ll::TypedStorage<4, 4, float>                                                                       mDamage;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptActorHurtBeforeEvent& operator=(ScriptActorHurtBeforeEvent const&);
#endif // @header-generator platform
    ScriptActorHurtBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorHurtBeforeEvent(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent const&);
#else // @header-generator platform
    MCAPI ScriptActorHurtBeforeEvent(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorHurtBeforeEvent(
        ::Actor const&,
        ::ScriptModuleMinecraft::ScriptActorDamageSource,
        float,
        ::Scripting::WeakLifetimeScope&
#else // @header-generator platform
    MCAPI ScriptActorHurtBeforeEvent(
        ::Actor const&                                   actor,
        ::ScriptModuleMinecraft::ScriptActorDamageSource actorDamageSource,
        float                                            damage,
        ::Scripting::WeakLifetimeScope&                  scope
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI float getDamage() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent const&);

    MCNAPI bool wasModified() const;
#else // @header-generator platform
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::Actor const&, ::ScriptModuleMinecraft::ScriptActorDamageSource, float, ::Scripting::WeakLifetimeScope&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Actor const&                                   actor,
        ::ScriptModuleMinecraft::ScriptActorDamageSource actorDamageSource,
        float                                            damage,
        ::Scripting::WeakLifetimeScope&                  scope
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
