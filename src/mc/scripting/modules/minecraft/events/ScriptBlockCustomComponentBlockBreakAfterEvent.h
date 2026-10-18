#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/scripting/modules/minecraft/block/ScriptBlock.h"
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
namespace ScriptModuleMinecraft { class ScriptBlock; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentBlockBreakAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentBlockBreakAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40> mEntity;
    ::ll::UntypedStorage<8, 40> mDestructionCauseBlock;
    ::ll::UntypedStorage<8, 32> mPermutation;
#else // @header-generator platform
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
            mEntity;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
            mDestructionCauseBlock;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mPermutation;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentBlockBreakAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockCustomComponentBlockBreakAfterEvent(
#else // @header-generator platform
    MCAPI ScriptBlockCustomComponentBlockBreakAfterEvent(
#endif // @header-generator platform
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockCustomComponentBlockBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptBlockCustomComponentBlockBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                             scope
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&);
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
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const&
    );
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                             scope
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
