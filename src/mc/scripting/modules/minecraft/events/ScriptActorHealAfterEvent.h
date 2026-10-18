#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorHealSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorHealAfterEventIntermediateData; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHealAfterEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                              mHealedActor;
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptActorHealSource> mHealSource;
    ::ll::TypedStorage<4, 4, float>                                          mHealing;
    // NOLINTEND
#else // @header-generator platform
    // ScriptActorHealAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptActorHealAfterEvent();

public:
    // member functions
#else // @header-generator platform
    // member variables
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorHealAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope&
    );
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mHealedActor;
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptActorHealSource>                              mHealSource;
    ::ll::TypedStorage<4, 4, float>                                                                       mHealing;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope&
    );
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
