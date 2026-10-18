#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentEntityFallOnAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentEntityFallOnAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>           mEntity;
#else // @header-generator platform
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
                                          mEntity;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float const> mFallDistance;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ScriptBlockCustomComponentEntityFallOnAfterEvent&
    operator=(ScriptBlockCustomComponentEntityFallOnAfterEvent const&);
#else // @header-generator platform
#endif // @header-generator platform
    ScriptBlockCustomComponentEntityFallOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockCustomComponentEntityFallOnAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptBlockCustomComponentEntityFallOnAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                               scope
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static std::vector<ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&,
        void>>
    tryGetComponentsToExecute(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage const&
    );
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                               scope
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
