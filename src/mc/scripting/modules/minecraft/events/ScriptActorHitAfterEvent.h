#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/scripting/modules/minecraft/block/ScriptBlock.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEventIntermediateData; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEventIntermediateData; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHitAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mActor;
    ::ll::UntypedStorage<8, 40> mHitActor;
    ::ll::UntypedStorage<8, 40> mHitBlock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
            mHitActor;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
            mHitBlock;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHitAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorHitAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ScriptActorHitAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptActorHitAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
