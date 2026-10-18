#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerInteractAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentPlayerInteractAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                                     mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
                                                                    mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mFace;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<Vec3>>                  mHitAbsolute;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>>                  mHitRelative;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>              mHitAbsolute;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>              mHitRelative;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerInteractAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockCustomComponentPlayerInteractAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptBlockCustomComponentPlayerInteractAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                 scope
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
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const&
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
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                 scope
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
